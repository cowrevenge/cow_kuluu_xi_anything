/* f_0x1009ee60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=3 */
uint32_t cow_fn_1009ee60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1009ee7du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1009ee7d;
    case 0x1009ee84u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1009ee84;
    case 0x1009ee8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1009ee8f;
    case 0x1009ee98u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1009ee98;
    case 0x1009eea9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1009eea9;
    case 0x1009eeb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1009eeb2;
    case 0x1009eec2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1009eec2;
    case 0x1009eec9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1009eec9;
    case 0x1009eef3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1009eef3;
    case 0x1009ef1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1009ef1b;
    case 0x1009f003u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1009f003;
    case 0x1009f039u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1009f039;
    case 0x1009f043u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1009f043;
    case 0x1009f056u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1009f056;
    case 0x1009f05du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1009f05d;
    case 0x1009f064u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1009f064;
    case 0x1009f06du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1009f06d;
    case 0x1009f0c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1009f0c3;
    case 0x1009f139u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1009f139;
    case 0x1009f18du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1009f18d;
    case 0x1009f1b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1009f1b7;
    case 0x1009f1e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1009f1e8;
    case 0x1009f209u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1009f209;
    case 0x1009f22bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1009f22b;
    case 0x1009f248u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1009f248;
    case 0x1009f26au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1009f26a;
    default: break;
    }
#endif

    COW_AT(1009ee60)
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    t1 = rd16(rd32(sp0 + 0xcu) + 0x14u);
    wr32(sp0 - 0x20u, t1);
    g->ecx = t1;
    g->edx = in_edx;
    t2 = rd32(sp0 + 0xcu);
    g->esp = sp0 - 0x1cu;
    t3 = cow_call_regs(g, COW_IMG(0x10086fc0u), in_eax, g->ecx, g->edx, 1, 1, t1);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 != 0u)
    {
        ecx = t4;
        edx = t5;
        esi = t2;
        goto L_1009ee84;
    }
    eax = t3;
    COW_AT(1009ee7d)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return eax;
L_1009ee84: ;
    COW_AT(1009ee84)
    if (rd32(COW_IMG(0x10480af0u) + ecx * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + ecx * 4u);
        goto L_1009ee98;
    }
    eax = rd32(COW_IMG(0x10480af0u) + ecx * 4u);
    COW_AT(1009ee8f)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return eax & 0xffffff00u;
L_1009ee98: ;
    COW_AT(1009ee98)
    t6 = rd32(eax + 0x74u);
    wr32(sp0 - 8u, t6);
    if (rd32(eax + 0x78u) == rd32(esi + 0x10u))
    {
        ecx = t6;
        edi = rd32(eax + 0x78u);
        goto L_1009eeb2;
    }
    eax = rd32(esi + 0x10u);
    COW_AT(1009eea9)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return eax & 0xffffff00u;
L_1009eeb2: ;
    COW_AT(1009eeb2)
    if (rd8(esi + 0x16u) > 0xau)
    {
        eax = rd8(esi + 0x16u);
        loc_14 = in_ebx;
        loc_18 = in_esi;
        loc_1c = in_edi;
        goto L_1009f292;
    }
    eax = rd8(esi + 0x16u);
    COW_AT(1009eec2)
    t7 = rd32(COW_IMG(0x1009f29cu) + eax * 4u);
    switch (t7 - RD)
    {
    case 0x1009eec9u: goto L_1009eec9;
    case 0x1009ef1bu: goto L_1009ef1b;
    case 0x1009f039u: goto L_1009f039;
    case 0x1009f06du: goto L_1009f06d;
    case 0x1009f0c3u: goto L_1009f0c3;
    case 0x1009f18du: goto L_1009f18d;
    case 0x1009f1e8u: goto L_1009f1e8;
    case 0x1009f22bu: goto L_1009f22b;
    case 0x1009f26au: goto L_1009f26a;
    case 0x1009f292u: loc_14 = in_ebx; loc_18 = in_esi; loc_1c = in_edi; goto L_1009f292;
    default: rt_fatal(g, COW_IMG(0x1009eec2u), "switch");
    }
    return 0;
L_1009eec9: ;
    COW_AT(1009eec9)
    wr32(sp0 - 0x20u, esi);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t87 = cow_call_regs(g, COW_IMG(0x1009ecc0u), eax, g->ecx, g->edx, 1, 1, esi);
    t88 = g->ecx;
    t89 = g->edx;
    g->edx = t89;
    t90 = cow_stdcall(g, COW_IMG(0x100fc510u), 0);
    t91 = g->edx;
    if (edi != rd32(t90 + 4u))
    {
        eax = t90;
        loc_14 = in_ebx;
        loc_18 = in_esi;
        loc_1c = in_edi;
        goto L_1009f292;
    }
    eax = t90;
    edx = t91;
    COW_AT(1009eee0)
    t92 = rd16(esi + 0x14u);
    wr32(sp0 - 0x20u, t92);
    g->eax = eax;
    g->ecx = t92;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t93 = cow_cdecl(g, COW_IMG(0x1009aad0u), 1, t92);
    t94 = g->ecx;
    t95 = g->edx;
    if ((uint8_t)t93 != 0u)
    {
        eax = t93;
        ecx = t94;
        edx = t95;
        goto L_1009eefa;
    }
    eax = t93;
    COW_AT(1009eef3)
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = in_ebp;
    return eax;
L_1009eefa: ;
    COW_AT(1009eefa)
    if (rd8(COW_IMG(0x10351220u)) != 1u)
    {
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        goto L_1009f292;
    }
    COW_AT(1009ef06)
    g->ebx = (in_ebx & 0xffffff00u) | 1u;
    g->esp = sp0 - 0x1cu;
    t96 = cow_call_regs(g, COW_IMG(0x1008f200u), eax, g->ecx, g->edx, 1, 0);
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = in_ebp;
    return (t96 & 0xffffff00u) | 1u;
L_1009ef1b: ;
    COW_AT(1009ef1b)
    wr32(sp0 - 0x20u, esi);
    g->esp = sp0 - 0x1cu;
    cow_call_regs(g, COW_IMG(0x1009ecc0u), eax, g->ecx, g->edx, 1, 1, esi);
    t66 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 0x14u) * 4u) + 0x120u);
    if (!(t66 >> 9u & 1u))
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 0x14u) * 4u);
        ecx = t66;
        edx = t66 >> 9u;
    }
    else
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 0x14u) * 4u);
        ecx = t66;
        edx = t66 >> 9u;
    COW_AT(1009ef44)
        if (!(ecx >> 7u & 1u))
        {
            ecx = ecx >> 7u;
        }
        else
        {
    COW_AT(1009ef4f)
            wr32(sp0 - 0x20u, in_ebp);
            t67 = rd32(eax + 4u);
            t68 = rd32(eax + 0xd4u);
            wr32(rd32(t68 + 0x260u) + 0x140u, t67);
            t69 = rd32(eax + 8u);
            wr32(rd32(t68 + 0x260u) + 0x144u, t69);
            t70 = rd32(eax + 0xcu);
            wr32(rd32(t68 + 0x260u) + 0x148u, t70);
            t71 = rd32(eax + 0x10u);
            wr32(rd32(t68 + 0x260u) + 0x14cu, t71);
            t72 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 0x14u) * 4u) + 0x14u);
            t73 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 0x14u) * 4u);
            t74 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 0x14u) * 4u) + 0xd4u);
            wr32(rd32(t74 + 0x260u) + 0x150u, t72);
            t75 = rd32(t73 + 0x18u);
            wr32(rd32(t74 + 0x260u) + 0x154u, t75);
            t76 = rd32(t73 + 0x1cu);
            wr32(rd32(t74 + 0x260u) + 0x158u, t76);
            t77 = rd32(t73 + 0x20u);
            t78 = rd32(t74 + 0x260u);
            wr32(t78 + 0x15cu, t77);
            eax = t73;
            ecx = t78;
            edx = t77;
        }
    }
    COW_AT(1009efe2)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t79 = cow_stdcall(g, COW_IMG(0x100fc510u), 0);
    t80 = g->ecx;
    t81 = g->edx;
    if (edi != rd32(t79 + 4u))
    {
        eax = t79;
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        goto L_1009f292;
    }
    ecx = t80;
    edx = t81;
    COW_AT(1009eff0)
    t82 = rd16(esi + 0x14u);
    wr32(sp0 - 0x20u, t82);
    g->eax = t82;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t83 = cow_cdecl(g, COW_IMG(0x1009aad0u), 1, t82);
    t84 = g->edx;
    if ((uint8_t)t83 != 0u)
    {
        eax = t83;
        edx = t84;
        goto L_1009f00a;
    }
    eax = t83;
    COW_AT(1009f003)
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = in_ebp;
    return eax;
L_1009f00a: ;
    COW_AT(1009f00a)
    t85 = rd8(COW_IMG(0x10351220u));
    wr8(COW_IMG(0x1047faafu), 0u);
    if ((uint8_t)t85 != 1u)
    {
        eax = (eax & 0xffffff00u) | t85;
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        goto L_1009f292;
    }
    eax = (eax & 0xffffff00u) | t85;
    COW_AT(1009f01e)
    g->ebx = (in_ebx & 0xffffff00u) | 1u;
    g->esp = sp0 - 0x1cu;
    t86 = cow_call_regs(g, COW_IMG(0x1008f200u), eax, g->ecx, g->edx, 1, 0);
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = in_ebp;
    return (t86 & 0xffffff00u) | 1u;
L_1009f039: ;
    COW_AT(1009f039)
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x1cu;
    t62 = cow_stdcall(g, COW_IMG(0x100fc510u), 0);
    t63 = g->ecx;
    if (edi != rd32(t62 + 4u))
    {
        eax = t62;
        goto L_1009f064;
    }
    eax = t62;
    ecx = t63;
    COW_AT(1009f043)
    t64 = rd16(esi + 0x14u);
    wr32(sp0 - 0x20u, t64);
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t65 = cow_cdecl(g, COW_IMG(0x1009aad0u), 1, t64);
    if ((uint8_t)t65 != 0u)
    {
        eax = t65;
        goto L_1009f05d;
    }
    eax = t65;
    COW_AT(1009f056)
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = in_ebp;
    return eax;
L_1009f05d: ;
    COW_AT(1009f05d)
    wr8(COW_IMG(0x1047faafu), 0u);
L_1009f064: ;
    COW_AT(1009f064)
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = in_ebp;
    return (eax & 0xffffff00u) | 1u;
L_1009f06d: ;
    COW_AT(1009f06d)
    wr32(sp0 - 0x20u, esi);
    g->esp = sp0 - 0x1cu;
    cow_call_regs(g, COW_IMG(0x1009ecc0u), eax, g->ecx, g->edx, 1, 1, esi);
    t57 = (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 0x14u) * 4u) + 0x120u) & 0xffff00ffu) | (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 0x14u) * 4u) + 0x120u) >> 8u & 0xbfu) << 8u;
    t58 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 0x14u) * 4u);
    wr32(t58 + 0x120u, t57);
    t59 = rd8(esi + 0x16u);
    t60 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 0x14u) * 4u);
    wr8(t60 + 0x144u, (uint8_t)t59);
    g->eax = (t58 & 0xffffff00u) | t59;
    t61 = cow_fastcall(g, COW_IMG(0x10092900u), rd32(COW_IMG(0x10480af0u) + rd16(esi + 0x14u) * 4u), t60, 0);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return (t61 & 0xffffff00u) | 1u;
L_1009f0c3: ;
    COW_AT(1009f0c3)
    t36 = rd32(esi + 0xcu);
    wr32(sp0 - 0x10u, t36);
    t37 = rd32(esi + 8u);
    wr32(sp0 - 0xcu, t37);
    t38 = rd32(esi + 4u);
    wr32(sp0 - 8u, t38);
    wr32(sp0 - 0x20u, sp0 + 0xcu);
    wr32(sp0 - 0x24u, 0x41f00000u);
    wr32(sp0 - 0x28u, t36);
    wr32(sp0 - 0x2cu, t37);
    wr32(sp0 - 0x30u, t38);
    t39 = rd32(COW_IMG(0x10631f24u));
    wr32(sp0 + 0xcu, 0u);
    g->eax = t36;
    g->edx = t38;
    g->esp = sp0 - 0x1cu;
    t40 = cow_thiscall(g, COW_IMG(0x10181290u), t39, 5, t38, t37, t36, 0x41f00000u, sp0 + 0xcu);
    t41 = g->ecx;
    t42 = g->edx;
    if ((uint8_t)t40 != 1u)
    {
        eax = t40;
        ecx = t41;
        edx = t42;
    }
    else
    {
        ecx = t41;
        edx = t42;
    COW_AT(1009f108)
        t43 = rd32(sp0 + 0xcu);
        wr32(esi + 8u, t43);
        eax = t43;
    }
    COW_AT(1009f10f)
    wr32(sp0 - 0x20u, esi);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t44 = cow_call_regs(g, COW_IMG(0x1009ecc0u), eax, g->ecx, g->edx, 1, 1, esi);
    t45 = g->ecx;
    t46 = g->edx;
    g->edx = t46;
    t47 = cow_stdcall(g, COW_IMG(0x100fc510u), 0);
    t48 = g->edx;
    if (edi != rd32(t47 + 4u))
    {
        eax = t47;
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        goto L_1009f292;
    }
    eax = t47;
    edx = t48;
    COW_AT(1009f126)
    t49 = rd16(esi + 0x14u);
    wr32(sp0 - 0x20u, t49);
    g->eax = eax;
    g->ecx = t49;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t50 = cow_cdecl(g, COW_IMG(0x1009aad0u), 1, t49);
    t51 = g->ecx;
    t52 = g->edx;
    if ((uint8_t)t50 != 0u)
    {
        eax = t50;
        ecx = t51;
        edx = t52;
        goto L_1009f140;
    }
    eax = t50;
    COW_AT(1009f139)
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = in_ebp;
    return eax;
L_1009f140: ;
    COW_AT(1009f140)
    wr8(COW_IMG(0x1048098eu), 0u);
    wr8(COW_IMG(0x10482f18u), 0u);
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t53 = cow_stdcall(g, COW_IMG(0x100875c0u), 0);
    t54 = rd32(COW_IMG(0x10456a28u));
    wr8(COW_IMG(0x104807f3u), 1u);
    wr32(t54, 0x60u);
    if (rd8(COW_IMG(0x10351220u)) != 1u)
    {
        eax = (t53 & 0xffffff00u) | rd8(COW_IMG(0x10351220u));
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        goto L_1009f292;
    }
    edx = t54;
    COW_AT(1009f172)
    g->ebx = (in_ebx & 0xffffff00u) | 1u;
    t55 = rd16(esi + 0x14u);
    g->esp = sp0 - 0x1cu;
    t56 = cow_call_regs(g, COW_IMG(0x1008f200u), t55, g->ecx, g->edx, 1, 0);
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = in_ebp;
    return (t56 & 0xffffff00u) | 1u;
L_1009f18d: ;
    COW_AT(1009f18d)
    wr32(sp0 - 0x20u, esi);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t24 = cow_call_regs(g, COW_IMG(0x1009ecc0u), eax, g->ecx, g->edx, 1, 1, esi);
    t25 = g->ecx;
    t26 = g->edx;
    g->edx = t26;
    t27 = cow_stdcall(g, COW_IMG(0x100fc510u), 0);
    t28 = g->edx;
    if (edi != rd32(t27 + 4u))
    {
        eax = t27;
        loc_14 = in_ebx;
        loc_18 = in_esi;
        loc_1c = in_edi;
        goto L_1009f292;
    }
    eax = t27;
    edx = t28;
    COW_AT(1009f1a4)
    t29 = rd16(esi + 0x14u);
    wr32(sp0 - 0x20u, t29);
    g->eax = eax;
    g->ecx = t29;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t30 = cow_cdecl(g, COW_IMG(0x1009aad0u), 1, t29);
    t31 = g->ecx;
    t32 = g->edx;
    if ((uint8_t)t30 != 0u)
    {
        eax = t30;
        ecx = t31;
        edx = t32;
        goto L_1009f1be;
    }
    eax = t30;
    COW_AT(1009f1b7)
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = in_ebp;
    return eax;
L_1009f1be: ;
    COW_AT(1009f1be)
    if (rd8(COW_IMG(0x10351220u)) == 1u)
    {
    COW_AT(1009f1c6)
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t33 = cow_call_regs(g, COW_IMG(0x1008f200u), eax, g->ecx, g->edx, 1, 0);
        t34 = g->edx;
        eax = t33;
        edx = t34;
    }
    COW_AT(1009f1d2)
    wr32(sp0 - 0x20u, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t35 = cow_stdcall(g, COW_IMG(0x1018ba80u), 1, 0u);
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = in_ebp;
    return (t35 & 0xffffff00u) | 1u;
L_1009f1e8: ;
    COW_AT(1009f1e8)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t17 = cow_stdcall(g, COW_IMG(0x100fc510u), 0);
    t18 = g->edx;
    if (edi != rd32(t17 + 4u))
    {
        eax = t17;
        loc_14 = in_ebx;
        loc_18 = in_esi;
        loc_1c = in_edi;
        goto L_1009f292;
    }
    eax = t17;
    edx = t18;
    COW_AT(1009f1f6)
    t19 = rd16(esi + 0x14u);
    wr32(sp0 - 0x20u, t19);
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t20 = cow_cdecl(g, COW_IMG(0x1009aad0u), 1, t19);
    if ((uint8_t)t20 != 0u)
    {
        eax = t20;
        goto L_1009f210;
    }
    eax = t20;
    COW_AT(1009f209)
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = in_ebp;
    return eax;
L_1009f210: ;
    COW_AT(1009f210)
    t21 = rd32(COW_IMG(0x10456a28u));
    t22 = rd32(sp0 - 0x1cu);
    wr8(COW_IMG(0x10482f1eu), 1u);
    t23 = rd32(sp0 - 0x18u);
    wr32(t21, 0x70u);
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = t23;
    g->edi = t22;
    g->ebp = in_ebp;
    return (eax & 0xffffff00u) | 1u;
L_1009f22b: ;
    COW_AT(1009f22b)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t9 = cow_stdcall(g, COW_IMG(0x100fc510u), 0);
    t10 = g->ecx;
    t11 = g->edx;
    if (edi != rd32(t9 + 4u))
    {
        eax = t9;
        loc_14 = in_ebx;
        loc_18 = in_esi;
        loc_1c = in_edi;
        goto L_1009f292;
    }
    ecx = t10;
    edx = t11;
    COW_AT(1009f235)
    t12 = rd16(esi + 0x14u);
    wr32(sp0 - 0x20u, t12);
    g->eax = t12;
    g->esp = sp0 - 0x1cu;
    t13 = cow_cdecl(g, COW_IMG(0x1009aad0u), 1, t12);
    if ((uint8_t)t13 != 0u)
    {
        eax = t13;
        goto L_1009f24f;
    }
    eax = t13;
    COW_AT(1009f248)
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = in_ebp;
    return eax;
L_1009f24f: ;
    COW_AT(1009f24f)
    t14 = rd32(COW_IMG(0x10456a28u));
    t15 = rd32(sp0 - 0x1cu);
    wr8(COW_IMG(0x104807f3u), 1u);
    t16 = rd32(sp0 - 0x18u);
    wr32(t14, 0x60u);
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = t16;
    g->edi = t15;
    g->ebp = in_ebp;
    return (eax & 0xffffff00u) | 1u;
L_1009f26a: ;
    COW_AT(1009f26a)
    wr32(sp0 - 0x20u, esi);
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x1009edd0u), 3, esi, in_edi, in_esi);
    if (!(rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 0x14u) * 4u) + 0x120u) >> 9u & 1u))
    {
        eax = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 0x14u) * 4u) + 0x120u) >> 9u;
        loc_14 = in_ebx;
        loc_18 = in_esi;
        loc_1c = in_edi;
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 0x14u) * 4u) + 0x120u) >> 9u;
        ecx = rd32(COW_IMG(0x10480af0u) + rd16(esi + 0x14u) * 4u);
        edx = rd16(esi + 0x14u);
    COW_AT(1009f28d)
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t8 = cow_thiscall(g, COW_IMG(0x10092b20u), ecx, 0);
        eax = t8;
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
    }
L_1009f292: ;
    COW_AT(1009f292)
    g->ebx = loc_14;
    g->esi = loc_18;
    g->edi = loc_1c;
    g->ebp = in_ebp;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1009ee60(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1009ee7du:
    {
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
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1009ee84u:
    {
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
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1009ee8fu:
    {
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
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1009ee98u:
    {
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
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1009eea9u:
    {
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
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1009eeb2u:
    {
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
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x14u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1009eec2u:
    {
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
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x1009eec9u:
    {
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
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x1009eef3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1009ef1bu:
    {
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
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x1009f003u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1009f039u:
    {
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
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1009f043u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1009f056u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1009f05du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1009f064u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1009f06du:
    {
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
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x1009f0c3u:
    {
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
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x1009f139u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1009f18du:
    {
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
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x1009f1b7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1009f1e8u:
    {
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
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x1009f209u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1009f22bu:
    {
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
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x1009f248u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1009f26au:
    {
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
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     1009eee0: holds in_ebx, which no location here says
     1009eefa: holds in_ebx, which no location here says
     1009ef06: holds in_ebx, which no location here says
     1009ef44: holds in_ebx, which no location here says
     1009ef4f: holds in_ebx, which no location here says
     1009efe2: holds in_ebx, which no location here says
     1009eff0: holds in_ebx, which no location here says
     1009f00a: holds in_ebx, which no location here says
     1009f01e: holds in_ebx, which no location here says
     1009f108: holds in_ebx, which no location here says
     1009f10f: holds in_ebx, which no location here says
     1009f126: holds in_ebx, which no location here says
     1009f140: holds in_ebx, which no location here says
     1009f172: holds in_ebx, which no location here says
     1009f1a4: holds in_ebx, which no location here says
     1009f1be: holds in_ebx, which no location here says
     1009f1c6: holds in_ebx, which no location here says
     1009f1d2: holds in_ebx, which no location here says
     1009f1f6: holds in_ebx, which no location here says
     1009f210: holds in_ebx, which no location here says
     1009f235: holds in_ebx, which no location here says
     1009f24f: holds in_ebx, which no location here says
     1009f28d: holds in_ebx, which no location here says
     1009f292: holds in_ebx, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1009ee60(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1009ee60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
