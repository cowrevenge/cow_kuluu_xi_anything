/* f_0x10042d00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10042d00(Guest* g)
{
    double d1;
    double d11;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d2;
    double d20;
    double d21;
    double d22;
    double d30;
    double d35;
    double d40;
    double d44;
    double d49;
    double d54;
    double d58;
    double d63;
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    uint32_t esi;
    double loc_c_f;
    uint32_t t10;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
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
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10042dc0u: eax = g->eax; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); loc_c_f = rdf32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10042dc0;
    case 0x10042dd5u: eax = g->eax; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); loc_c_f = rdf32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10042dd5;
    case 0x10042df7u: eax = g->eax; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); loc_c_f = rdf32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10042df7;
    case 0x10042dfau: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); loc_c_f = rdf32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10042dfa;
    case 0x10042e1cu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); loc_c_f = rdf32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10042e1c;
    case 0x10042e30u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); loc_c_f = rdf32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10042e30;
    case 0x10042fdfu: eax = g->eax; edx = g->edx; esi = g->esi; goto E_10042fdf;
    case 0x10043000u: eax = g->eax; edx = g->edx; esi = g->esi; goto E_10043000;
    case 0x10043090u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); loc_c_f = rdf32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10043090;
    default: break;
    }
#endif

    COW_AT(10042d00)
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    d1 = (double)(float)(double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc4u);
    wrf32(sp0 - 0x20u, (float)d1);
    d2 = (double)(float)(double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc0u);
    wrf32(sp0 - 0x24u, (float)d2);
    t3 = rd32(COW_IMG(0x1047bfa8u)) + 0xb10u;
    wr32(sp0 - 0x28u, t3);
    t4 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x2cu, t4);
    t5 = rd32(sp0 + 8u);
    wr32(sp0 - 0x30u, t5);
    wr32(sp0 - 0x34u, arg1);
    wr32(sp0 - 0x38u, sp0 - 0x10u);
    g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t6 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(t6 + 0x84u), rd32(COW_IMG(0x1047cf7cu)), 7, sp0 - 0x10u, arg1, t5, t4, t3, cow_f2bits(d2), cow_f2bits(d1));
    t7 = g->edx;
    wr32(sp0 - 0x10u, 0xbf000000u);
    g->eax = rd32(COW_IMG(0x1047bfa8u));
    g->edx = t7;
    t8 = rd32(COW_IMG(0x1047bfa8u));
    t9 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t8 + 0xdc8u), 0);
    t10 = g->edx;
    wr32(sp0 - 4u, 0xbf000000u);
    d11 = fr(g, (double)(int32_t)rd32(t9 + 8u) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 8u, (float)(double)(float)d11);
    g->eax = rd32(COW_IMG(0x1047bfa8u));
    g->edx = t10;
    t12 = rd32(COW_IMG(0x1047bfa8u));
    t13 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t12 + 0xdc8u), 0);
    t14 = g->edx;
    d15 = fr(g, (double)(int32_t)rd32(t13 + 0xcu) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0xcu, (float)(double)(float)d15);
    d16 = fr(g, (double)rdf32(sp0 - 8u) - cow_bits2f(0xbf000000u));
    wrf32(sp0 + 0xcu, (float)d16);
    wrf32(sp0 + 8u, (float)fr(g, cow_bits2f(0xbf000000u) - (double)(float)d15));
    d17 = (double)rdf32(sp0 + 0xcu);
    if (d17 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (t13 & 0xffff0000u) | (uint16_t)cow_fsw(g, d17, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_10043090;
    }
    eax = (t13 & 0xffff0000u) | (uint16_t)cow_fsw(g, d17, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    edx = t14;
    esi = t5;
    loc_c_f = (double)(float)d15;
    COW_AT(10042dc0)
    d18 = (double)rdf32(sp0 + 8u);
    if (d18 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d18, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_10043090;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d18, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(10042dd5)
    d19 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 + 0xcu));
    wrf32(sp0 + 0xcu, (float)d19);
    d20 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 + 8u));
    wrf32(sp0 + 8u, (float)d20);
    if ((int32_t)esi > 0)
    {
    COW_AT(10042df7)
        eax = arg1 + 0x20u;
L_10042dfa: ;
    COW_AT(10042dfa)
        d21 = fr(g, fr(g, (double)rdf32(eax - 4u) - cow_bits2f(0xbf000000u)) * (double)rdf32(sp0 + 0xcu));
        wrf32(eax - 4u, (float)d21);
        d22 = fr(g, fr(g, (double)rdf32(eax) - loc_c_f) * (double)rdf32(sp0 + 8u));
        wrf32(eax, (float)d22);
        if (esi != 1u)
        {
            eax = eax + 0x24u;
            esi = esi - 1u;
            goto L_10042dfa;
        }
        eax = eax + 0x24u;
    }
    COW_AT(10042e1c)
    if (rd32(rd32(COW_IMG(0x1045666cu)) + 0x194u) == 0u) goto L_10043090;
    ebx = rd32(rd32(COW_IMG(0x1045666cu)) + 0x194u);
    COW_AT(10042e30)
    wr32(sp0 - 0x20u, 4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t23 = cow_stdcall(g, COW_IMG(0x10044010u), 1, 4u);
    t24 = g->edx;
    g->edx = t24;
    t25 = cow_thiscall(g, COW_IMG(0x10044130u), rd32(COW_IMG(0x1047bba8u)), 0);
    t26 = g->edx;
    g->eax = rd32(COW_IMG(0x1047bfa8u));
    t27 = rd32(COW_IMG(0x1047bfa8u));
    t28 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t27 + 0xdc8u), 0);
    t29 = rd32(t28 + 8u);
    wr32(sp0 + 0xcu, t29);
    d30 = fr(g, cow_bits2f(0xbf000000u) / (double)(int32_t)rd32(sp0 + 0xcu));
    wrf32(t25 + 0x14u, (float)d30);
    g->eax = rd32(COW_IMG(0x1047bfa8u));
    g->edx = t29;
    t31 = rd32(COW_IMG(0x1047bfa8u));
    t32 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t31 + 0xdc8u), 0);
    t33 = g->edx;
    t34 = rd32(t32 + 0xcu);
    wr32(sp0 + 0xcu, t34);
    d35 = fr(g, (double)rdf32(sp0 - 0xcu) / (double)(int32_t)rd32(sp0 + 0xcu));
    wrf32(t25 + 0x18u, (float)d35);
    g->eax = rd32(COW_IMG(0x1047bfa8u));
    g->edx = t33;
    t36 = rd32(COW_IMG(0x1047bfa8u));
    t37 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t36 + 0xdc8u), 0);
    t38 = g->edx;
    t39 = rd32(t37 + 8u);
    wr32(sp0 + 0xcu, t39);
    d40 = fr(g, (double)rdf32(sp0 - 8u) / (double)(int32_t)rd32(sp0 + 0xcu));
    wrf32(t25 + 0x30u, (float)d40);
    g->eax = rd32(COW_IMG(0x1047bfa8u));
    t41 = rd32(COW_IMG(0x1047bfa8u));
    t42 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t41 + 0xdc8u), 0);
    t43 = rd32(t42 + 0xcu);
    wr32(sp0 + 0xcu, t43);
    d44 = fr(g, (double)rdf32(sp0 - 0xcu) / (double)(int32_t)rd32(sp0 + 0xcu));
    wrf32(t25 + 0x34u, (float)d44);
    g->eax = rd32(COW_IMG(0x1047bfa8u));
    g->edx = t43;
    t45 = rd32(COW_IMG(0x1047bfa8u));
    t46 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t45 + 0xdc8u), 0);
    t47 = g->edx;
    t48 = rd32(t46 + 8u);
    wr32(sp0 + 0xcu, t48);
    d49 = fr(g, cow_bits2f(0xbf000000u) / (double)(int32_t)rd32(sp0 + 0xcu));
    wrf32(t25 + 0x4cu, (float)d49);
    g->eax = rd32(COW_IMG(0x1047bfa8u));
    g->edx = t47;
    t50 = rd32(COW_IMG(0x1047bfa8u));
    t51 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t50 + 0xdc8u), 0);
    t52 = g->edx;
    t53 = rd32(t51 + 0xcu);
    wr32(sp0 + 0xcu, t53);
    d54 = fr(g, cow_bits2f(0xbf000000u) / (double)(int32_t)rd32(sp0 + 0xcu));
    wrf32(t25 + 0x50u, (float)d54);
    g->eax = rd32(COW_IMG(0x1047bfa8u));
    t55 = rd32(COW_IMG(0x1047bfa8u));
    t56 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t55 + 0xdc8u), 0);
    t57 = rd32(t56 + 8u);
    wr32(sp0 + 0xcu, t57);
    d58 = fr(g, (double)rdf32(sp0 - 8u) / (double)(int32_t)rd32(sp0 + 0xcu));
    wrf32(t25 + 0x68u, (float)d58);
    g->eax = rd32(COW_IMG(0x1047bfa8u));
    g->edx = t57;
    t59 = rd32(COW_IMG(0x1047bfa8u));
    t60 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t59 + 0xdc8u), 0);
    t61 = g->edx;
    t62 = rd32(t60 + 0xcu);
    wr32(sp0 + 0xcu, t62);
    d63 = fr(g, cow_bits2f(0xbf000000u) / (double)(int32_t)rd32(sp0 + 0xcu));
    wr32(t25, 0u);
    wr32(t25 + 4u, 0u);
    wr32(t25 + 8u, 0u);
    wr32(t25 + 0xcu, 0x3f800000u);
    wr32(t25 + 0x1cu, 0x43800000u);
    wr32(t25 + 0x20u, 0u);
    wr32(t25 + 0x24u, 0u);
    wr32(t25 + 0x28u, 0x3f800000u);
    wr32(t25 + 0x38u, 0u);
    wrf32(t25 + 0x6cu, (float)d63);
    wr32(t25 + 0x3cu, 0x43800000u);
    wr32(t25 + 0x40u, 0u);
    wr32(t25 + 0x44u, 0x3f800000u);
    wr32(t25 + 0x54u, 0x43800000u);
    wr32(t25 + 0x58u, 0x43800000u);
    wr32(t25 + 0x5cu, 0u);
    wr32(t25 + 0x60u, 0x3f800000u);
    cow_stdcall(g, COW_IMG(0x100441a0u), 0);
    t64 = rd32(rd32(COW_IMG(0x1047bb88u)) + 0xcu);
    wr32(sp0 - 0x20u, t64);
    t65 = rd32(rd32(COW_IMG(0x1047bb88u)) + 8u);
    wr32(sp0 - 0x24u, t65);
    t66 = rd32(rd32(COW_IMG(0x1047bb88u)) + 4u);
    wr32(sp0 - 0x28u, t66);
    g->ebx = ebx;
    cow_thiscall(g, COW_IMG(0x1006a060u), rd32(COW_IMG(0x1047bfa8u)), 3, t66, t65, t64);
    wr32(sp0 - 0x20u, ebx);
    wr32(sp0 - 0x24u, 0u);
    t67 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0x28u, t67);
    g->eax = t67;
    g->edx = rd32(t67);
    t68 = rd32(t67);
    t69 = cow_thiscall(g, rd32(t68 + 0xf4u), rd32(COW_IMG(0x1047bfa8u)), 3, t67, 0u, ebx);
    t70 = g->edx;
    if (rd8(COW_IMG(0x1047bb41u)) & 1u)
    {
        eax = (t69 & 0xffffff00u) | rd8(COW_IMG(0x1047bb41u));
        edx = t70;
    }
    else
    {
        eax = (t69 & 0xffffff00u) | rd8(COW_IMG(0x1047bb41u));
        edx = t70;
    COW_AT(10042fdf)
        wr8(COW_IMG(0x1047bb41u), (uint8_t)(eax | 1u));
        g->eax = eax;
        g->edx = (edx & 0xffffff00u) | (uint8_t)(eax | 1u);
        g->esp = sp0 - 0x1cu;
        t71 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047bb5cu), 0);
        t72 = g->ecx;
        t73 = g->edx;
        wr32(sp0 - 0x20u, COW_IMG(0x100430a0u));
        g->edx = t73;
        t74 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x100430a0u));
        t75 = g->edx;
        eax = t74;
        edx = t75;
    }
    COW_AT(10043000)
    wr32(sp0 - 0x20u, COW_IMG(0x103531c0u));
    wr32(sp0 - 0x24u, COW_IMG(0x1035322cu));
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t76 = cow_fastcall(g, COW_IMG(0x1006ae30u), COW_IMG(0x1047bb5cu), edx, 2, COW_IMG(0x1035322cu), COW_IMG(0x103531c0u));
    t77 = g->edx;
    wr32(sp0 - 0x20u, 0xffffffffu);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 5u);
    wr32(sp0 - 0x2cu, 2u);
    wr32(sp0 - 0x30u, 0u);
    g->edx = t77;
    t78 = cow_thiscall(g, COW_IMG(0x10043f40u), rd32(COW_IMG(0x1047bba8u)), 5, 0u, 2u, 5u, 0u, 0xffffffffu);
    t79 = g->edx;
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    cow_fastcall(g, COW_IMG(0x1006a0e0u), rd32(COW_IMG(0x1047bfa8u)), t79, 2, 0u, 0u);
    t80 = g->edx;
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, 0x1bu);
    t81 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0x28u, t81);
    t82 = rd32(t81);
    cow_thiscall(g, rd32(t82 + 0xc8u), t82, 3, t81, 0x1bu, 1u);
    t83 = g->ecx;
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, 7u);
    t84 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0x28u, t84);
    cow_thiscall(g, rd32(rd32(t84) + 0xc8u), t83, 3, t84, 7u, 1u);
    t85 = rd32(rd32(COW_IMG(0x1047bb88u)) + 4u);
    wr32(sp0 - 0x20u, t85);
    wr32(sp0 - 0x24u, arg4);
    t86 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0x28u, t86);
    g->eax = t86;
    t87 = cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu)) + 0xf4u), rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu)), 3, t86, arg4, t85);
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    return (t87 & 0xffffff00u) | 1u;
L_10043090: ;
    COW_AT(10043090)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10042d00(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10042dc0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_c_f;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ebx = arg1;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        wr32(sp0 - 0x10u, 0xbf000000u);
        wr32(sp0 - 4u, 0xbf000000u);
        (void)sp0;
        return 1;
    }
    case 0x10042dd5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_c_f;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ebx = arg1;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        wr32(sp0 - 0x10u, 0xbf000000u);
        wr32(sp0 - 4u, 0xbf000000u);
        (void)sp0;
        return 1;
    }
    case 0x10042df7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_c_f;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ebx = arg1;
        g->edi = 0u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        wr32(sp0 - 0x10u, 0xbf000000u);
        wr32(sp0 - 4u, 0xbf000000u);
        (void)sp0;
        return 1;
    }
    case 0x10042dfau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_c_f;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        wr32(sp0 - 0x10u, 0xbf000000u);
        wr32(sp0 - 4u, 0xbf000000u);
        (void)sp0;
        return 1;
    }
    case 0x10042e1cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_c_f;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        wr32(sp0 - 0x10u, 0xbf000000u);
        wr32(sp0 - 4u, 0xbf000000u);
        (void)sp0;
        return 1;
    }
    case 0x10042e30u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_c_f;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        wr32(sp0 - 0x10u, 0xbf000000u);
        wr32(sp0 - 4u, 0xbf000000u);
        (void)sp0;
        return 1;
    }
    case 0x10042fdfu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebx = 1u;
        g->edi = 0u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10043000u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebx = 1u;
        g->edi = 0u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10043090u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_c_f;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10042d00(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10042d00(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
