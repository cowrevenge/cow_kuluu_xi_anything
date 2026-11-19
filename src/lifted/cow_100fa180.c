/* f_0x100fa180 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_100fa180(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    int64_t q84;
    int64_t q85;
    int64_t q91;
    int64_t q96;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
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
    uint32_t t86;
    uint32_t t87;
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
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
    cow_frame(g, sp0, 300u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100fa190u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x118u); in_esi = rd32(sp0 - 0x114u); in_ebx = rd32(sp0 - 0x110u); g->ebx = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x118u); g->esi = rd32(sp0 - 0x114u); goto E_100fa190;
    case 0x100fa1a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x118u); in_esi = rd32(sp0 - 0x114u); in_ebx = rd32(sp0 - 0x110u); g->ebx = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x118u); g->esi = rd32(sp0 - 0x114u); goto E_100fa1a1;
    case 0x100fa1aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x118u); in_esi = rd32(sp0 - 0x114u); in_ebx = rd32(sp0 - 0x110u); g->ebx = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x118u); g->esi = rd32(sp0 - 0x114u); goto E_100fa1ae;
    case 0x100fa1bau: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x118u); in_esi = rd32(sp0 - 0x114u); in_ebx = rd32(sp0 - 0x110u); g->ebx = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x118u); g->esi = rd32(sp0 - 0x114u); goto E_100fa1ba;
    case 0x100fa1beu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x118u); in_esi = rd32(sp0 - 0x114u); in_ebx = rd32(sp0 - 0x110u); g->ebx = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x118u); g->esi = rd32(sp0 - 0x114u); goto E_100fa1be;
    case 0x100fa1cau: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x118u); in_esi = rd32(sp0 - 0x114u); in_ebx = rd32(sp0 - 0x110u); g->ebx = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x118u); g->esi = rd32(sp0 - 0x114u); goto E_100fa1ca;
    case 0x100fa389u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100fa389;
    case 0x100fa39eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100fa39e;
    case 0x100fa3c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100fa3c7;
    case 0x100fa3d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100fa3d7;
    case 0x100fa3ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100fa3dd;
    case 0x100fa3e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100fa3e5;
    case 0x100fa3ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100fa3eb;
    case 0x100fa3f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100fa3f5;
    case 0x100fa406u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100fa406;
    case 0x100fa40du: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100fa40d;
    case 0x100fa413u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100fa413;
    case 0x100fa41au: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100fa41a;
    case 0x100fa422u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100fa422;
    case 0x100fa429u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100fa429;
    case 0x100fa42du: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100fa42d;
    case 0x100fa42fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100fa42f;
    case 0x100fa435u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100fa435;
    case 0x100fa454u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100fa454;
    case 0x100fa466u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100fa466;
    case 0x100fa489u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x118u); in_esi = rd32(sp0 - 0x114u); in_ebx = rd32(sp0 - 0x110u); g->ebx = rd32(sp0 - 0x110u); g->edi = rd32(sp0 - 0x118u); g->esi = rd32(sp0 - 0x114u); goto E_100fa489;
    default: break;
    }
#endif

    COW_AT(100fa180)
    wr32(sp0 - 0x110u, in_ebx);
    wr32(sp0 - 0x114u, in_esi);
    wr32(sp0 - 0x118u, in_edi);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x118u;
    t1 = cow_stdcall(g, COW_IMG(0x100dc120u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(100fa190)
    if (arg1 == 0u) goto L_100fa489;
    edi = eax;
    COW_AT(100fa1a1)
    wr32(COW_IMG(0x104dfd98u), arg1);
    if (rd8(arg1 + 0xcu) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg1 + 0xcu);
        goto L_100fa1ba;
    }
    eax = (eax & 0xffffff00u) | rd8(arg1 + 0xcu);
    COW_AT(100fa1ae)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return (eax & 0xffffff00u) | 1u;
L_100fa1ba: ;
    COW_AT(100fa1ba)
    if ((uint8_t)eax != 4u) goto L_100fa1ca;
    COW_AT(100fa1be)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return eax & 0xffffff00u;
L_100fa1ca: ;
    COW_AT(100fa1ca)
    wr32(COW_IMG(0x104dfd98u), arg1);
    wr32(sp0 - 0x11cu, sp0 - 0x108u);
    g->eax = sp0 - 0x108u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x110u;
    t4 = cow_cdecl(g, COW_IMG(0x100f91c0u), 3, sp0 - 0x108u, in_edi, in_esi);
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(100fa1da)
    if (rd8(arg1 + 0xcu) != 3u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg1 + 0xcu);
        goto L_100fa22f;
    }
    COW_AT(100fa1e6)
    if (rd32(arg1 + 0x4188u) + rd32(arg1 + 0x41b0u) <= edi)
    {
        eax = rd32(arg1 + 0x4188u) + rd32(arg1 + 0x41b0u);
        ecx = rd32(arg1 + 0x41b0u);
        edx = rd32(arg1 + 0x4188u);
    COW_AT(100fa208)
        eax = -(0x7fffffffu < edi - edx - ecx) + 1u;
        edx = 0x7fffffffu;
    }
    else
    {
        eax = rd32(arg1 + 0x4188u) + rd32(arg1 + 0x41b0u);
        edx = rd32(arg1 + 0x4188u);
    COW_AT(100fa1f9)
        eax = 0x7fffffffu < eax - edi;
        ecx = 0x7fffffffu;
    }
    COW_AT(100fa216)
    if (eax == 0u) goto L_100fa22f;
    COW_AT(100fa21a)
    wr32(sp0 - 0x11cu, 0xfa1u);
    wr8(arg1 + 0xcu, 4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x118u;
    t7 = cow_cdecl(g, COW_IMG(0x100182e0u), 1, 0xfa1u);
    t8 = g->edx;
    eax = t7;
    edx = t8;
    COW_AT(100fa228)
    wr8(sp0 - 0x10au, 0u);
L_100fa2a9: ;
    COW_AT(100fa2a9)
    if (rd8(arg1 + 0xcu) == 3u)
    {
    COW_AT(100fa2b7)
        if (rd32(arg1 + 0x418cu) == rd32(arg1 + 0x4188u))
        {
            eax = rd32(arg1 + 0x4188u);
            ecx = rd32(arg1 + 0x418cu);
            goto L_100fa308;
        }
        eax = rd32(arg1 + 0x4188u);
        ecx = rd32(arg1 + 0x418cu);
    COW_AT(100fa2c7)
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x118u;
        t65 = cow_stdcall(g, COW_IMG(0x100dc060u), 0);
        t66 = g->ecx;
        t67 = g->edx;
        eax = t65;
        ecx = t66;
        edx = t67;
    COW_AT(100fa2cc)
        if (rd32(arg1 + 0x418cu) <= eax)
        {
    COW_AT(100fa2ed)
            g->eax = eax;
            g->esp = sp0 - 0x118u;
            t71 = cow_stdcall(g, COW_IMG(0x100dc060u), 0);
            eax = t71;
    COW_AT(100fa2f2)
            t72 = rd32(arg1 + 0x4188u);
            t73 = rd32(arg1 + 0x418cu);
            wr32(arg1 + 0x418cu, t72);
            ecx = eax;
            eax = t73;
            edx = t72;
        }
        else
        {
    COW_AT(100fa2d4)
            g->eax = eax;
            g->esp = sp0 - 0x118u;
            t68 = cow_stdcall(g, COW_IMG(0x100dc060u), 0);
            eax = t68;
    COW_AT(100fa2d9)
            t69 = rd32(arg1 + 0x4188u);
            t70 = rd32(arg1 + 0x418cu);
            wr32(arg1 + 0x418cu, t69);
            ecx = t70;
            edx = t69;
        }
L_100fa342: ;
    COW_AT(100fa342)
        wr32(arg1 + 0x4190u, ecx - eax);
    }
L_100fa34a: ;
    COW_AT(100fa34a)
    q84 = (uint64_t)cow_mulu(0x51eb851fu, rd32(arg1 + 0x4190u));
    if (cow_qhi(q84) >> 5u < 0x64u)
    {
        ecx = rd32(COW_IMG(0x10362328u));
        edx = cow_qhi(q84) >> 5u;
    COW_AT(100fa3aa)
        wr32(sp0 - 0x11cu, edx);
        q91 = (int64_t)cow_muls(0x51eb851fu, ecx);
        t92 = (uint32_t)((int32_t)cow_qhi(q91) >> 5u);
        t93 = t92 + (t92 >> 0x1fu);
        wr32(sp0 - 0x120u, t93);
        wr32(sp0 - 0x124u, COW_IMG(0x10362338u));
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        g->ebx = (in_ebx & 0xffffff00u) | 3u;
        g->ecx = sp0 - 0x100u;
        g->esp = sp0 - 0x114u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x10362338u), t93, edx, rd32(sp0 - 0x118u));
        t94 = g->ecx;
        ecx = t94;
    COW_AT(100fa3c7)
        if (rd32(arg1 + 0x4190u) >= 0x1f4u)
        {
            eax = rd32(arg1 + 0x4190u);
        }
        else
        {
            eax = rd32(arg1 + 0x4190u);
    COW_AT(100fa3d7)
            wr32(COW_IMG(0x10362328u), rd32(COW_IMG(0x10362328u)) - 1u);
        }
    COW_AT(100fa3dd)
        if ((int32_t)rd32(COW_IMG(0x10362328u)) < 9700)
        {
    COW_AT(100fa3e5)
            wr32(COW_IMG(0x10362328u), 0x25e4u);
        }
    }
    else
    {
        ecx = rd32(COW_IMG(0x10362328u));
        edx = cow_qhi(q84) >> 5u;
    COW_AT(100fa36d)
        q85 = (int64_t)cow_muls(0x51eb851fu, ecx);
        t86 = (uint32_t)((int32_t)cow_qhi(q85) >> 5u);
        t87 = t86 + (t86 >> 0x1fu);
        wr32(sp0 - 0x11cu, t87);
        wr32(sp0 - 0x120u, COW_IMG(0x10362340u));
        wr32(sp0 - 0x124u, sp0 - 0x100u);
        g->ebx = (in_ebx & 0xffffff00u) | 3u;
        g->ecx = sp0 - 0x100u;
        g->esp = sp0 - 0x110u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x10362340u), t87, rd32(sp0 - 0x118u), rd32(sp0 - 0x114u));
        t88 = g->ecx;
        ecx = t88;
    COW_AT(100fa389)
        t89 = rd32(COW_IMG(0x10362328u)) + 1u;
        t90 = rd32(COW_IMG(0x10362328u));
        wr32(COW_IMG(0x10362328u), t89);
        if ((int32_t)(t90 + 1u) < 12200)
        {
            eax = t89;
        }
        else
        {
            eax = t89;
    COW_AT(100fa39e)
            wr32(COW_IMG(0x10362328u), 0x2fa8u);
        }
    }
    COW_AT(100fa3eb)
    wr32(sp0 - 0x11cu, sp0 - 0x100u);
    g->esp = sp0 - 0x118u;
    cow_call_regs(g, COW_IMG(0x100f0590u), g->eax, g->ecx, sp0 - 0x100u, 1, 1, sp0 - 0x100u);
    t95 = g->edx;
    edx = t95;
    COW_AT(100fa3f5)
    if ((int32_t)rd32(arg1 + 0x20u) >= 10)
    {
        ecx = rd32(COW_IMG(0x1036232cu));
    }
    else
    {
        ecx = rd32(COW_IMG(0x1036232cu));
    COW_AT(100fa406)
        wr32(COW_IMG(0x1036232cu), ecx + 1u);
        ecx = ecx + 1u;
    }
    COW_AT(100fa40d)
    if ((int32_t)rd32(arg1 + 0x20u) > 15)
    {
    COW_AT(100fa413)
        wr32(COW_IMG(0x1036232cu), ecx - 1u);
        ecx = ecx - 1u;
    }
    COW_AT(100fa41a)
    if ((int32_t)ecx <= 12200) goto L_100fa429;
    COW_AT(100fa422)
    ecx = 0x2fa8u;
L_100fa42f: ;
    COW_AT(100fa42f)
    wr32(COW_IMG(0x1036232cu), ecx);
L_100fa435: ;
    COW_AT(100fa435)
    q96 = (int64_t)cow_muls(0x51eb851fu, ecx);
    t97 = (uint32_t)((int32_t)cow_qhi(q96) >> 5u);
    wr32(sp0 - 0x11cu, sp0 - 0x109u);
    wr8(sp0 - 0x109u, (uint8_t)(t97 + (t97 >> 0x1fu)));
    g->eax = t97 >> 0x1fu;
    g->ecx = sp0 - 0x109u;
    g->esp = sp0 - 0x118u;
    t98 = cow_call_regs(g, COW_IMG(0x100f0570u), g->eax, g->ecx, t97 + (t97 >> 0x1fu), 1, 1, sp0 - 0x109u);
    t99 = g->ecx;
    t100 = g->edx;
    eax = t98;
    ecx = t99;
    edx = t100;
    COW_AT(100fa454)
    wr32(COW_IMG(0x104dfd98u), arg1);
    wr32(sp0 - 0x120u, arg1 + 0x4638u);
    g->esp = sp0 - 0x11cu;
    cow_call_regs(g, COW_IMG(0x100fcae0u), g->eax, g->ecx, edx, 1, 1, arg1 + 0x4638u);
    COW_AT(100fa466)
    t101 = rd32(rd32(COW_IMG(0x104dfd94u)) + 0x44bb0u) + 1u;
    t102 = rd32(COW_IMG(0x104dfd94u));
    t103 = rd32(sp0 - 0x114u);
    t104 = rd32(sp0 - 0x118u);
    wr32(t102 + 0x44bb0u, t101);
    g->ebx = rd32(sp0 - 0x110u);
    g->esi = t103;
    g->edi = t104;
    return (t102 & 0xffffff00u) | rd8(sp0 - 0x10au);
L_100fa22f: ;
    COW_AT(100fa22f)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x118u;
    t9 = cow_call_regs(g, COW_IMG(0x100e84a0u), eax, g->ecx, g->edx, 1, 0);
    t10 = g->ecx;
    t11 = g->edx;
    eax = t9;
    ecx = t10;
    edx = t11;
    COW_AT(100fa234)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x118u;
    t12 = cow_call_regs(g, COW_IMG(0x100e8b60u), eax, g->ecx, g->edx, 1, 0);
    t13 = g->ecx;
    t14 = g->edx;
    eax = t12;
    ecx = t13;
    edx = t14;
    COW_AT(100fa239)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x118u;
    t15 = cow_call_regs(g, COW_IMG(0x100f8910u), eax, g->ecx, g->edx, 1, 0);
    t16 = g->ecx;
    t17 = g->edx;
    eax = t15;
    ecx = t16;
    edx = t17;
    COW_AT(100fa23e)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x118u;
    t18 = cow_call_regs(g, COW_IMG(0x100eb090u), eax, g->ecx, g->edx, 1, 0);
    t19 = g->ecx;
    t20 = g->edx;
    eax = t18;
    ecx = t19;
    edx = t20;
    COW_AT(100fa243)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x118u;
    t21 = cow_stdcall(g, COW_IMG(0x100e40a0u), 0);
    t22 = g->ecx;
    t23 = g->edx;
    eax = t21;
    ecx = t22;
    edx = t23;
    COW_AT(100fa248)
    wr32(sp0 - 0x11cu, arg1);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x110u;
    t24 = cow_call_regs(g, COW_IMG(0x100fb830u), eax, g->ecx, g->edx, 1, 3, arg1, rd32(sp0 - 0x118u), rd32(sp0 - 0x114u));
    t25 = g->ecx;
    t26 = g->edx;
    eax = t24;
    ecx = t25;
    edx = t26;
    COW_AT(100fa24e)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x11cu;
    t27 = cow_call_regs(g, COW_IMG(0x100e33e0u), eax, g->ecx, g->edx, 1, 0);
    t28 = g->ecx;
    t29 = g->edx;
    eax = t27;
    ecx = t28;
    edx = t29;
    COW_AT(100fa253)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x11cu;
    t30 = cow_call_regs(g, COW_IMG(0x100e4320u), eax, g->ecx, g->edx, 1, 0);
    t31 = g->ecx;
    t32 = g->edx;
    eax = t30;
    ecx = t31;
    edx = t32;
    COW_AT(100fa258)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x11cu;
    t33 = cow_stdcall(g, COW_IMG(0x100e5fc0u), 0);
    t34 = g->ecx;
    t35 = g->edx;
    eax = t33;
    ecx = t34;
    edx = t35;
    COW_AT(100fa25d)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x11cu;
    t36 = cow_stdcall(g, COW_IMG(0x100e61a0u), 0);
    t37 = g->ecx;
    t38 = g->edx;
    eax = t36;
    ecx = t37;
    edx = t38;
    COW_AT(100fa262)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x11cu;
    t39 = cow_stdcall(g, COW_IMG(0x100f0070u), 0);
    t40 = g->ecx;
    t41 = g->edx;
    eax = t39;
    ecx = t40;
    edx = t41;
    COW_AT(100fa267)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x11cu;
    t42 = cow_call_regs(g, COW_IMG(0x100f9340u), eax, g->ecx, g->edx, 1, 0);
    t43 = g->ecx;
    t44 = g->edx;
    eax = t42;
    ecx = t43;
    edx = t44;
    COW_AT(100fa26c)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x11cu;
    t45 = cow_call_regs(g, COW_IMG(0x100e00f0u), eax, g->ecx, g->edx, 1, 0);
    t46 = g->ecx;
    t47 = g->edx;
    eax = t45;
    ecx = t46;
    edx = t47;
    COW_AT(100fa271)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x11cu;
    t48 = cow_call_regs(g, COW_IMG(0x100f8ca0u), eax, g->ecx, g->edx, 1, 0);
    t49 = g->ecx;
    t50 = g->edx;
    eax = t48;
    ecx = t49;
    edx = t50;
    COW_AT(100fa276)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x11cu;
    t51 = cow_stdcall(g, COW_IMG(0x100f10f0u), 0);
    t52 = g->ecx;
    t53 = g->edx;
    eax = t51;
    ecx = t52;
    edx = t53;
    COW_AT(100fa27b)
    g->ebx = (in_ebx & 0xffffff00u) | 3u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x11cu;
    cow_stdcall(g, COW_IMG(0x100e6300u), 0);
    t54 = g->ecx;
    t55 = g->edx;
    ecx = t54;
    edx = t55;
    COW_AT(100fa280)
    t56 = rd32(arg1 + 0x417cu);
    wr32(sp0 - 0x120u, t56);
    wr32(sp0 - 0x124u, 0u);
    g->eax = t56;
    g->ecx = ecx;
    g->esp = sp0 - 0x11cu;
    t57 = cow_call_regs(g, COW_IMG(0x100dbfe0u), g->eax, g->ecx, edx, 1, 2, 0u, t56);
    t58 = g->ecx;
    t59 = g->edx;
    eax = t57;
    ecx = t58;
    edx = t59;
    COW_AT(100fa28e)
    if ((uint8_t)eax != 0u)
    {
    COW_AT(100fa295)
        wr32(sp0 - 0x11cu, arg1);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x118u;
        t60 = cow_thiscall_cdecl(g, COW_IMG(0x100fa9f0u), ecx, 1, arg1);
        t61 = g->ecx;
        t62 = g->edx;
        eax = t60;
        ecx = t61;
        edx = t62;
    COW_AT(100fa29b)
    }
    COW_AT(100fa29e)
    wr32(sp0 - 0x11cu, arg1);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x108u;
    t63 = cow_thiscall_cdecl(g, COW_IMG(0x100fa5c0u), ecx, 5, arg1, rd32(sp0 - 0x118u), rd32(sp0 - 0x114u), rd32(sp0 - 0x110u), rd32(sp0 - 0x10cu));
    t64 = g->edx;
    eax = t63;
    edx = t64;
    COW_AT(100fa2a4)
    wr8(sp0 - 0x10au, 1u);
    goto L_100fa2a9;
L_100fa308: ;
    COW_AT(100fa308)
    wr32(sp0 - 0x11cu, 0x3e8u);
    wr32(sp0 - 0x120u, 6u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x118u;
    t74 = cow_call_regs(g, COW_IMG(0x100dbfe0u), g->eax, g->ecx, edx, 1, 2, 6u, 0x3e8u);
    t75 = g->ecx;
    t76 = g->edx;
    eax = t74;
    ecx = t75;
    edx = t76;
    COW_AT(100fa314)
    if ((uint8_t)eax == 0u) goto L_100fa34a;
    COW_AT(100fa31b)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x118u;
    t77 = cow_stdcall(g, COW_IMG(0x100dc060u), 0);
    t78 = g->ecx;
    t79 = g->edx;
    eax = t77;
    ecx = t78;
    edx = t79;
    COW_AT(100fa320)
    if (rd32(arg1 + 0x418cu) <= eax)
    {
    COW_AT(100fa335)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x118u;
        t82 = cow_stdcall(g, COW_IMG(0x100dc060u), 0);
        t83 = g->edx;
        eax = t82;
        edx = t83;
    COW_AT(100fa33a)
        ecx = eax;
        eax = rd32(arg1 + 0x418cu);
    }
    else
    {
    COW_AT(100fa328)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x118u;
        t80 = cow_stdcall(g, COW_IMG(0x100dc060u), 0);
        t81 = g->edx;
        eax = t80;
        edx = t81;
    COW_AT(100fa32d)
        ecx = rd32(arg1 + 0x418cu);
    }
    goto L_100fa342;
L_100fa429: ;
    COW_AT(100fa429)
    if ((int32_t)ecx >= 9700) goto L_100fa435;
    COW_AT(100fa42d)
    ecx = 0x25e4u;
    goto L_100fa42f;
L_100fa489: ;
    COW_AT(100fa489)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100fa180(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100fa190u:
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0x118u);
        in_esi = rd32(sp0 - 0x114u);
        in_ebx = rd32(sp0 - 0x110u);
        g->esp = sp0 - 0x118u;
        g->ebx = in_ebx & 0xffffff00u;
        (void)sp0;
        return 1;
    }
    case 0x100fa1a1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0x118u);
        in_esi = rd32(sp0 - 0x114u);
        in_ebx = rd32(sp0 - 0x110u);
        g->esp = sp0 - 0x118u;
        g->ebx = in_ebx & 0xffffff00u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fa1aeu:
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0x118u);
        in_esi = rd32(sp0 - 0x114u);
        in_ebx = rd32(sp0 - 0x110u);
        g->esp = sp0 - 0x118u;
        (void)sp0;
        return 1;
    }
    case 0x100fa1bau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0x118u);
        in_esi = rd32(sp0 - 0x114u);
        in_ebx = rd32(sp0 - 0x110u);
        g->esp = sp0 - 0x118u;
        g->ebx = in_ebx & 0xffffff00u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fa1beu:
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0x118u);
        in_esi = rd32(sp0 - 0x114u);
        in_ebx = rd32(sp0 - 0x110u);
        g->esp = sp0 - 0x118u;
        (void)sp0;
        return 1;
    }
    case 0x100fa1cau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0x118u);
        in_esi = rd32(sp0 - 0x114u);
        in_ebx = rd32(sp0 - 0x110u);
        g->esp = sp0 - 0x118u;
        g->ebx = in_ebx & 0xffffff00u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fa389u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x124u;
        g->esi = arg1;
        g->edi = 0x25e4u;
        wr32(sp0 - 0x124u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100fa39eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x118u;
        g->esi = arg1;
        g->edi = 0x25e4u;
        wr32(sp0 - 0x124u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100fa3c7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x128u;
        g->esi = arg1;
        g->edi = 0x25e4u;
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100fa3d7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x118u;
        g->esi = arg1;
        g->edi = 0x25e4u;
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100fa3ddu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x118u;
        g->esi = arg1;
        g->edi = 0x25e4u;
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100fa3e5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x118u;
        g->esi = arg1;
        g->edi = 0x25e4u;
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100fa3ebu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x118u;
        g->esi = arg1;
        g->edi = 0x25e4u;
        (void)sp0;
        return 1;
    }
    case 0x100fa3f5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x11cu;
        g->esi = arg1;
        g->edi = 0x25e4u;
        wr32(sp0 - 0x11cu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100fa406u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x118u;
        g->esi = arg1;
        g->edi = 0x25e4u;
        wr32(sp0 - 0x11cu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100fa40du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x118u;
        g->esi = arg1;
        g->edi = 0x25e4u;
        wr32(sp0 - 0x11cu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100fa413u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x118u;
        g->esi = arg1;
        g->edi = 0x25e4u;
        wr32(sp0 - 0x11cu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100fa41au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x118u;
        g->esi = arg1;
        g->edi = 0x25e4u;
        wr32(sp0 - 0x11cu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100fa422u:
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
        g->esp = sp0 - 0x118u;
        g->esi = arg1;
        wr32(sp0 - 0x11cu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100fa429u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x118u;
        g->esi = arg1;
        g->edi = 0x25e4u;
        wr32(sp0 - 0x11cu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100fa42du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x118u;
        g->esi = arg1;
        g->edi = 0x25e4u;
        wr32(sp0 - 0x11cu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100fa42fu:
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
        g->esp = sp0 - 0x118u;
        g->esi = arg1;
        wr32(sp0 - 0x11cu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100fa435u:
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
        g->esp = sp0 - 0x118u;
        g->esi = arg1;
        wr32(sp0 - 0x11cu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100fa454u:
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
        g->esp = sp0 - 0x11cu;
        g->esi = arg1;
        wr32(sp0 - 0x11cu, sp0 - 0x109u);
        (void)sp0;
        return 1;
    }
    case 0x100fa466u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x11cu, sp0 - 0x109u);
        (void)sp0;
        return 1;
    }
    case 0x100fa489u:
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0x118u);
        in_esi = rd32(sp0 - 0x114u);
        in_ebx = rd32(sp0 - 0x110u);
        g->esp = sp0 - 0x118u;
        g->ebx = in_ebx & 0xffffff00u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     100fa1da: holds in_ebx, which no location here says
     100fa1e6: holds in_ebx, which no location here says
     100fa1f9: holds in_ebx, which no location here says
     100fa208: holds in_ebx, which no location here says
     100fa216: holds in_ebx, which no location here says
     100fa21a: holds in_ebx, which no location here says
     100fa228: holds in_ebx, which no location here says
     100fa22f: holds in_ebx, which no location here says
     100fa234: holds in_ebx, which no location here says
     100fa239: holds in_ebx, which no location here says
     100fa23e: holds in_ebx, which no location here says
     100fa243: holds in_ebx, which no location here says
     100fa248: holds in_ebx, which no location here says
     100fa24e: holds in_ebx, which no location here says
     100fa253: holds in_ebx, which no location here says
     100fa258: holds in_ebx, which no location here says
     100fa25d: holds in_ebx, which no location here says
     100fa262: holds in_ebx, which no location here says
     100fa267: holds in_ebx, which no location here says
     100fa26c: holds in_ebx, which no location here says
     100fa271: holds in_ebx, which no location here says
     100fa276: holds in_ebx, which no location here says
     100fa27b: holds in_ebx, which no location here says
     100fa280: holds in_ebx, which no location here says
     100fa28e: holds in_ebx, which no location here says
     100fa295: holds in_ebx, which no location here says
     100fa29b: holds in_ebx, which no location here says
     100fa29e: holds in_ebx, which no location here says
     100fa2a4: holds in_ebx, which no location here says
     100fa2a9: holds in_ebx, which no location here says
     100fa2b7: holds in_ebx, which no location here says
     100fa2c7: holds in_ebx, which no location here says
     100fa2cc: holds in_ebx, which no location here says
     100fa2d4: holds in_ebx, which no location here says
     100fa2d9: holds in_ebx, which no location here says
     100fa2ed: holds in_ebx, which no location here says
     100fa2f2: holds in_ebx, which no location here says
     100fa308: holds in_ebx, which no location here says
     100fa314: holds in_ebx, which no location here says
     100fa31b: holds in_ebx, which no location here says
     100fa320: holds in_ebx, which no location here says
     100fa328: holds in_ebx, which no location here says
     100fa32d: holds in_ebx, which no location here says
     100fa335: holds in_ebx, which no location here says
     100fa33a: holds in_ebx, which no location here says
     100fa342: holds in_ebx, which no location here says
     100fa34a: holds in_ebx, which no location here says
     100fa36d: holds in_ebx, which no location here says
     100fa3aa: holds in_ebx, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100fa180(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100fa180(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
