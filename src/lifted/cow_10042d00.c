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
    double d23;
    double d31;
    double d36;
    double d41;
    double d45;
    double d50;
    double d55;
    double d59;
    double d64;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    double loc_c_f;
    uint32_t t10;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
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
    case 0x10042d49u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10042d49;
    case 0x10042d61u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10042d61;
    case 0x10042d86u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10042d86;
    case 0x10042dc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_c_f = rdf32(sp0 - 0xcu); goto E_10042dc0;
    case 0x10042dd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_c_f = rdf32(sp0 - 0xcu); goto E_10042dd5;
    case 0x10042df7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_c_f = rdf32(sp0 - 0xcu); goto E_10042df7;
    case 0x10042dfau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_c_f = rdf32(sp0 - 0xcu); goto E_10042dfa;
    case 0x10042e1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_c_f = rdf32(sp0 - 0xcu); goto E_10042e1c;
    case 0x10042e30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_c_f = rdf32(sp0 - 0xcu); goto E_10042e30;
    case 0x10042e3du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10042e3d;
    case 0x10042e48u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10042e48;
    case 0x10042e5au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10042e5a;
    case 0x10042e7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10042e7c;
    case 0x10042e9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10042e9e;
    case 0x10042ec0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10042ec0;
    case 0x10042ee2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10042ee2;
    case 0x10042f04u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10042f04;
    case 0x10042f26u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10042f26;
    case 0x10042f48u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10042f48;
    case 0x10042f9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10042f9e;
    case 0x10042fbau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10042fba;
    case 0x10042fd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10042fd1;
    case 0x10042fdfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10042fdf;
    case 0x10042ff3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10042ff3;
    case 0x10042ffdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10042ffd;
    case 0x10043000u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10043000;
    case 0x10043014u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10043014;
    case 0x10043027u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10043027;
    case 0x10043034u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10043034;
    case 0x1004304bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1004304b;
    case 0x10043062u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10043062;
    case 0x10043085u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10043085;
    case 0x10043090u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_c_f = rdf32(sp0 - 0xcu); goto E_10043090;
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
    edx = t7;
    esi = t5;
    COW_AT(10042d49)
    wr32(sp0 - 0x10u, 0xbf000000u);
    g->eax = rd32(COW_IMG(0x1047bfa8u));
    g->edx = edx;
    t8 = rd32(COW_IMG(0x1047bfa8u));
    g->esp = sp0 - 0x1cu;
    t9 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t8 + 0xdc8u), 0);
    t10 = g->edx;
    eax = t9;
    edx = t10;
    COW_AT(10042d61)
    wr32(sp0 - 4u, 0xbf000000u);
    d11 = fr(g, (double)(int32_t)rd32(eax + 8u) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 8u, (float)(double)(float)d11);
    g->eax = rd32(COW_IMG(0x1047bfa8u));
    g->edx = edx;
    t12 = rd32(COW_IMG(0x1047bfa8u));
    g->esp = sp0 - 0x1cu;
    t13 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t12 + 0xdc8u), 0);
    t14 = g->edx;
    eax = t13;
    edx = t14;
    COW_AT(10042d86)
    d15 = fr(g, (double)(int32_t)rd32(eax + 0xcu) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0xcu, (float)(double)(float)d15);
    d16 = fr(g, (double)rdf32(sp0 - 8u) - (double)rdf32(sp0 - 0x10u));
    wrf32(sp0 + 0xcu, (float)d16);
    d17 = fr(g, (double)rdf32(sp0 - 4u) - (double)(float)d15);
    wrf32(sp0 + 8u, (float)d17);
    d18 = (double)rdf32(sp0 + 0xcu);
    if (d18 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d18, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_10043090;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d18, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    loc_c_f = (double)(float)d15;
    COW_AT(10042dc0)
    d19 = (double)rdf32(sp0 + 8u);
    if (d19 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d19, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_10043090;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d19, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(10042dd5)
    d20 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 + 0xcu));
    wrf32(sp0 + 0xcu, (float)d20);
    d21 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 + 8u));
    wrf32(sp0 + 8u, (float)d21);
    if ((int32_t)esi > 0)
    {
    COW_AT(10042df7)
        eax = arg1 + 0x20u;
L_10042dfa: ;
    COW_AT(10042dfa)
        d22 = fr(g, fr(g, (double)rdf32(eax - 4u) - (double)rdf32(sp0 - 0x10u)) * (double)rdf32(sp0 + 0xcu));
        wrf32(eax - 4u, (float)d22);
        d23 = fr(g, fr(g, (double)rdf32(eax) - (double)rdf32(sp0 - 0xcu)) * (double)rdf32(sp0 + 8u));
        wrf32(eax, (float)d23);
        if (esi != 1u)
        {
            eax = eax + 0x24u;
            esi = esi - 1u;
            loc_c_f = (double)rdf32(sp0 - 0xcu);
            goto L_10042dfa;
        }
        eax = eax + 0x24u;
        loc_c_f = (double)rdf32(sp0 - 0xcu);
    }
    COW_AT(10042e1c)
    if (rd32(rd32(COW_IMG(0x1045666cu)) + 0x194u) == 0u) goto L_10043090;
    ebx = rd32(rd32(COW_IMG(0x1045666cu)) + 0x194u);
    COW_AT(10042e30)
    wr32(sp0 - 0x20u, 4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t24 = cow_stdcall(g, COW_IMG(0x10044010u), 1, 4u);
    t25 = g->edx;
    eax = t24;
    edx = t25;
    COW_AT(10042e3d)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t26 = cow_thiscall(g, COW_IMG(0x10044130u), rd32(COW_IMG(0x1047bba8u)), 0);
    t27 = g->edx;
    eax = t26;
    edx = t27;
    COW_AT(10042e48)
    g->eax = rd32(COW_IMG(0x1047bfa8u));
    t28 = rd32(COW_IMG(0x1047bfa8u));
    g->esp = sp0 - 0x1cu;
    t29 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t28 + 0xdc8u), 0);
    esi = eax;
    eax = t29;
    COW_AT(10042e5a)
    t30 = rd32(eax + 8u);
    wr32(sp0 + 0xcu, t30);
    d31 = fr(g, (double)rdf32(sp0 - 0x10u) / (double)(int32_t)rd32(sp0 + 0xcu));
    wrf32(esi + 0x14u, (float)d31);
    g->eax = rd32(COW_IMG(0x1047bfa8u));
    g->edx = t30;
    t32 = rd32(COW_IMG(0x1047bfa8u));
    g->esp = sp0 - 0x1cu;
    t33 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t32 + 0xdc8u), 0);
    t34 = g->edx;
    eax = t33;
    edx = t34;
    COW_AT(10042e7c)
    t35 = rd32(eax + 0xcu);
    wr32(sp0 + 0xcu, t35);
    d36 = fr(g, (double)rdf32(sp0 - 0xcu) / (double)(int32_t)rd32(sp0 + 0xcu));
    wrf32(esi + 0x18u, (float)d36);
    g->eax = rd32(COW_IMG(0x1047bfa8u));
    g->edx = edx;
    t37 = rd32(COW_IMG(0x1047bfa8u));
    g->esp = sp0 - 0x1cu;
    t38 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t37 + 0xdc8u), 0);
    t39 = g->edx;
    eax = t38;
    edx = t39;
    COW_AT(10042e9e)
    t40 = rd32(eax + 8u);
    wr32(sp0 + 0xcu, t40);
    d41 = fr(g, (double)rdf32(sp0 - 8u) / (double)(int32_t)rd32(sp0 + 0xcu));
    wrf32(esi + 0x30u, (float)d41);
    g->eax = rd32(COW_IMG(0x1047bfa8u));
    t42 = rd32(COW_IMG(0x1047bfa8u));
    g->esp = sp0 - 0x1cu;
    t43 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t42 + 0xdc8u), 0);
    eax = t43;
    COW_AT(10042ec0)
    t44 = rd32(eax + 0xcu);
    wr32(sp0 + 0xcu, t44);
    d45 = fr(g, (double)rdf32(sp0 - 0xcu) / (double)(int32_t)rd32(sp0 + 0xcu));
    wrf32(esi + 0x34u, (float)d45);
    g->eax = rd32(COW_IMG(0x1047bfa8u));
    g->edx = t44;
    t46 = rd32(COW_IMG(0x1047bfa8u));
    g->esp = sp0 - 0x1cu;
    t47 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t46 + 0xdc8u), 0);
    t48 = g->edx;
    eax = t47;
    edx = t48;
    COW_AT(10042ee2)
    t49 = rd32(eax + 8u);
    wr32(sp0 + 0xcu, t49);
    d50 = fr(g, (double)rdf32(sp0 - 0x10u) / (double)(int32_t)rd32(sp0 + 0xcu));
    wrf32(esi + 0x4cu, (float)d50);
    g->eax = rd32(COW_IMG(0x1047bfa8u));
    g->edx = edx;
    t51 = rd32(COW_IMG(0x1047bfa8u));
    g->esp = sp0 - 0x1cu;
    t52 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t51 + 0xdc8u), 0);
    t53 = g->edx;
    eax = t52;
    edx = t53;
    COW_AT(10042f04)
    t54 = rd32(eax + 0xcu);
    wr32(sp0 + 0xcu, t54);
    d55 = fr(g, (double)rdf32(sp0 - 4u) / (double)(int32_t)rd32(sp0 + 0xcu));
    wrf32(esi + 0x50u, (float)d55);
    g->eax = rd32(COW_IMG(0x1047bfa8u));
    t56 = rd32(COW_IMG(0x1047bfa8u));
    g->esp = sp0 - 0x1cu;
    t57 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t56 + 0xdc8u), 0);
    eax = t57;
    COW_AT(10042f26)
    t58 = rd32(eax + 8u);
    wr32(sp0 + 0xcu, t58);
    d59 = fr(g, (double)rdf32(sp0 - 8u) / (double)(int32_t)rd32(sp0 + 0xcu));
    wrf32(esi + 0x68u, (float)d59);
    g->eax = rd32(COW_IMG(0x1047bfa8u));
    g->edx = t58;
    t60 = rd32(COW_IMG(0x1047bfa8u));
    g->esp = sp0 - 0x1cu;
    t61 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t60 + 0xdc8u), 0);
    t62 = g->edx;
    eax = t61;
    edx = t62;
    COW_AT(10042f48)
    t63 = rd32(eax + 0xcu);
    wr32(sp0 + 0xcu, t63);
    d64 = fr(g, (double)rdf32(sp0 - 4u) / (double)(int32_t)rd32(sp0 + 0xcu));
    wr32(esi, 0u);
    wr32(esi + 4u, 0u);
    wr32(esi + 8u, 0u);
    wr32(esi + 0xcu, 0x3f800000u);
    wr32(esi + 0x1cu, 0x43800000u);
    wr32(esi + 0x20u, 0u);
    wr32(esi + 0x24u, 0u);
    wr32(esi + 0x28u, 0x3f800000u);
    wr32(esi + 0x38u, 0u);
    wrf32(esi + 0x6cu, (float)d64);
    wr32(esi + 0x3cu, 0x43800000u);
    wr32(esi + 0x40u, 0u);
    wr32(esi + 0x44u, 0x3f800000u);
    wr32(esi + 0x54u, 0x43800000u);
    wr32(esi + 0x58u, 0x43800000u);
    wr32(esi + 0x5cu, 0u);
    wr32(esi + 0x60u, 0x3f800000u);
    g->esp = sp0 - 0x1cu;
    cow_stdcall(g, COW_IMG(0x100441a0u), 0);
    COW_AT(10042f9e)
    t65 = rd32(rd32(COW_IMG(0x1047bb88u)) + 0xcu);
    wr32(sp0 - 0x20u, t65);
    t66 = rd32(rd32(COW_IMG(0x1047bb88u)) + 8u);
    wr32(sp0 - 0x24u, t66);
    t67 = rd32(rd32(COW_IMG(0x1047bb88u)) + 4u);
    wr32(sp0 - 0x28u, t67);
    g->ebx = ebx;
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, COW_IMG(0x1006a060u), rd32(COW_IMG(0x1047bfa8u)), 3, t67, t66, t65);
    COW_AT(10042fba)
    wr32(sp0 - 0x20u, ebx);
    wr32(sp0 - 0x24u, 0u);
    t68 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0x28u, t68);
    g->eax = t68;
    g->edx = rd32(t68);
    t69 = rd32(t68);
    g->esp = sp0 - 0x1cu;
    t70 = cow_thiscall(g, rd32(t69 + 0xf4u), rd32(COW_IMG(0x1047bfa8u)), 3, t68, 0u, ebx);
    t71 = g->edx;
    eax = t70;
    edx = t71;
    COW_AT(10042fd1)
    if (rd8(COW_IMG(0x1047bb41u)) & 1u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047bb41u));
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047bb41u));
    COW_AT(10042fdf)
        wr8(COW_IMG(0x1047bb41u), (uint8_t)(eax | 1u));
        g->eax = eax;
        g->edx = (edx & 0xffffff00u) | (uint8_t)(eax | 1u);
        g->esp = sp0 - 0x1cu;
        t72 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047bb5cu), 0);
        t73 = g->ecx;
        t74 = g->edx;
        eax = t72;
        ecx = t73;
        edx = t74;
    COW_AT(10042ff3)
        wr32(sp0 - 0x20u, COW_IMG(0x100430a0u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t75 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x100430a0u));
        t76 = g->edx;
        eax = t75;
        edx = t76;
    COW_AT(10042ffd)
    }
    COW_AT(10043000)
    wr32(sp0 - 0x20u, COW_IMG(0x103531c0u));
    wr32(sp0 - 0x24u, COW_IMG(0x1035322cu));
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t77 = cow_fastcall(g, COW_IMG(0x1006ae30u), COW_IMG(0x1047bb5cu), edx, 2, COW_IMG(0x1035322cu), COW_IMG(0x103531c0u));
    t78 = g->edx;
    eax = t77;
    edx = t78;
    COW_AT(10043014)
    wr32(sp0 - 0x20u, 0xffffffffu);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 5u);
    wr32(sp0 - 0x2cu, 2u);
    wr32(sp0 - 0x30u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t79 = cow_thiscall(g, COW_IMG(0x10043f40u), rd32(COW_IMG(0x1047bba8u)), 5, 0u, 2u, 5u, 0u, 0xffffffffu);
    t80 = g->edx;
    eax = t79;
    edx = t80;
    COW_AT(10043027)
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    g->esp = sp0 - 0x1cu;
    cow_fastcall(g, COW_IMG(0x1006a0e0u), rd32(COW_IMG(0x1047bfa8u)), edx, 2, 0u, 0u);
    t81 = g->edx;
    edx = t81;
    COW_AT(10043034)
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, 0x1bu);
    t82 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0x28u, t82);
    t83 = rd32(t82);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(t83 + 0xc8u), t83, 3, t82, 0x1bu, 1u);
    t84 = g->ecx;
    ecx = t84;
    COW_AT(1004304b)
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, 7u);
    t85 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0x28u, t85);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(rd32(t85) + 0xc8u), ecx, 3, t85, 7u, 1u);
    COW_AT(10043062)
    t86 = rd32(rd32(COW_IMG(0x1047bb88u)) + 4u);
    wr32(sp0 - 0x20u, t86);
    wr32(sp0 - 0x24u, arg4);
    t87 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0x28u, t87);
    g->eax = t87;
    g->esp = sp0 - 0x1cu;
    t88 = cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu)) + 0xf4u), rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu)), 3, t87, arg4, t86);
    eax = t88;
    COW_AT(10043085)
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    return (eax & 0xffffff00u) | 1u;
L_10043090: ;
    COW_AT(10043090)
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
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
    case 0x10042d49u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebx = arg1;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10042d61u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebx = arg1;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10042d86u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebx = arg1;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10042dc0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ebx = arg1;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10042dd5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ebx = arg1;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10042df7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ebx = arg1;
        g->edi = 0u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10042dfau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10042e1cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10042e30u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10042e3du:
    {
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
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10042e48u:
    {
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
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10042e5au:
    {
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
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10042e7cu:
    {
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
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10042e9eu:
    {
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
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10042ec0u:
    {
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
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10042ee2u:
    {
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
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10042f04u:
    {
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
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10042f26u:
    {
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
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10042f48u:
    {
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
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10042f9eu:
    {
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
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10042fbau:
    {
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
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10042fd1u:
    {
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
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10042fdfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebx = 1u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10042ff3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebx = 1u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10042ffdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x20u;
        g->ebx = 1u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10043000u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebx = 1u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10043014u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebx = 1u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10043027u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebx = 1u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10043034u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1004304bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10043062u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10043085u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10043090u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
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
