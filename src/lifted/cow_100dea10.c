/* f_0x100dea10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100dea10(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_2ff0;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t105;
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
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 12360u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100dea4du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0x2ffcu); in_esi = rd32(sp0 - 0x2ff8u); in_ebp = rd32(sp0 - 0x2ff4u); g->ebp = rd32(sp0 - 0x2ff4u); g->edi = rd32(sp0 - 0x2ffcu); g->esi = rd32(sp0 - 0x2ff8u); goto E_100dea4d;
    case 0x100dea70u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x2ffcu); in_esi = rd32(sp0 - 0x2ff8u); in_ebp = rd32(sp0 - 0x2ff4u); g->ebp = rd32(sp0 - 0x2ff4u); g->edi = rd32(sp0 - 0x2ffcu); g->esi = rd32(sp0 - 0x2ff8u); goto E_100dea70;
    case 0x100dea7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x2ffcu); in_esi = rd32(sp0 - 0x2ff8u); in_ebp = rd32(sp0 - 0x2ff4u); g->ebp = rd32(sp0 - 0x2ff4u); g->edi = rd32(sp0 - 0x2ffcu); g->esi = rd32(sp0 - 0x2ff8u); goto E_100dea7c;
    case 0x100dea91u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2ffcu); in_esi = rd32(sp0 - 0x2ff8u); in_ebp = rd32(sp0 - 0x2ff4u); g->ebp = rd32(sp0 - 0x2ff4u); g->edi = rd32(sp0 - 0x2ffcu); g->esi = rd32(sp0 - 0x2ff8u); goto E_100dea91;
    case 0x100deab2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100deab2;
    case 0x100deaceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100deace;
    case 0x100deadeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100deade;
    case 0x100deaefu: edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100deaef;
    case 0x100deaf6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100deaf6;
    case 0x100deafdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100deafd;
    case 0x100deb05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100deb05;
    case 0x100deb0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100deb0b;
    case 0x100deb17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100deb17;
    case 0x100deb1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100deb1d;
    case 0x100deb24u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100deb24;
    case 0x100deb30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100deb30;
    case 0x100deb32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100deb32;
    case 0x100deb3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100deb3e;
    case 0x100deb45u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100deb45;
    case 0x100debb7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100debb7;
    case 0x100debc8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100debc8;
    case 0x100debd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100debd3;
    case 0x100debe5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100debe5;
    case 0x100debeeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100debee;
    case 0x100debfcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100debfc;
    case 0x100debfeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100debfe;
    case 0x100dec02u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100dec02;
    case 0x100dec0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100dec0d;
    case 0x100dec2du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100dec2d;
    case 0x100dec55u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100dec55;
    case 0x100dec77u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100dec77;
    case 0x100deca7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100deca7;
    case 0x100decd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100decd0;
    case 0x100decf4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100decf4;
    case 0x100ded0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100ded0d;
    case 0x100ded4au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100ded4a;
    case 0x100ded72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100ded72;
    case 0x100dee2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100dee2c;
    default: break;
    }
#endif

    COW_AT(100dea10)
    wr32(sp0 - 0x2ff4u, in_ebp);
    wr32(sp0 - 0x2ff8u, in_esi);
    wr32(sp0 - 0x2ffcu, in_edi);
    edi = sp0 - 0x2fecu;
    eax = 0u;
    ecx = 0x100u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    edi = sp0 - 0x2becu;
    ecx = 0x100u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x2ff0u, 0x100u);
    eax = sp0 - 0x27dcu;
    ecx = 0u;
    edx = in_edx;
L_100dea4d: ;
    COW_AT(100dea4d)
    wr32(eax - 8u, 0u);
    wr32(eax - 0x10u, 0u);
    wr8(eax - 4u, (uint8_t)((uint8_t)ecx + 0x80u));
    t1 = rd32(arg2 + ecx * 4u);
    wr32(eax - 0xcu, 0u);
    wr32(eax, t1 + 1u);
    if (ecx + 1u < 0x100u)
    {
        eax = eax + 0x14u;
        ecx = ecx + 1u;
        edx = t1 + 1u;
        goto L_100dea4d;
    }
    edx = t1 + 1u;
    COW_AT(100dea70)
    eax = sp0 - 0x13e4u;
    ecx = 0xffu;
L_100dea7c: ;
    COW_AT(100dea7c)
    wr32(eax + 8u, 0xffffffffu);
    wr32(eax, 0u);
    wr32(eax - 8u, 0u);
    wr32(eax - 4u, 0u);
    if (ecx != 1u)
    {
        eax = eax + 0x14u;
        ecx = ecx - 1u;
        goto L_100dea7c;
    }
    eax = eax + 0x14u;
    ecx = ecx - 1u;
    COW_AT(100dea91)
    wr32(sp0 - 0x3000u, in_ebx);
    wr32(sp0 - 0x3004u, COW_IMG(0x10361d24u));
    wr32(sp0 - 0x3008u, COW_IMG(0x10361d10u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2ff4u;
    t2 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, COW_IMG(0x10361d10u), COW_IMG(0x10361d24u), in_ebx, in_edi, in_esi);
    t3 = g->edx;
    edx = t3;
    ebx = 0x100u;
    esi = sp0 - 0x27e0u;
    edi = t2;
L_100deab2: ;
    COW_AT(100deab2)
    t4 = rd32(esi + 4u);
    wr32(sp0 - 0x3004u, t4);
    wr32(sp0 - 0x3008u, (uint32_t)(int8_t)rd8(esi));
    wr32(sp0 - 0x300cu, COW_IMG(0x10361d08u));
    wr32(sp0 - 0x3010u, edi);
    g->ebx = ebx;
    g->eax = t4;
    g->ecx = (uint32_t)(int8_t)rd8(esi);
    t5 = rd8(esi);
    g->esp = sp0 - 0x2ffcu;
    t6 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, edi, COW_IMG(0x10361d08u), (uint32_t)(int8_t)t5, t4, rd32(sp0 - 0x3000u));
    t7 = g->ecx;
    t8 = g->edx;
    if (ebx != 1u)
    {
        edx = t8;
        ebx = ebx - 1u;
        esi = esi + 0x14u;
        goto L_100deab2;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    COW_AT(100deace)
    wr32(sp0 - 0x3004u, edi);
    g->edi = edi;
    g->esp = sp0 - 0x2ff8u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, edi, rd32(sp0 - 0x3000u), rd32(sp0 - 0x2ffcu));
    edx = sp0 - 0x13ecu;
    ebp = 0x100u;
    loc_2ff0 = rd32(sp0 - 0x2ff0u);
L_100deade: ;
    COW_AT(100deade)
    if (ebp == 0u)
    {
        ecx = 0x3e8u;
        goto L_100debb7;
    }
    COW_AT(100deaef)
    eax = 0x3e8u;
    ecx = 0x3e8u;
    ebx = sp0 - 0x27dcu;
    esi = 0u;
L_100deaf6: ;
    COW_AT(100deaf6)
    if (rd32(ebx) != 0xffffffffu)
    {
        edi = rd32(ebx);
    COW_AT(100deafd)
        if (ecx != 0x3e8u)
        {
    COW_AT(100deb0b)
            if ((int32_t)edi >= (int32_t)rd32(ecx * 0x14u + sp0 - 0x27dcu))
            {
    COW_AT(100deb1d)
                if (eax == 0x3e8u) goto L_100deb30;
    COW_AT(100deb24)
                if ((int32_t)edi >= (int32_t)rd32(eax * 0x14u + sp0 - 0x27dcu)) goto L_100deb32;
L_100deb30: ;
    COW_AT(100deb30)
                eax = esi;
            }
            else
            {
    COW_AT(100deb17)
                eax = ecx;
                ecx = esi;
            }
        }
        else
        {
    COW_AT(100deb05)
            eax = ecx;
            ecx = esi;
        }
    }
L_100deb32: ;
    COW_AT(100deb32)
    if (esi + 1u < loc_2ff0)
    {
        ebx = ebx + 0x14u;
        esi = esi + 1u;
        goto L_100deaf6;
    }
    ebp = loc_2ff0;
    COW_AT(100deb3e)
    if (eax == 0x3e8u) goto L_100debb7;
    COW_AT(100deb45)
    t9 = rd32(ecx * 0x14u + sp0 - 0x27dcu);
    t10 = rd32(eax * 0x14u + sp0 - 0x27dcu);
    wr8(edx + 0xcu, 0u);
    wr32(edx + 0x10u, t10 + t9);
    t11 = ecx * 0x14u + sp0 - 0x27ecu;
    wr32(edx, t11);
    wr8(ecx * 0x14u + sp0 - 0x27dfu, 0u);
    wr32(ecx * 0x14u + sp0 - 0x27dcu, 0xffffffffu);
    t12 = eax * 0x14u + sp0 - 0x27ecu;
    wr32(edx + 4u, t12);
    wr8(eax * 0x14u + sp0 - 0x27dfu, 1u);
    wr32(eax * 0x14u + sp0 - 0x27dcu, 0xffffffffu);
    wr32(ecx * 0x14u + sp0 - 0x27e4u, edx);
    wr32(eax * 0x14u + sp0 - 0x27e4u, edx);
    wr32(sp0 - 0x2ff0u, ebp + 1u);
    edx = edx + 0x14u;
    loc_2ff0 = ebp + 1u;
    ebp = ebp + 1u;
    goto L_100deade;
L_100debb7: ;
    COW_AT(100debb7)
    if (rd32(ecx * 0x14u + sp0 - 0x27ecu) != 0u)
    {
        edx = rd32(ecx * 0x14u + sp0 - 0x27ecu);
        goto L_100debe5;
    }
    eax = ecx * 0x14u;
    COW_AT(100debc8)
    if (rd32(eax + sp0 - 0x27e8u) != 0u)
    {
        edx = rd32(eax + sp0 - 0x27e8u);
        goto L_100debe5;
    }
    edx = rd32(eax + sp0 - 0x27e8u);
    COW_AT(100debd3)
    wr32(ecx * 4u + sp0 - 0x2becu, 1u);
    wr32(ecx * 4u + sp0 - 0x2fecu, 1u);
    eax = 1u;
L_100dec55: ;
    COW_AT(100dec55)
    wr32(sp0 - 0x3004u, COW_IMG(0x10361d04u));
    wr32(sp0 - 0x3008u, COW_IMG(0x10361d10u));
    g->eax = eax;
    g->esp = sp0 - 0x2ff4u;
    t18 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, COW_IMG(0x10361d10u), COW_IMG(0x10361d04u), rd32(sp0 - 0x3000u), rd32(sp0 - 0x2ffcu), rd32(sp0 - 0x2ff8u));
    wr32(sp0 - 0x2ff0u, sp0 - 0x27e0u);
    ebx = rd32(sp0 - 0x3000u);
    ebp = 0u;
    edi = t18;
    loc_2ff0 = sp0 - 0x27e0u;
L_100dec77: ;
    COW_AT(100dec77)
    t19 = rd32(ebp + sp0 - 0x2becu);
    wr32(sp0 - 0x3000u, t19);
    t20 = rd32(ebp + sp0 - 0x2fecu);
    wr32(sp0 - 0x3004u, t20);
    wr32(sp0 - 0x3008u, (uint32_t)(int8_t)rd8(loc_2ff0));
    wr32(sp0 - 0x300cu, COW_IMG(0x10361cf8u));
    wr32(sp0 - 0x3010u, edi);
    g->ebx = ebx;
    g->ecx = loc_2ff0;
    t21 = rd8(loc_2ff0);
    g->esp = sp0 - 0x2ffcu;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, (uint32_t)(int8_t)t21, 1, 5, edi, COW_IMG(0x10361cf8u), (uint32_t)(int8_t)t21, t20, t19);
    t22 = g->ecx;
    t23 = g->edx;
    if (rd32(ebp + sp0 - 0x2becu) == 0u)
    {
        eax = rd32(ebp + sp0 - 0x2becu);
        ecx = t22;
        edx = t23;
        loc_2ff0 = rd32(sp0 - 0x2ff0u);
        goto L_100decd0;
    }
    ecx = t22;
    edx = t23;
    esi = 0u;
    loc_2ff0 = rd32(sp0 - 0x2ff0u);
L_100deca7: ;
    COW_AT(100deca7)
    wr32(sp0 - 0x3000u, esi);
    t24 = ebp + sp0 - 0x2fecu;
    wr32(sp0 - 0x3004u, t24);
    g->eax = t24;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2ffcu;
    t25 = cow_cdecl(g, COW_IMG(0x100df680u), 2, t24, esi);
    t26 = g->ecx;
    t27 = g->edx;
    wr32(sp0 - 0x3008u, (uint32_t)(int8_t)t25);
    wr32(sp0 - 0x300cu, COW_IMG(0x10361cf4u));
    wr32(sp0 - 0x3010u, edi);
    g->ebx = ebx;
    g->ecx = t26;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t27, 1, 5, edi, COW_IMG(0x10361cf4u), (uint32_t)(int8_t)t25, rd32(sp0 - 0x3004u), rd32(sp0 - 0x3000u));
    t28 = g->ecx;
    t29 = g->edx;
    if (esi + 1u < rd32(ebp + sp0 - 0x2becu))
    {
        ecx = t28;
        edx = t29;
        esi = esi + 1u;
        loc_2ff0 = rd32(sp0 - 0x2ff0u);
        goto L_100deca7;
    }
    eax = rd32(ebp + sp0 - 0x2becu);
    ecx = t28;
    edx = t29;
    loc_2ff0 = rd32(sp0 - 0x2ff0u);
L_100decd0: ;
    COW_AT(100decd0)
    wr32(sp0 - 0x3000u, COW_IMG(0x10350e4cu));
    wr32(sp0 - 0x3004u, edi);
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x2ff0u;
    t30 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, edi, COW_IMG(0x10350e4cu), rd32(sp0 - 0x2ffcu), rd32(sp0 - 0x2ff8u), rd32(sp0 - 0x2ff4u));
    t31 = g->ecx;
    t32 = rd32(sp0 - 0x2ff0u) + 0x14u;
    wr32(sp0 - 0x2ff0u, t32);
    if (ebp + 4u < 0x400u)
    {
        ebp = ebp + 4u;
        loc_2ff0 = t32;
        goto L_100dec77;
    }
    eax = t30;
    ecx = t31;
    edx = t32;
    COW_AT(100decf4)
    wr32(sp0 - 0x3000u, edi);
    g->edi = edi;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x2ff4u;
    t33 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, edi, rd32(sp0 - 0x2ffcu), rd32(sp0 - 0x2ff8u));
    t34 = g->ecx;
    t35 = g->edx;
    eax = t33;
    ecx = t34;
    edx = t35;
    ebp = sp0 - 0x27e0u;
    esi = 0u;
L_100ded0d: ;
    COW_AT(100ded0d)
    wr32(sp0 - 0x3000u, arg1);
    wr32(sp0 - 0x3004u, 1u);
    wr32(sp0 - 0x3008u, 1u);
    wr32(sp0 - 0x300cu, ebp);
    g->eax = eax;
    g->esp = sp0 - 0x2ff4u;
    t36 = cow_call_regs(g, COW_IMG(0x103122d6u), g->eax, g->ecx, edx, 1, 6, ebp, 1u, 1u, arg1, rd32(sp0 - 0x2ffcu), rd32(sp0 - 0x2ff8u));
    t37 = g->edx;
    wr32(sp0 - 0x3010u, arg1);
    wr32(sp0 - 0x3014u, 1u);
    wr32(sp0 - 0x3018u, 4u);
    t38 = esi + sp0 - 0x2fecu;
    wr32(sp0 - 0x301cu, t38);
    g->ecx = t38;
    g->esp = sp0 - 0x3004u;
    t39 = cow_call_regs(g, COW_IMG(0x103122d6u), g->eax, g->ecx, t37, 1, 6, t38, 4u, 1u, arg1, rd32(sp0 - 0x300cu), 1u);
    t40 = g->ecx;
    wr32(sp0 - 0x3020u, arg1);
    wr32(sp0 - 0x3024u, 1u);
    wr32(sp0 - 0x3028u, 4u);
    t41 = esi + sp0 - 0x2becu;
    wr32(sp0 - 0x302cu, t41);
    g->ecx = t40;
    g->esp = sp0 - 0x3014u;
    t42 = cow_call_regs(g, COW_IMG(0x103122d6u), g->eax, g->ecx, t41, 1, 6, t41, 4u, 1u, arg1, rd32(sp0 - 0x301cu), 4u);
    t43 = g->ecx;
    t44 = g->edx;
    if (esi + 4u < 0x400u)
    {
        eax = t42;
        ecx = t43;
        edx = t44;
        ebp = ebp + 0x14u;
        esi = esi + 4u;
        goto L_100ded0d;
    }
    eax = t42;
    ecx = t43;
    edx = t44;
    COW_AT(100ded4a)
    wr32(sp0 - 0x3000u, COW_IMG(0x10361d04u));
    wr32(sp0 - 0x3004u, COW_IMG(0x10361d10u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2ff0u;
    t45 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, COW_IMG(0x10361d10u), COW_IMG(0x10361d04u), rd32(sp0 - 0x2ffcu), rd32(sp0 - 0x2ff8u), rd32(sp0 - 0x2ff4u));
    t46 = g->ecx;
    t47 = g->edx;
    wr32(sp0 - 0x3008u, COW_IMG(0x10361cd8u));
    wr32(sp0 - 0x300cu, t45);
    g->ebx = ebx;
    g->ecx = t46;
    g->esp = sp0 - 0x2ff8u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t47, 1, 5, t45, COW_IMG(0x10361cd8u), COW_IMG(0x10361d10u), COW_IMG(0x10361d04u), rd32(sp0 - 0x2ffcu));
    t48 = g->ecx;
    t49 = g->edx;
    ecx = t48;
    edx = t49;
    ebp = sp0 - 0x27e0u;
    esi = t45;
    edi = 0u;
L_100ded72: ;
    COW_AT(100ded72)
    wr32(sp0 - 0x3000u, (uint32_t)(int8_t)rd8(ebp));
    wr32(sp0 - 0x3004u, COW_IMG(0x10361cf4u));
    wr32(sp0 - 0x3008u, esi);
    g->ebx = ebx;
    g->eax = (uint32_t)(int8_t)rd8(ebp);
    t50 = rd8(ebp);
    g->esp = sp0 - 0x2ff4u;
    t51 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, esi, COW_IMG(0x10361cf4u), (uint32_t)(int8_t)t50, rd32(sp0 - 0x2ffcu), rd32(sp0 - 0x2ff8u));
    t52 = g->edx;
    t53 = (uint32_t)(int8_t)rd8(edi * 4u + sp0 - 0x2fecu);
    wr32(sp0 - 0x300cu, t53);
    wr32(sp0 - 0x3010u, COW_IMG(0x10361cf4u));
    wr32(sp0 - 0x3014u, esi);
    g->ebx = ebx;
    g->ecx = t53;
    g->esp = sp0 - 0x3000u;
    t54 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t52, 1, 5, esi, COW_IMG(0x10361cf4u), t53, rd32(sp0 - 0x3008u), COW_IMG(0x10361cf4u));
    t55 = g->ecx;
    t56 = (uint32_t)(int8_t)rd8(edi * 4u + sp0 - 0x2febu);
    wr32(sp0 - 0x3018u, t56);
    wr32(sp0 - 0x301cu, COW_IMG(0x10361cf4u));
    wr32(sp0 - 0x3020u, esi);
    g->ebx = ebx;
    g->ecx = t55;
    g->esp = sp0 - 0x300cu;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t56, 1, 5, esi, COW_IMG(0x10361cf4u), t56, rd32(sp0 - 0x3014u), COW_IMG(0x10361cf4u));
    t57 = g->ecx;
    t58 = g->edx;
    t59 = (uint32_t)(int8_t)rd8(edi * 4u + sp0 - 0x2feau);
    wr32(sp0 - 0x3024u, t59);
    wr32(sp0 - 0x3028u, COW_IMG(0x10361cf4u));
    wr32(sp0 - 0x302cu, esi);
    g->ebx = ebx;
    g->eax = t59;
    g->esp = sp0 - 0x3018u;
    t60 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t58, 1, 5, esi, COW_IMG(0x10361cf4u), t59, rd32(sp0 - 0x3020u), COW_IMG(0x10361cf4u));
    t61 = g->edx;
    t62 = (uint32_t)(int8_t)rd8(edi * 4u + sp0 - 0x2fe9u);
    wr32(sp0 - 0x3030u, t62);
    wr32(sp0 - 0x3034u, COW_IMG(0x10361cf4u));
    wr32(sp0 - 0x3038u, esi);
    g->ebx = ebx;
    g->ecx = t62;
    g->esp = sp0 - 0x3024u;
    t63 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t61, 1, 5, esi, COW_IMG(0x10361cf4u), t62, rd32(sp0 - 0x302cu), COW_IMG(0x10361cf4u));
    t64 = g->ecx;
    t65 = (uint32_t)(int8_t)rd8(edi * 4u + sp0 - 0x2becu);
    wr32(sp0 - 0x303cu, t65);
    wr32(sp0 - 0x3040u, COW_IMG(0x10361cf4u));
    wr32(sp0 - 0x3044u, esi);
    g->ebx = ebx;
    g->ecx = t64;
    g->esp = sp0 - 0x3030u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t65, 1, 5, esi, COW_IMG(0x10361cf4u), t65, rd32(sp0 - 0x3038u), COW_IMG(0x10361cf4u));
    t66 = g->ecx;
    t67 = g->edx;
    t68 = (uint32_t)(int8_t)rd8(edi * 4u + sp0 - 0x2bebu);
    wr32(sp0 - 0x3000u, t68);
    wr32(sp0 - 0x3004u, COW_IMG(0x10361cf4u));
    wr32(sp0 - 0x3008u, esi);
    g->ebx = ebx;
    g->eax = t68;
    g->esp = sp0 - 0x2ff4u;
    t69 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t67, 1, 5, esi, COW_IMG(0x10361cf4u), t68, rd32(sp0 - 0x2ffcu), rd32(sp0 - 0x2ff8u));
    t70 = g->edx;
    t71 = (uint32_t)(int8_t)rd8(edi * 4u + sp0 - 0x2beau);
    wr32(sp0 - 0x300cu, t71);
    wr32(sp0 - 0x3010u, COW_IMG(0x10361cf4u));
    wr32(sp0 - 0x3014u, esi);
    g->ebx = ebx;
    g->ecx = t71;
    g->esp = sp0 - 0x3000u;
    t72 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t70, 1, 5, esi, COW_IMG(0x10361cf4u), t71, rd32(sp0 - 0x3008u), COW_IMG(0x10361cf4u));
    t73 = g->ecx;
    t74 = (uint32_t)(int8_t)rd8(edi * 4u + sp0 - 0x2be9u);
    wr32(sp0 - 0x3018u, t74);
    wr32(sp0 - 0x301cu, COW_IMG(0x10361cd0u));
    wr32(sp0 - 0x3020u, esi);
    g->ebx = ebx;
    g->ecx = t73;
    g->esp = sp0 - 0x300cu;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t74, 1, 5, esi, COW_IMG(0x10361cd0u), t74, rd32(sp0 - 0x3014u), COW_IMG(0x10361cf4u));
    t75 = g->ecx;
    t76 = g->edx;
    if (edi + 1u < 0xffu)
    {
        ecx = t75;
        edx = t76;
        ebp = ebp + 0x14u;
        edi = edi + 1u;
        goto L_100ded72;
    }
    edx = t76;
    edi = edi + 1u;
    COW_AT(100dee2c)
    t77 = (uint32_t)(int8_t)rd8(edi * 0x14u + sp0 - 0x27e0u);
    wr32(sp0 - 0x3000u, t77);
    wr32(sp0 - 0x3004u, COW_IMG(0x10361cf4u));
    wr32(sp0 - 0x3008u, esi);
    g->ebx = ebx;
    g->eax = edi * 5u;
    g->ecx = t77;
    g->esp = sp0 - 0x2ff4u;
    t78 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, esi, COW_IMG(0x10361cf4u), t77, rd32(sp0 - 0x2ffcu), rd32(sp0 - 0x2ff8u));
    t79 = g->ecx;
    t80 = (uint32_t)(int8_t)rd8(edi * 4u + sp0 - 0x2fecu);
    wr32(sp0 - 0x300cu, t80);
    wr32(sp0 - 0x3010u, COW_IMG(0x10361cf4u));
    wr32(sp0 - 0x3014u, esi);
    g->ebx = ebx;
    g->ecx = t79;
    g->esp = sp0 - 0x3000u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t80, 1, 5, esi, COW_IMG(0x10361cf4u), t80, rd32(sp0 - 0x3008u), COW_IMG(0x10361cf4u));
    t81 = g->ecx;
    t82 = g->edx;
    t83 = (uint32_t)(int8_t)rd8(edi * 4u + sp0 - 0x2febu);
    wr32(sp0 - 0x3018u, t83);
    wr32(sp0 - 0x301cu, COW_IMG(0x10361cf4u));
    wr32(sp0 - 0x3020u, esi);
    g->ebx = ebx;
    g->eax = t83;
    g->esp = sp0 - 0x300cu;
    t84 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t82, 1, 5, esi, COW_IMG(0x10361cf4u), t83, rd32(sp0 - 0x3014u), COW_IMG(0x10361cf4u));
    t85 = g->edx;
    t86 = (uint32_t)(int8_t)rd8(edi * 4u + sp0 - 0x2feau);
    wr32(sp0 - 0x3024u, t86);
    wr32(sp0 - 0x3028u, COW_IMG(0x10361cf4u));
    wr32(sp0 - 0x302cu, esi);
    g->ebx = ebx;
    g->ecx = t86;
    g->esp = sp0 - 0x3018u;
    t87 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t85, 1, 5, esi, COW_IMG(0x10361cf4u), t86, rd32(sp0 - 0x3020u), COW_IMG(0x10361cf4u));
    t88 = g->ecx;
    t89 = (uint32_t)(int8_t)rd8(edi * 4u + sp0 - 0x2fe9u);
    wr32(sp0 - 0x3030u, t89);
    wr32(sp0 - 0x3034u, COW_IMG(0x10361cf4u));
    wr32(sp0 - 0x3038u, esi);
    g->ebx = ebx;
    g->ecx = t88;
    g->esp = sp0 - 0x3024u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t89, 1, 5, esi, COW_IMG(0x10361cf4u), t89, rd32(sp0 - 0x302cu), COW_IMG(0x10361cf4u));
    t90 = g->ecx;
    t91 = g->edx;
    t92 = (uint32_t)(int8_t)rd8(edi * 4u + sp0 - 0x2becu);
    wr32(sp0 - 0x303cu, t92);
    wr32(sp0 - 0x3040u, COW_IMG(0x10361cf4u));
    wr32(sp0 - 0x3044u, esi);
    g->ebx = ebx;
    g->eax = t92;
    g->esp = sp0 - 0x3030u;
    t93 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t91, 1, 5, esi, COW_IMG(0x10361cf4u), t92, rd32(sp0 - 0x3038u), COW_IMG(0x10361cf4u));
    t94 = g->edx;
    t95 = (uint32_t)(int8_t)rd8(edi * 4u + sp0 - 0x2bebu);
    wr32(sp0 - 0x3000u, t95);
    wr32(sp0 - 0x3004u, COW_IMG(0x10361cf4u));
    wr32(sp0 - 0x3008u, esi);
    g->ebx = ebx;
    g->ecx = t95;
    g->esp = sp0 - 0x2ff4u;
    t96 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t94, 1, 5, esi, COW_IMG(0x10361cf4u), t95, rd32(sp0 - 0x2ffcu), rd32(sp0 - 0x2ff8u));
    t97 = g->ecx;
    t98 = (uint32_t)(int8_t)rd8(edi * 4u + sp0 - 0x2beau);
    wr32(sp0 - 0x300cu, t98);
    wr32(sp0 - 0x3010u, COW_IMG(0x10361cf4u));
    wr32(sp0 - 0x3014u, esi);
    g->ebx = ebx;
    g->ecx = t97;
    g->esp = sp0 - 0x3000u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t98, 1, 5, esi, COW_IMG(0x10361cf4u), t98, rd32(sp0 - 0x3008u), COW_IMG(0x10361cf4u));
    t99 = g->ecx;
    t100 = g->edx;
    t101 = (uint32_t)(int8_t)rd8(edi * 4u + sp0 - 0x2be9u);
    wr32(sp0 - 0x3018u, t101);
    wr32(sp0 - 0x301cu, COW_IMG(0x10361cc8u));
    wr32(sp0 - 0x3020u, esi);
    g->ebx = ebx;
    g->eax = t101;
    g->ecx = t99;
    g->esp = sp0 - 0x300cu;
    t102 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t100, 1, 5, esi, COW_IMG(0x10361cc8u), t101, rd32(sp0 - 0x3014u), COW_IMG(0x10361cf4u));
    t103 = g->ecx;
    t104 = g->edx;
    wr32(sp0 - 0x3024u, esi);
    g->edi = edi;
    g->esp = sp0 - 0x3018u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t104, 1, 3, esi, rd32(sp0 - 0x3020u), COW_IMG(0x10361cc8u));
    t105 = g->edx;
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x2ff8u);
    g->edi = rd32(sp0 - 0x2ffcu);
    g->ebp = rd32(sp0 - 0x2ff4u);
    g->edx = t105;
    return 1u;
L_100debe5: ;
    COW_AT(100debe5)
    ebx = sp0 - 0x27e4u;
    edi = 0u;
L_100debee: ;
    COW_AT(100debee)
    if (rd32(ebx) == 0u)
    {
        esi = 0x20u;
    }
    else
    {
        eax = ebx - 8u;
        ecx = rd32(ebx);
    COW_AT(100debfc)
        ebp = ebx;
        esi = 0x20u;
L_100debfe: ;
    COW_AT(100debfe)
        if (esi == 0u)
        {
    COW_AT(100dec02)
            wr32(edi + sp0 - 0x2becu, 0x2710u);
        }
    COW_AT(100dec0d)
        t13 = (edx & 0xffffff00u) | rd8(eax + 0xdu);
        wr32(sp0 - 0x3004u, t13);
        wr32(sp0 - 0x3008u, esi - 1u);
        t14 = edi + sp0 - 0x2fecu;
        wr32(sp0 - 0x300cu, t14);
        g->ebx = ebx;
        g->esp = sp0 - 0x2ff0u;
        cow_call_regs(g, COW_IMG(0x100df6a0u), g->eax, ecx, t13, 1, 7, t14, esi - 1u, t13, rd32(sp0 - 0x3000u), rd32(sp0 - 0x2ffcu), rd32(sp0 - 0x2ff8u), rd32(sp0 - 0x2ff4u));
        t15 = g->edx;
        if (rd32(rd32(ebp) + 8u) != 0u)
        {
            eax = rd32(ebp);
            ecx = rd32(rd32(ebp) + 8u);
            edx = t15;
            ebp = rd32(ebp) + 8u;
            esi = esi - 1u;
            goto L_100debfe;
        }
        edx = t15;
        esi = esi - 1u;
    }
    COW_AT(100dec2d)
    t16 = rd32(edi + sp0 - 0x2fecu);
    wr32(edi + sp0 - 0x2becu, 0x20u - esi);
    t17 = t16 >> (esi & 0x1fu);
    wr32(edi + sp0 - 0x2fecu, t17);
    if (edi + 4u < 0x400u)
    {
        ebx = ebx + 0x14u;
        edi = edi + 4u;
        goto L_100debee;
    }
    eax = 0x20u - esi;
    ecx = esi;
    goto L_100dec55;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100dea10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100dea4du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0x2ffcu);
        in_esi = rd32(sp0 - 0x2ff8u);
        in_ebp = rd32(sp0 - 0x2ff4u);
        g->esp = sp0 - 0x2ffcu;
        g->ebp = 0x100u;
        g->esi = arg2;
        g->edi = 0u;
        wr32(sp0 - 0x2ff0u, 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100dea70u:
    {
        uint32_t eax;
        uint32_t ecx;
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
        esi = g->esi;
        in_edi = rd32(sp0 - 0x2ffcu);
        in_esi = rd32(sp0 - 0x2ff8u);
        in_ebp = rd32(sp0 - 0x2ff4u);
        g->esp = sp0 - 0x2ffcu;
        g->ebp = 0x100u;
        g->edi = 0u;
        wr32(sp0 - 0x2ff0u, 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100dea7cu:
    {
        uint32_t eax;
        uint32_t ecx;
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
        esi = g->esi;
        in_edi = rd32(sp0 - 0x2ffcu);
        in_esi = rd32(sp0 - 0x2ff8u);
        in_ebp = rd32(sp0 - 0x2ff4u);
        g->esp = sp0 - 0x2ffcu;
        g->ebp = 0x100u;
        g->edi = 0u;
        wr32(sp0 - 0x2ff0u, 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100dea91u:
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
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2ffcu);
        in_esi = rd32(sp0 - 0x2ff8u);
        in_ebp = rd32(sp0 - 0x2ff4u);
        g->esp = sp0 - 0x2ffcu;
        g->ebp = 0x100u;
        wr32(sp0 - 0x2ff0u, 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100deab2u:
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
        g->esp = sp0 - 0x3000u;
        g->ebp = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x100deaceu:
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
        g->esp = sp0 - 0x3000u;
        g->ebp = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x100deadeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2ff0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2ff0 = rd32(sp0 - 0x2ff0u);
        g->esp = sp0 - 0x3000u;
        (void)sp0;
        return 1;
    }
    case 0x100deaefu:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_2ff0;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_2ff0 = rd32(sp0 - 0x2ff0u);
        g->esp = sp0 - 0x3000u;
        g->eax = 0x3e8u;
        g->ecx = 0x3e8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100deaf6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2ff0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2ff0 = rd32(sp0 - 0x2ff0u);
        g->esp = sp0 - 0x3000u;
        (void)sp0;
        return 1;
    }
    case 0x100deafdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2ff0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2ff0 = rd32(sp0 - 0x2ff0u);
        g->esp = sp0 - 0x3000u;
        (void)sp0;
        return 1;
    }
    case 0x100deb05u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2ff0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2ff0 = rd32(sp0 - 0x2ff0u);
        g->esp = sp0 - 0x3000u;
        (void)sp0;
        return 1;
    }
    case 0x100deb0bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2ff0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2ff0 = rd32(sp0 - 0x2ff0u);
        g->esp = sp0 - 0x3000u;
        (void)sp0;
        return 1;
    }
    case 0x100deb17u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2ff0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2ff0 = rd32(sp0 - 0x2ff0u);
        g->esp = sp0 - 0x3000u;
        (void)sp0;
        return 1;
    }
    case 0x100deb1du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2ff0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2ff0 = rd32(sp0 - 0x2ff0u);
        g->esp = sp0 - 0x3000u;
        (void)sp0;
        return 1;
    }
    case 0x100deb24u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2ff0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2ff0 = rd32(sp0 - 0x2ff0u);
        g->esp = sp0 - 0x3000u;
        (void)sp0;
        return 1;
    }
    case 0x100deb30u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2ff0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2ff0 = rd32(sp0 - 0x2ff0u);
        g->esp = sp0 - 0x3000u;
        (void)sp0;
        return 1;
    }
    case 0x100deb32u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2ff0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2ff0 = rd32(sp0 - 0x2ff0u);
        g->esp = sp0 - 0x3000u;
        (void)sp0;
        return 1;
    }
    case 0x100deb3eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2ff0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2ff0 = rd32(sp0 - 0x2ff0u);
        g->esp = sp0 - 0x3000u;
        (void)sp0;
        return 1;
    }
    case 0x100deb45u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2ff0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2ff0 = rd32(sp0 - 0x2ff0u);
        g->esp = sp0 - 0x3000u;
        (void)sp0;
        return 1;
    }
    case 0x100debb7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2ff0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2ff0 = rd32(sp0 - 0x2ff0u);
        g->esp = sp0 - 0x3000u;
        (void)sp0;
        return 1;
    }
    case 0x100debc8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2ff0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2ff0 = rd32(sp0 - 0x2ff0u);
        g->esp = sp0 - 0x3000u;
        (void)sp0;
        return 1;
    }
    case 0x100debd3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2ff0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2ff0 = rd32(sp0 - 0x2ff0u);
        g->esp = sp0 - 0x3000u;
        (void)sp0;
        return 1;
    }
    case 0x100debe5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2ff0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2ff0 = rd32(sp0 - 0x2ff0u);
        g->esp = sp0 - 0x3000u;
        (void)sp0;
        return 1;
    }
    case 0x100debeeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2ff0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2ff0 = rd32(sp0 - 0x2ff0u);
        g->esp = sp0 - 0x3000u;
        (void)sp0;
        return 1;
    }
    case 0x100debfcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_2ff0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_2ff0 = rd32(sp0 - 0x2ff0u);
        g->esp = sp0 - 0x3000u;
        g->esi = 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100debfeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2ff0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2ff0 = rd32(sp0 - 0x2ff0u);
        g->esp = sp0 - 0x3000u;
        (void)sp0;
        return 1;
    }
    case 0x100dec02u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2ff0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2ff0 = rd32(sp0 - 0x2ff0u);
        g->esp = sp0 - 0x3000u;
        (void)sp0;
        return 1;
    }
    case 0x100dec0du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2ff0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2ff0 = rd32(sp0 - 0x2ff0u);
        g->esp = sp0 - 0x3000u;
        (void)sp0;
        return 1;
    }
    case 0x100dec2du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2ff0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2ff0 = rd32(sp0 - 0x2ff0u);
        g->esp = sp0 - 0x3000u;
        (void)sp0;
        return 1;
    }
    case 0x100dec55u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2ff0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2ff0 = rd32(sp0 - 0x2ff0u);
        g->esp = sp0 - 0x3000u;
        (void)sp0;
        return 1;
    }
    case 0x100dec77u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2ff0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2ff0 = rd32(sp0 - 0x2ff0u);
        g->esp = sp0 - 0x2ffcu;
        (void)sp0;
        return 1;
    }
    case 0x100deca7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2ff0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2ff0 = rd32(sp0 - 0x2ff0u);
        g->esp = sp0 - 0x2ffcu;
        (void)sp0;
        return 1;
    }
    case 0x100decd0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2ff0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2ff0 = rd32(sp0 - 0x2ff0u);
        g->esp = sp0 - 0x2ffcu;
        (void)sp0;
        return 1;
    }
    case 0x100decf4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2ff0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2ff0 = rd32(sp0 - 0x2ff0u);
        g->esp = sp0 - 0x2ffcu;
        (void)sp0;
        return 1;
    }
    case 0x100ded0du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2ff0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_2ff0 = rd32(sp0 - 0x2ff0u);
        g->esp = sp0 - 0x2ffcu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ded4au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2ff0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2ff0 = rd32(sp0 - 0x2ff0u);
        g->esp = sp0 - 0x2ffcu;
        (void)sp0;
        return 1;
    }
    case 0x100ded72u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2ff0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2ff0 = rd32(sp0 - 0x2ff0u);
        g->esp = sp0 - 0x2ffcu;
        (void)sp0;
        return 1;
    }
    case 0x100dee2cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2ff0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2ff0 = rd32(sp0 - 0x2ff0u);
        g->esp = sp0 - 0x2ffcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100dea10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100dea10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
