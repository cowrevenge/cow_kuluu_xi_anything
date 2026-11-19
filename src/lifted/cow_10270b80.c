/* f_0x10270b80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10270b80(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
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
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10270caau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10270caa;
    case 0x10270d30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10270d30;
    case 0x10270d90u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10270d90;
    case 0x10270ddeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10270dde;
    case 0x10270de2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10270de2;
    case 0x10270de4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10270de4;
    case 0x10270e2du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10270e2d;
    case 0x10270e60u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10270e60;
    case 0x10270e6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10270e6b;
    case 0x10270eb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10270eb3;
    default: break;
    }
#endif

    COW_AT(10270b80)
    wr32(COW_IMG(0x1099b0d8u), 1u);
    wr32(COW_IMG(0x1099b0dcu), 0x1c0u);
    wr32(COW_IMG(0x1099b0e0u), 0x180u);
    wr32(COW_IMG(0x1099b0e4u), 0u);
    wr32(COW_IMG(0x1099b0ecu), 0u);
    wr32(COW_IMG(0x1099b0e8u), 0u);
    wr32(COW_IMG(0x1099b0f0u), 0u);
    wr32(COW_IMG(0x1099b0f4u), 0u);
    wr32(COW_IMG(0x1099b0f8u), 0u);
    wr32(COW_IMG(0x1099b0fcu), 0u);
    wr32(COW_IMG(0x1099b100u), 0u);
    wr32(COW_IMG(0x1099b104u), 0x41100000u);
    wr32(COW_IMG(0x1099b108u), 0x41800000u);
    wr32(COW_IMG(0x1099b10cu), 0x41100000u);
    wr32(COW_IMG(0x1099b110u), 0x42200000u);
    wr32(COW_IMG(0x1099b114u), 0x41900000u);
    wr32(COW_IMG(0x1099b118u), 0x41d00000u);
    wr32(COW_IMG(0x1099b11cu), 0x41f00000u);
    wr32(COW_IMG(0x1099b120u), 0u);
    wr32(COW_IMG(0x1099b124u), 0u);
    wr32(COW_IMG(0x1099b128u), 0xdu);
    wr32(COW_IMG(0x1099c510u), 0x41a00000u);
    wr32(COW_IMG(0x1099b1acu), 0u);
    wr32(COW_IMG(0x1099b1b0u), 0u);
    wr32(COW_IMG(0x1099bb70u), 0u);
    wr32(COW_IMG(0x1099b12cu), 0u);
    wr32(COW_IMG(0x1099b130u), 0u);
    wr32(COW_IMG(0x1099b134u), 0u);
    wr32(COW_IMG(0x1099b138u), 0u);
    g->eax = 0u;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_cdecl(g, COW_IMG(0x1028e370u), 1, COW_IMG(0x1099b13cu));
    t2 = g->ecx;
    t3 = g->edx;
    wr8(COW_IMG(0x1099b168u), 0u);
    wr32(COW_IMG(0x1099b16cu), 0x100u);
    wr32(COW_IMG(0x1099cdb4u), 0u);
    wr32(COW_IMG(0x1099cdb8u), 0x3f800000u);
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x18u;
    t4 = cow_cdecl(g, COW_IMG(0x10290630u), 5, COW_IMG(0x1099b13cu), 7u, 6u, 4u, 1u);
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
    esi = COW_IMG(0x1099b39cu);
    edi = COW_IMG(0x1099b1e4u);
    loc_4 = COW_IMG(0x1099b1b4u);
L_10270caa: ;
    COW_AT(10270caa)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t7 = cow_cdecl(g, COW_IMG(0x10291130u), 1, edi - 0x14u);
    t8 = g->ecx;
    t9 = g->edx;
    g->ecx = t8;
    g->edx = t9;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x1026df20u), 3, esi - 0x60u, edi - 0x14u, in_edi);
    t10 = g->ecx;
    t11 = g->edx;
    wr32(edi + 4u, 0x3f800000u);
    wr32(edi, 0x42200000u);
    wr32(edi + 8u, 0x49212200u);
    wr32(esi - 4u, 0u);
    wr32(esi, 0u);
    wr32(esi + 4u, 0u);
    wr32(esi + 0x18u, 0x44480000u);
    g->ecx = t10;
    g->edx = t11;
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x1026e210u), 1, esi - 0x60u);
    t12 = g->ecx;
    t13 = g->edx;
    g->eax = esi - 0x44u;
    g->edx = t13;
    g->esp = sp0 - 0x20u;
    t14 = cow_cdecl(g, COW_IMG(0x1028ed20u), 3, COW_IMG(0x1099b13cu), edi - 0x14u, esi - 0x44u);
    t15 = g->edx;
    wr32(loc_4, t14);
    g->ecx = edi + 0x4bcu;
    g->esp = sp0 - 0x2cu;
    t16 = cow_cdecl(g, COW_IMG(0x10291130u), 1, edi + 0x4bcu);
    t17 = g->ecx;
    g->ecx = t17;
    g->edx = esi + 0x470u;
    g->esp = sp0 - 0x28u;
    t18 = cow_cdecl(g, COW_IMG(0x1026df20u), 3, esi + 0x470u, edi + 0x4bcu, COW_IMG(0x1099b13cu));
    t19 = g->ecx;
    t20 = g->edx;
    if ((int32_t)(edi + 0x34u) < (int32_t)COW_IMG(0x1099b350u))
    {
        eax = t18;
        ecx = t19;
        edx = t20;
        esi = esi + 0x7cu;
        edi = edi + 0x34u;
        loc_4 = loc_4 + 4u;
        goto L_10270caa;
    }
    eax = t18;
    ecx = t19;
    edx = t20;
    COW_AT(10270d30)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t21 = cow_stdcall(g, COW_IMG(0x10272bc0u), 0);
    t22 = g->ecx;
    t23 = g->edx;
    g->ecx = t22;
    g->edx = t23;
    t24 = cow_cdecl(g, COW_IMG(0x1026e310u), 1, COW_IMG(0x1099cd00u));
    t25 = g->ecx;
    t26 = g->edx;
    wr32(COW_IMG(0x1099cd24u), 0x42700000u);
    wr32(COW_IMG(0x1099cd14u), 0x3f800000u);
    wr32(COW_IMG(0x1099cd18u), 0x3f800000u);
    wr32(COW_IMG(0x1099cd1cu), 0x3f800000u);
    g->ecx = t25;
    g->edx = t26;
    g->esp = sp0 - 0x18u;
    t27 = cow_cdecl(g, COW_IMG(0x1028ed70u), 3, COW_IMG(0x1099b13cu), COW_IMG(0x1099cd00u), COW_IMG(0x1099cd54u));
    t28 = g->ecx;
    t29 = g->edx;
    wr32(COW_IMG(0x1099ccfcu), t27);
    g->ecx = t28;
    g->edx = t29;
    g->esp = sp0 - 0x14u;
    t30 = cow_stdcall(g, COW_IMG(0x10270ee0u), 0);
    t31 = g->ecx;
    t32 = g->edx;
    wr32(COW_IMG(0x1099ccf8u), 0u);
    eax = t30;
    ecx = t31;
    edx = t32;
    esi = 0u;
L_10270d90: ;
    COW_AT(10270d90)
    t33 = COW_IMG(0x1099bb9cu) + esi * 0x38u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x1026e310u), 1, t33);
    t34 = g->ecx;
    t35 = g->edx;
    wr32(t33 + 0x24u, 0x42700000u);
    t36 = COW_IMG(0x1099bcd0u) + esi * 0x7cu;
    g->eax = t36;
    g->ecx = t34;
    g->edx = t35;
    g->esp = sp0 - 0x18u;
    t37 = cow_cdecl(g, COW_IMG(0x1028ed70u), 3, COW_IMG(0x1099b13cu), t33, t36);
    t38 = g->ecx;
    t39 = g->edx;
    wr32(COW_IMG(0x1099bb74u) + esi * 4u, t37);
    if (esi != 4u)
    {
        eax = t37;
        ecx = t38;
        edx = t39;
        ebx = t33;
        ebp = esi * 0x7cu;
        loc_4 = esi * 0x38u;
    COW_AT(10270de2)
        loc_18 = 1u;
    }
    else
    {
        eax = t37;
        ecx = t38;
        edx = t39;
        ebx = t33;
        ebp = esi * 0x7cu;
        loc_4 = esi * 0x38u;
    COW_AT(10270dde)
        loc_18 = 0u;
    }
    COW_AT(10270de4)
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x14u;
    t40 = cow_call_regs(g, COW_IMG(0x1028ece0u), g->eax, g->ecx, edx, 1, 3, COW_IMG(0x1099b13cu), eax, loc_18);
    t41 = g->ecx;
    t42 = g->edx;
    t43 = COW_IMG(0x1099c578u) + esi * 0x180u;
    cow_cdecl(g, COW_IMG(0x10290930u), 1, t43);
    t44 = rd32(ebx + 0x14u);
    wr32(t43 + 0x28u, t44);
    t45 = rd32(ebx + 0x18u);
    wr32(t43 + 0x2cu, t45);
    t46 = rd32(ebx + 0x1cu);
    wr32(t43 + 0x30u, t46);
    wr32(t43 + 0x34u, 0x3f000000u);
    wr32(t43 + 0x38u, 0x3f000000u);
    if (rd32(COW_IMG(0x1099ccf8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x1099ccf8u));
        ecx = t44;
        edx = t45;
    COW_AT(10270e60)
        wr32(COW_IMG(0x1099bb88u) + esi * 4u, 0u);
    }
    else
    {
        eax = rd32(COW_IMG(0x1099ccf8u));
        edx = t45;
        edi = t43;
    COW_AT(10270e2d)
        t47 = COW_IMG(0x1099bf3cu) + ebp;
        g->eax = eax;
        g->ecx = t47;
        g->esp = sp0 - 0x14u;
        t48 = cow_cdecl(g, COW_IMG(0x1028ee00u), 5, COW_IMG(0x1099b13cu), eax, t47, edi, 3u);
        t49 = g->ecx;
        wr32(COW_IMG(0x1099bb88u) + esi * 4u, t48);
        g->ecx = t49;
        g->edx = rd32(COW_IMG(0x1099ccfcu));
        t50 = rd32(COW_IMG(0x1099ccfcu));
        g->esp = sp0 - 0x28u;
        t51 = cow_cdecl(g, COW_IMG(0x1028f300u), 3, COW_IMG(0x1099b13cu), t48, t50);
        t52 = g->ecx;
        t53 = g->edx;
        eax = t51;
        ecx = t52;
        edx = t53;
    }
    COW_AT(10270e6b)
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10271f40u), 1, esi);
    t54 = g->edx;
    t55 = COW_IMG(0x1099c18cu) + loc_4;
    g->eax = loc_4;
    g->ecx = t55;
    g->esp = sp0 - 0x18u;
    t56 = cow_cdecl(g, COW_IMG(0x1026e310u), 1, t55);
    t57 = g->ecx;
    t58 = COW_IMG(0x1099c2a4u) + ebp;
    g->ecx = t57;
    g->edx = t58;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x1026df20u), 3, t58, t55, esi);
    t59 = g->ecx;
    t60 = g->edx;
    wr32(COW_IMG(0x1099c514u) + esi * 0x14u, 1u);
    t61 = COW_IMG(0x1099c518u) + esi * 0x14u;
    g->eax = t61;
    g->ecx = t59;
    g->edx = t60;
    g->esp = sp0 - 0x20u;
    t62 = cow_cdecl(g, COW_IMG(0x1027ae70u), 1, t61);
    t63 = g->ecx;
    t64 = g->edx;
    if ((int32_t)(esi + 1u) < 5)
    {
        eax = t62;
        ecx = t63;
        edx = t64;
        esi = esi + 1u;
        goto L_10270d90;
    }
    eax = t62;
    ecx = t63;
    edx = t64;
    COW_AT(10270eb3)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t65 = cow_stdcall(g, COW_IMG(0x102720c0u), 0);
    t66 = g->ecx;
    t67 = g->edx;
    g->edx = t67;
    t68 = cow_thiscall_cdecl(g, COW_IMG(0x10272700u), t66, 1, 0u);
    t69 = g->ecx;
    t70 = g->edx;
    g->ecx = t69;
    g->edx = t70;
    g->esp = sp0 - 0x18u;
    t71 = cow_cdecl(g, COW_IMG(0x10272a30u), 1, 4u);
    t72 = g->ecx;
    t73 = g->edx;
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x1028ec70u), 3, COW_IMG(0x1099b13cu), 2u, 1u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10270b80(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10270caau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10270d30u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10270d90u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10270ddeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10270de2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10270de4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10270e2du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10270e60u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10270e6bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10270eb3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10270b80(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10270b80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
