/* f_0x102a49a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102a49a0(Guest* g)
{
    uint32_t al_mc;
    double d103;
    double d104;
    double d21;
    double d52;
    double d59;
    double d81;
    double d88;
    double d95;
    double d96;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t105;
    uint32_t t106;
    uint32_t t107;
    uint32_t t108;
    uint32_t t109;
    uint32_t t11;
    uint32_t t110;
    uint32_t t111;
    uint32_t t112;
    uint32_t t113;
    uint32_t t114;
    uint32_t t115;
    uint32_t t116;
    uint32_t t117;
    uint32_t t118;
    uint32_t t119;
    uint32_t t12;
    uint32_t t120;
    uint32_t t121;
    uint32_t t122;
    uint32_t t123;
    uint32_t t124;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
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
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
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
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 104u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102a49b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp1 - 0x18u); in_esi = rd32(sp1 - 0x14u); in_ebx = rd32(sp1 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x10u); g->edi = rd32(sp1 - 0x18u); g->esi = rd32(sp1 - 0x14u); goto E_102a49b5;
    case 0x102a49c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102a49c3;
    case 0x102a49d2u: ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102a49d2;
    case 0x102a49d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102a49d9;
    case 0x102a49e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102a49e6;
    case 0x102a49ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102a49ec;
    case 0x102a49fau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102a49fa;
    case 0x102a4a00u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102a4a00;
    case 0x102a4a13u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102a4a13;
    case 0x102a4a19u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102a4a19;
    case 0x102a4a27u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102a4a27;
    case 0x102a4a2du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102a4a2d;
    case 0x102a4a3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102a4a3b;
    case 0x102a4a41u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102a4a41;
    case 0x102a4a4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102a4a4f;
    case 0x102a4a55u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102a4a55;
    case 0x102a4a65u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102a4a65;
    case 0x102a4a6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102a4a6b;
    case 0x102a4a81u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102a4a81;
    case 0x102a4a87u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102a4a87;
    case 0x102a4a9au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102a4a9a;
    case 0x102a4aa7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102a4aa7;
    case 0x102a4abeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102a4abe;
    case 0x102a4acdu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102a4acd;
    case 0x102a4ad7u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_102a4ad7;
    case 0x102a4ae6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102a4ae6;
    case 0x102a4aeau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; al_mc = rd32(sp1 - 0xcu); goto E_102a4aea;
    case 0x102a4af1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102a4af1;
    case 0x102a4afdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102a4afd;
    case 0x102a4b07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102a4b07;
    case 0x102a4b0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102a4b0d;
    case 0x102a4b1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102a4b1f;
    case 0x102a4b25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102a4b25;
    case 0x102a4b38u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102a4b38;
    case 0x102a4b3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102a4b3e;
    case 0x102a4b55u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102a4b55;
    case 0x102a4b5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102a4b5b;
    case 0x102a4b75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102a4b75;
    case 0x102a4b7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102a4b7b;
    case 0x102a4b89u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102a4b89;
    case 0x102a4b8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102a4b8f;
    case 0x102a4b9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102a4b9d;
    case 0x102a4ba7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102a4ba7;
    case 0x102a4bb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102a4bb1;
    case 0x102a4bc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102a4bc1;
    default: break;
    }
#endif

    COW_AT(102a49a0)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp1 - 0x10u, in_ebx);
    wr32(sp1 - 0x14u, in_esi);
    wr32(sp1 - 0x18u, in_edi);
    wr32(sp1 - 0x1cu, arg3);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp1 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(102a49b5)
    wr32(sp1 - 0x20u, arg1);
    wr32(sp1 - 0x24u, COW_IMG(0x103bdd40u));
    g->ebx = arg3;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bdd40u), arg1);
    t4 = g->ecx;
    t5 = g->edx;
    ecx = t4;
    edx = t5;
    COW_AT(102a49c3)
    if ((int32_t)arg2 < 1)
    {
        eax = arg2;
    }
    else
    {
    COW_AT(102a49d2)
        wr32(sp1 - 0x1cu, arg3 + 1u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 0x10u;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, rd32(sp1 - 0x18u), rd32(sp1 - 0x14u));
        t6 = g->ecx;
        t7 = g->edx;
        ecx = t6;
        edx = t7;
    COW_AT(102a49d9)
        wr32(sp1 - 0x20u, rd32(arg1));
        wr32(sp1 - 0x24u, COW_IMG(0x103b41dcu));
        g->ebx = arg3 + 1u;
        g->eax = rd32(arg1);
        g->ecx = ecx;
        g->edx = edx;
        t8 = rd32(arg1);
        g->esp = sp1 - 0x1cu;
        t9 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b41dcu), t8);
        t10 = g->ecx;
        t11 = g->edx;
        eax = t9;
        ecx = t10;
        edx = t11;
    COW_AT(102a49e6)
        wr32(sp1 - 0x28u, arg3 + 1u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp1 - 0x1cu;
        t12 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103b41dcu), rd32(sp1 - 0x20u));
        t13 = g->edx;
        eax = t12;
        edx = t13;
    COW_AT(102a49ec)
        t14 = rd32(arg1 + 0x1cu);
        wr32(sp1 - 0x2cu, t14);
        wr32(sp1 - 0x30u, COW_IMG(0x103bb3d8u));
        g->ebx = arg3 + 1u;
        g->eax = eax;
        g->ecx = t14;
        g->edx = edx;
        g->esp = sp1 - 0x28u;
        t15 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb3d8u), t14);
        t16 = g->ecx;
        t17 = g->edx;
        eax = t15;
        ecx = t16;
        edx = t17;
    COW_AT(102a49fa)
        wr32(sp1 - 0x34u, arg3 + 1u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 0x28u;
        t18 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bb3d8u), rd32(sp1 - 0x2cu));
        t19 = g->ecx;
        t20 = g->edx;
        eax = t18;
        ecx = t19;
        edx = t20;
    COW_AT(102a4a00)
        d21 = (double)rdf32(arg1 + 0x20u);
        wrf64(sp1 - 0x20u, d21);
        wr32(sp1 - 0x24u, COW_IMG(0x103bb3c8u));
        g->ebx = arg3 + 1u;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 0x1cu;
        t22 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb3c8u), cow_dlo(d21));
        t23 = g->ecx;
        t24 = g->edx;
        eax = t22;
        ecx = t23;
        edx = t24;
    COW_AT(102a4a13)
        wr32(sp1 - 0x28u, arg3 + 1u);
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp1 - 0x1cu;
        t25 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bb3c8u), rd32(sp1 - 0x20u));
        t26 = g->ecx;
        eax = t25;
        ecx = t26;
    COW_AT(102a4a19)
        t27 = rd32(arg1 + 0x24u);
        wr32(sp1 - 0x2cu, t27);
        wr32(sp1 - 0x30u, COW_IMG(0x103bdd30u));
        g->ebx = arg3 + 1u;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = t27;
        g->esp = sp1 - 0x28u;
        t28 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bdd30u), t27);
        t29 = g->ecx;
        t30 = g->edx;
        eax = t28;
        ecx = t29;
        edx = t30;
    COW_AT(102a4a27)
        wr32(sp1 - 0x34u, arg3 + 1u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 0x28u;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bdd30u), rd32(sp1 - 0x2cu));
        t31 = g->ecx;
        t32 = g->edx;
        ecx = t31;
        edx = t32;
    COW_AT(102a4a2d)
        t33 = rd32(arg1 + 0x28u);
        wr32(sp1 - 0x38u, t33);
        wr32(sp1 - 0x3cu, COW_IMG(0x103bdd20u));
        g->ebx = arg3 + 1u;
        g->eax = t33;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 0x34u;
        t34 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bdd20u), t33);
        t35 = g->ecx;
        t36 = g->edx;
        eax = t34;
        ecx = t35;
        edx = t36;
    COW_AT(102a4a3b)
        wr32(sp1 - 0x40u, arg3 + 1u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp1 - 0x34u;
        t37 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bdd20u), rd32(sp1 - 0x38u));
        t38 = g->edx;
        eax = t37;
        edx = t38;
    COW_AT(102a4a41)
        t39 = rd32(arg1 + 0x2cu);
        wr32(sp1 - 0x44u, t39);
        wr32(sp1 - 0x48u, COW_IMG(0x103bdd0cu));
        g->ebx = arg3 + 1u;
        g->eax = eax;
        g->ecx = t39;
        g->edx = edx;
        g->esp = sp1 - 0x40u;
        t40 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bdd0cu), t39);
        t41 = g->ecx;
        t42 = g->edx;
        eax = t40;
        ecx = t41;
        edx = t42;
    COW_AT(102a4a4f)
        wr32(sp1 - 0x4cu, arg3 + 1u);
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp1 - 0x40u;
        t43 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bdd0cu), rd32(sp1 - 0x44u));
        t44 = g->ecx;
        eax = t43;
        ecx = t44;
    COW_AT(102a4a55)
        t45 = rd8(arg1 + 0x30u);
        wr32(sp1 - 0x50u, t45);
        wr32(sp1 - 0x54u, COW_IMG(0x103bdcf4u));
        g->ebx = arg3 + 1u;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = t45;
        g->esp = sp1 - 0x4cu;
        t46 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bdcf4u), t45);
        t47 = g->ecx;
        t48 = g->edx;
        eax = t46;
        ecx = t47;
        edx = t48;
    COW_AT(102a4a65)
        wr32(sp1 - 0x58u, arg3 + 1u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 0x4cu;
        t49 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bdcf4u), rd32(sp1 - 0x50u));
        t50 = g->ecx;
        t51 = g->edx;
        eax = t49;
        ecx = t50;
        edx = t51;
    COW_AT(102a4a6b)
        d52 = (double)rdf32(arg1 + 0x38u);
        wrf64(sp1 - 0x20u, d52);
        wr32(sp1 - 0x24u, COW_IMG(0x103bdce0u));
        g->ebx = arg3 + 1u;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 0x1cu;
        t53 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bdce0u), cow_dlo(d52));
        t54 = g->ecx;
        t55 = g->edx;
        eax = t53;
        ecx = t54;
        edx = t55;
    COW_AT(102a4a81)
        wr32(sp1 - 0x28u, arg3 + 1u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 0x1cu;
        t56 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bdce0u), rd32(sp1 - 0x20u));
        t57 = g->ecx;
        t58 = g->edx;
        eax = t56;
        ecx = t57;
        edx = t58;
    COW_AT(102a4a87)
        d59 = (double)rdf32(arg1 + 0x3cu);
        wrf64(sp1 - 0x20u, d59);
        wr32(sp1 - 0x24u, COW_IMG(0x103bdcccu));
        g->ebx = arg3 + 1u;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 0x1cu;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bdcccu), cow_dlo(d59));
        t60 = g->ecx;
        t61 = g->edx;
        ecx = t60;
        edx = t61;
    COW_AT(102a4a9a)
        wr32(sp1 - 0x28u, arg3 + 1u);
        t62 = rd32(arg1 + 0x54u);
        wr32(sp1 - 8u, t62);
        g->eax = t62;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 0x1cu;
        t63 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bdcccu), rd32(sp1 - 0x20u));
        t64 = g->ecx;
        t65 = g->edx;
        eax = t63;
        ecx = t64;
        edx = t65;
    COW_AT(102a4aa7)
        t66 = rd32(sp1 - 8u);
        wr32(sp1 - 0x2cu, t66);
        wr32(sp1 - 0x30u, arg1 + 0x40u);
        wr32(sp1 - 0x34u, COW_IMG(0x103bdca4u));
        wr32(sp1 - 4u, arg1 + 0x40u);
        g->ebx = arg3 + 1u;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 0x2cu;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bdca4u), arg1 + 0x40u);
        t67 = g->ecx;
        t68 = g->edx;
        ecx = t67;
        edx = t68;
        edi = t66;
    COW_AT(102a4abe)
        if ((int32_t)arg2 < 2)
        {
            eax = arg2;
        }
        else
        {
    COW_AT(102a4acd)
            if ((int32_t)edi <= 0)
            {
                eax = arg2;
            }
            else
            {
    COW_AT(102a4ad7)
                wr32(sp1 - 0xcu, arg3 + 2u);
                eax = arg3 + 2u;
                ebx = 0u;
                esi = arg1 + 0x40u;
                al_mc = arg3 + 2u;
L_102a4aea: ;
    COW_AT(102a4aea)
                wr32(sp1 - 0x1cu, ebx);
                wr32(sp1 - 0x20u, esi);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp1 - 0x18u;
                t69 = cow_cdecl(g, COW_IMG(0x102b3be0u), 2, esi, ebx);
                t70 = g->edx;
                eax = t69;
                edx = t70;
    COW_AT(102a4af1)
                t71 = rd32(sp1 - 0xcu);
                wr32(sp1 - 0x24u, t71);
                g->eax = eax;
                g->ecx = t71;
                g->edx = edx;
                g->esp = sp1 - 0x18u;
                t72 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, t71, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
                t73 = g->ecx;
                t74 = g->edx;
                ecx = t73;
                edx = t74;
                esi = eax;
                eax = t72;
    COW_AT(102a4afd)
                wr32(sp1 - 0x28u, COW_IMG(0x103ba878u));
                g->ebx = ebx;
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp1 - 0x20u;
                t75 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba878u), rd32(sp1 - 0x24u));
                t76 = g->ecx;
                t77 = g->edx;
                eax = t75;
                ecx = t76;
                edx = t77;
    COW_AT(102a4b07)
                wr32(sp1 - 0x2cu, arg3 + 3u);
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp1 - 0x20u;
                t78 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 3u, COW_IMG(0x103ba878u), rd32(sp1 - 0x24u));
                t79 = g->ecx;
                t80 = g->edx;
                eax = t78;
                ecx = t79;
                edx = t80;
    COW_AT(102a4b0d)
                wrf64(sp1 - 0x20u, (double)rdf32(esi));
                wr32(sp1 - 0x24u, COW_IMG(0x103bdc98u));
                g->ebx = ebx;
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                d81 = (double)rdf32(esi);
                g->esp = sp1 - 0x1cu;
                t82 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bdc98u), cow_dlo(d81));
                t83 = g->ecx;
                t84 = g->edx;
                eax = t82;
                ecx = t83;
                edx = t84;
    COW_AT(102a4b1f)
                wr32(sp1 - 0x28u, arg3 + 3u);
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp1 - 0x1cu;
                t85 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 3u, COW_IMG(0x103bdc98u), rd32(sp1 - 0x20u));
                t86 = g->ecx;
                t87 = g->edx;
                eax = t85;
                ecx = t86;
                edx = t87;
    COW_AT(102a4b25)
                d88 = (double)rdf32(esi + 4u);
                wrf64(sp1 - 0x20u, d88);
                wr32(sp1 - 0x24u, COW_IMG(0x103bdc8cu));
                g->ebx = ebx;
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp1 - 0x1cu;
                t89 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bdc8cu), cow_dlo(d88));
                t90 = g->ecx;
                t91 = g->edx;
                eax = t89;
                ecx = t90;
                edx = t91;
    COW_AT(102a4b38)
                wr32(sp1 - 0x28u, arg3 + 3u);
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp1 - 0x1cu;
                t92 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 3u, COW_IMG(0x103bdc8cu), rd32(sp1 - 0x20u));
                t93 = g->ecx;
                t94 = g->edx;
                eax = t92;
                ecx = t93;
                edx = t94;
    COW_AT(102a4b3e)
                d95 = (double)rdf32(esi + 0x10u);
                wrf64(sp1 - 0x20u, d95);
                d96 = (double)rdf32(esi + 0xcu);
                wrf64(sp1 - 0x28u, d96);
                wr32(sp1 - 0x2cu, COW_IMG(0x103bdc78u));
                g->ebx = ebx;
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp1 - 0x24u;
                t97 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bdc78u), cow_dlo(d96));
                t98 = g->ecx;
                t99 = g->edx;
                eax = t97;
                ecx = t98;
                edx = t99;
    COW_AT(102a4b55)
                wr32(sp1 - 0x30u, arg3 + 3u);
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp1 - 0x24u;
                t100 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 3u, COW_IMG(0x103bdc78u), rd32(sp1 - 0x28u));
                t101 = g->ecx;
                t102 = g->edx;
                eax = t100;
                ecx = t101;
                edx = t102;
    COW_AT(102a4b5b)
                d103 = (double)rdf32(esi + 0x1cu);
                wrf64(sp1 - 0x20u, d103);
                d104 = (double)rdf32(esi + 0x18u);
                wrf64(sp1 - 0x28u, d104);
                wr32(sp1 - 0x2cu, COW_IMG(0x103bdc64u));
                g->ebx = ebx;
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp1 - 0x24u;
                t105 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bdc64u), cow_dlo(d104));
                t106 = g->ecx;
                t107 = g->edx;
                eax = t105;
                ecx = t106;
                edx = t107;
    COW_AT(102a4b75)
                wr32(sp1 - 0x30u, arg3 + 3u);
                g->eax = eax;
                g->ecx = ecx;
                g->esp = sp1 - 0x24u;
                t108 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 3u, COW_IMG(0x103bdc64u), rd32(sp1 - 0x28u));
                t109 = g->ecx;
                eax = t108;
                ecx = t109;
    COW_AT(102a4b7b)
                t110 = rd32(esi + 8u);
                wr32(sp1 - 0x34u, t110);
                wr32(sp1 - 0x38u, COW_IMG(0x103bdc54u));
                g->ebx = ebx;
                g->eax = eax;
                g->ecx = ecx;
                g->edx = t110;
                g->esp = sp1 - 0x30u;
                t111 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bdc54u), t110);
                t112 = g->ecx;
                t113 = g->edx;
                eax = t111;
                ecx = t112;
                edx = t113;
    COW_AT(102a4b89)
                wr32(sp1 - 0x3cu, arg3 + 3u);
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp1 - 0x30u;
                cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 3u, COW_IMG(0x103bdc54u), rd32(sp1 - 0x34u));
                t114 = g->ecx;
                t115 = g->edx;
                ecx = t114;
                edx = t115;
    COW_AT(102a4b8f)
                t116 = rd32(esi + 0x14u);
                wr32(sp1 - 0x40u, t116);
                wr32(sp1 - 0x44u, COW_IMG(0x103bdc40u));
                g->ebx = ebx;
                g->eax = t116;
                g->edx = edx;
                g->esp = sp1 - 0x3cu;
                t117 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bdc40u), t116);
                t118 = g->edx;
                eax = t117;
                edx = t118;
    COW_AT(102a4b9d)
                t119 = rd32(sp1 - 0xcu);
                wr32(sp1 - 0x48u, t119);
                g->eax = eax;
                g->ecx = t119;
                g->edx = edx;
                g->esp = sp1 - 0x3cu;
                t120 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, t119, COW_IMG(0x103bdc40u), rd32(sp1 - 0x40u));
                t121 = g->ecx;
                t122 = g->edx;
                eax = t120;
                ecx = t121;
                edx = t122;
    COW_AT(102a4ba7)
                wr32(sp1 - 0x4cu, COW_IMG(0x103b3238u));
                g->ebx = ebx;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp1 - 0x44u;
                cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3238u), rd32(sp1 - 0x48u));
                t123 = g->ecx;
                t124 = g->edx;
                ecx = t123;
                edx = t124;
    COW_AT(102a4bb1)
                if ((int32_t)(ebx + 1u) < (int32_t)rd32(sp1 - 8u))
                {
                    eax = rd32(sp1 - 8u);
                    ebx = ebx + 1u;
                    goto L_102a4ae6;
                }
                eax = rd32(sp1 - 8u);
            }
        }
    }
    COW_AT(102a4bc1)
    g->ebx = rd32(sp1 - 0x10u);
    g->esi = rd32(sp1 - 0x14u);
    g->edi = rd32(sp1 - 0x18u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_102a4ae6: ;
    COW_AT(102a4ae6)
    esi = rd32(sp1 - 4u);
    al_mc = rd32(sp1 - 0xcu);
    goto L_102a4aea;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102a49a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    switch (at)
    {
    case 0x102a49b5u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp1 - 0x18u);
        in_esi = rd32(sp1 - 0x14u);
        in_ebx = rd32(sp1 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x1cu;
        g->ebx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102a49c3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp1 - 0x24u;
        g->ebx = arg3;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a49d2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp1 - 0x18u;
        g->eax = arg2;
        g->ebx = arg3;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a49d9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp1 - 0x1cu;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a49e6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp1 - 0x24u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        wr32(sp1 - 0x24u, COW_IMG(0x103b41dcu));
        (void)sp0;
        return 1;
    }
    case 0x102a49ecu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp1 - 0x28u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a49fau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp1 - 0x30u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        wr32(sp1 - 0x30u, COW_IMG(0x103bb3d8u));
        (void)sp0;
        return 1;
    }
    case 0x102a4a00u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp1 - 0x34u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a4a13u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp1 - 0x24u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        wr32(sp1 - 0x24u, COW_IMG(0x103bb3c8u));
        (void)sp0;
        return 1;
    }
    case 0x102a4a19u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp1 - 0x28u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a4a27u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp1 - 0x30u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        wr32(sp1 - 0x30u, COW_IMG(0x103bdd30u));
        (void)sp0;
        return 1;
    }
    case 0x102a4a2du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp1 - 0x34u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a4a3bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp1 - 0x3cu;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        wr32(sp1 - 0x3cu, COW_IMG(0x103bdd20u));
        (void)sp0;
        return 1;
    }
    case 0x102a4a41u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp1 - 0x40u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a4a4fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp1 - 0x48u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        wr32(sp1 - 0x48u, COW_IMG(0x103bdd0cu));
        (void)sp0;
        return 1;
    }
    case 0x102a4a55u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp1 - 0x4cu;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a4a65u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp1 - 0x54u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        wr32(sp1 - 0x54u, COW_IMG(0x103bdcf4u));
        (void)sp0;
        return 1;
    }
    case 0x102a4a6bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp1 - 0x58u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a4a81u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp1 - 0x24u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        wr32(sp1 - 0x24u, COW_IMG(0x103bdce0u));
        (void)sp0;
        return 1;
    }
    case 0x102a4a87u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp1 - 0x28u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a4a9au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp1 - 0x24u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        wr32(sp1 - 0x24u, COW_IMG(0x103bdcccu));
        (void)sp0;
        return 1;
    }
    case 0x102a4aa7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp1 - 0x28u;
        g->ebx = arg3 + 1u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a4abeu:
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
        g->esp = sp1 - 0x34u;
        g->ebp = sp0 - 4u;
        g->esi = arg1 + 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102a4acdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp1 - 0x18u;
        g->eax = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1 + 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102a4ad7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp1 - 0x18u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1 + 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102a4ae6u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0x18u;
        g->ebp = sp0 - 4u;
        g->edi = arg3 + 3u;
        (void)sp0;
        return 1;
    }
    case 0x102a4aeau:
    {
        uint32_t al_mc;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        al_mc = rd32(sp1 - 0xcu);
        g->esp = sp1 - 0x18u;
        g->ebp = sp0 - 4u;
        g->edi = arg3 + 3u;
        (void)sp0;
        return 1;
    }
    case 0x102a4af1u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->edi = arg3 + 3u;
        (void)sp0;
        return 1;
    }
    case 0x102a4afdu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->edi = arg3 + 3u;
        (void)sp0;
        return 1;
    }
    case 0x102a4b07u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0x28u;
        g->ebp = sp0 - 4u;
        g->edi = arg3 + 3u;
        wr32(sp1 - 0x28u, COW_IMG(0x103ba878u));
        (void)sp0;
        return 1;
    }
    case 0x102a4b0du:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->edi = arg3 + 3u;
        (void)sp0;
        return 1;
    }
    case 0x102a4b1fu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->edi = arg3 + 3u;
        wr32(sp1 - 0x24u, COW_IMG(0x103bdc98u));
        (void)sp0;
        return 1;
    }
    case 0x102a4b25u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0x28u;
        g->ebp = sp0 - 4u;
        g->edi = arg3 + 3u;
        (void)sp0;
        return 1;
    }
    case 0x102a4b38u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->edi = arg3 + 3u;
        wr32(sp1 - 0x24u, COW_IMG(0x103bdc8cu));
        (void)sp0;
        return 1;
    }
    case 0x102a4b3eu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0x28u;
        g->ebp = sp0 - 4u;
        g->edi = arg3 + 3u;
        (void)sp0;
        return 1;
    }
    case 0x102a4b55u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->edi = arg3 + 3u;
        wr32(sp1 - 0x2cu, COW_IMG(0x103bdc78u));
        (void)sp0;
        return 1;
    }
    case 0x102a4b5bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        g->edi = arg3 + 3u;
        (void)sp0;
        return 1;
    }
    case 0x102a4b75u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->edi = arg3 + 3u;
        wr32(sp1 - 0x2cu, COW_IMG(0x103bdc64u));
        (void)sp0;
        return 1;
    }
    case 0x102a4b7bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        g->edi = arg3 + 3u;
        (void)sp0;
        return 1;
    }
    case 0x102a4b89u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0x38u;
        g->ebp = sp0 - 4u;
        g->edi = arg3 + 3u;
        wr32(sp1 - 0x38u, COW_IMG(0x103bdc54u));
        (void)sp0;
        return 1;
    }
    case 0x102a4b8fu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0x3cu;
        g->ebp = sp0 - 4u;
        g->edi = arg3 + 3u;
        (void)sp0;
        return 1;
    }
    case 0x102a4b9du:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0x44u;
        g->ebp = sp0 - 4u;
        g->edi = arg3 + 3u;
        wr32(sp1 - 0x44u, COW_IMG(0x103bdc40u));
        (void)sp0;
        return 1;
    }
    case 0x102a4ba7u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = arg3 + 3u;
        (void)sp0;
        return 1;
    }
    case 0x102a4bb1u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp1 - 0x4cu;
        g->ebp = sp0 - 4u;
        g->edi = arg3 + 3u;
        (void)sp0;
        return 1;
    }
    case 0x102a4bc1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp1 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102a49a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102a49a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
