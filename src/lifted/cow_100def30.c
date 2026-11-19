/* f_0x100def30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100def30(Guest* g)
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
    uint32_t t106;
    uint32_t t107;
    uint32_t t108;
    uint32_t t109;
    uint32_t t11;
    uint32_t t110;
    uint32_t t111;
    uint32_t t112;
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
    cow_frame(g, sp0, 12364u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100def6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = rd32(sp0 - 0x3000u); in_esi = rd32(sp0 - 0x2ffcu); in_ebp = rd32(sp0 - 0x2ff8u); in_ebx = rd32(sp0 - 0x2ff4u); g->ebp = rd32(sp0 - 0x2ff8u); g->ebx = rd32(sp0 - 0x2ff4u); g->edi = rd32(sp0 - 0x3000u); g->esi = rd32(sp0 - 0x2ffcu); goto E_100def6e;
    case 0x100def91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x3000u); in_esi = rd32(sp0 - 0x2ffcu); in_ebp = rd32(sp0 - 0x2ff8u); in_ebx = rd32(sp0 - 0x2ff4u); g->ebp = rd32(sp0 - 0x2ff8u); g->ebx = rd32(sp0 - 0x2ff4u); g->edi = rd32(sp0 - 0x3000u); g->esi = rd32(sp0 - 0x2ffcu); goto E_100def91;
    case 0x100def9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x3000u); in_esi = rd32(sp0 - 0x2ffcu); in_ebp = rd32(sp0 - 0x2ff8u); in_ebx = rd32(sp0 - 0x2ff4u); g->ebp = rd32(sp0 - 0x2ff8u); g->ebx = rd32(sp0 - 0x2ff4u); g->edi = rd32(sp0 - 0x3000u); g->esi = rd32(sp0 - 0x2ffcu); goto E_100def9d;
    case 0x100defb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x3000u); in_esi = rd32(sp0 - 0x2ffcu); in_ebp = rd32(sp0 - 0x2ff8u); in_ebx = rd32(sp0 - 0x2ff4u); g->ebp = rd32(sp0 - 0x2ff8u); g->ebx = rd32(sp0 - 0x2ff4u); g->edi = rd32(sp0 - 0x3000u); g->esi = rd32(sp0 - 0x2ffcu); goto E_100defb2;
    case 0x100defd2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100defd2;
    case 0x100defeeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100defee;
    case 0x100deffeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100deffe;
    case 0x100df00fu: edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100df00f;
    case 0x100df016u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100df016;
    case 0x100df01du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100df01d;
    case 0x100df025u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100df025;
    case 0x100df02bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100df02b;
    case 0x100df037u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100df037;
    case 0x100df03du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100df03d;
    case 0x100df044u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100df044;
    case 0x100df050u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100df050;
    case 0x100df052u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100df052;
    case 0x100df05eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100df05e;
    case 0x100df065u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100df065;
    case 0x100df0d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100df0d7;
    case 0x100df0e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100df0e8;
    case 0x100df0f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100df0f3;
    case 0x100df105u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100df105;
    case 0x100df10eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100df10e;
    case 0x100df11cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100df11c;
    case 0x100df11eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100df11e;
    case 0x100df122u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100df122;
    case 0x100df12du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100df12d;
    case 0x100df14du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100df14d;
    case 0x100df175u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100df175;
    case 0x100df196u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100df196;
    case 0x100df1c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100df1c6;
    case 0x100df1efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100df1ef;
    case 0x100df213u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100df213;
    case 0x100df236u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100df236;
    case 0x100df273u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100df273;
    case 0x100df2a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100df2a1;
    case 0x100df35au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2ff0 = rd32(sp0 - 0x2ff0u); goto E_100df35a;
    default: break;
    }
#endif

    COW_AT(100def30)
    wr32(sp0 - 0x2ff4u, in_ebx);
    wr32(sp0 - 0x2ff8u, in_ebp);
    wr32(sp0 - 0x2ffcu, in_esi);
    wr32(sp0 - 0x3000u, in_edi);
    wr32(sp0 - 0x2ff0u, 0x100u);
    edi = sp0 - 0x2fecu;
    eax = 0u;
    ecx = 0x100u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    edi = sp0 - 0x2becu;
    ecx = 0x100u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    eax = sp0 - 0x27dcu;
    ecx = 0u;
    edx = in_edx;
L_100def6e: ;
    COW_AT(100def6e)
    wr32(eax - 8u, 0u);
    wr32(eax - 0x10u, 0u);
    wr8(eax - 4u, (uint8_t)((uint8_t)ecx + 0x80u));
    t1 = rd32(arg1 + ecx * 4u);
    wr32(eax - 0xcu, 0u);
    wr32(eax, t1 + 1u);
    if (ecx + 1u < 0x100u)
    {
        eax = eax + 0x14u;
        ecx = ecx + 1u;
        edx = t1 + 1u;
        goto L_100def6e;
    }
    edx = t1 + 1u;
    COW_AT(100def91)
    eax = sp0 - 0x13e4u;
    ecx = 0xffu;
L_100def9d: ;
    COW_AT(100def9d)
    wr32(eax + 8u, 0xffffffffu);
    wr32(eax, 0u);
    wr32(eax - 8u, 0u);
    wr32(eax - 4u, 0u);
    if (ecx != 1u)
    {
        eax = eax + 0x14u;
        ecx = ecx - 1u;
        goto L_100def9d;
    }
    eax = eax + 0x14u;
    ecx = ecx - 1u;
    COW_AT(100defb2)
    wr32(sp0 - 0x3004u, COW_IMG(0x10361d24u));
    wr32(sp0 - 0x3008u, COW_IMG(0x10361d10u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2ff4u;
    t2 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, COW_IMG(0x10361d10u), COW_IMG(0x10361d24u), in_edi, in_esi, in_ebp);
    t3 = g->edx;
    edx = t3;
    ebx = 0x100u;
    esi = sp0 - 0x27e0u;
    edi = t2;
L_100defd2: ;
    COW_AT(100defd2)
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
        goto L_100defd2;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    ebx = ebx - 1u;
    COW_AT(100defee)
    wr32(sp0 - 0x3004u, edi);
    g->edi = edi;
    g->esp = sp0 - 0x2ff8u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, edi, rd32(sp0 - 0x3000u), rd32(sp0 - 0x2ffcu));
    edx = sp0 - 0x13ecu;
    ebp = 0x100u;
    loc_2ff0 = rd32(sp0 - 0x2ff0u);
L_100deffe: ;
    COW_AT(100deffe)
    if (ebp == 0u)
    {
        ecx = 0x3e8u;
        goto L_100df0d7;
    }
    COW_AT(100df00f)
    eax = 0x3e8u;
    ecx = 0x3e8u;
    ebx = sp0 - 0x27dcu;
    esi = 0u;
L_100df016: ;
    COW_AT(100df016)
    if (rd32(ebx) != 0xffffffffu)
    {
        edi = rd32(ebx);
    COW_AT(100df01d)
        if (ecx != 0x3e8u)
        {
    COW_AT(100df02b)
            if ((int32_t)edi >= (int32_t)rd32(ecx * 0x14u + sp0 - 0x27dcu))
            {
    COW_AT(100df03d)
                if (eax == 0x3e8u) goto L_100df050;
    COW_AT(100df044)
                if ((int32_t)edi >= (int32_t)rd32(eax * 0x14u + sp0 - 0x27dcu)) goto L_100df052;
L_100df050: ;
    COW_AT(100df050)
                eax = esi;
            }
            else
            {
    COW_AT(100df037)
                eax = ecx;
                ecx = esi;
            }
        }
        else
        {
    COW_AT(100df025)
            eax = ecx;
            ecx = esi;
        }
    }
L_100df052: ;
    COW_AT(100df052)
    if (esi + 1u < loc_2ff0)
    {
        ebx = ebx + 0x14u;
        esi = esi + 1u;
        goto L_100df016;
    }
    ebx = ebx + 0x14u;
    ebp = loc_2ff0;
    COW_AT(100df05e)
    if (eax == 0x3e8u) goto L_100df0d7;
    COW_AT(100df065)
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
    goto L_100deffe;
L_100df0d7: ;
    COW_AT(100df0d7)
    if (rd32(ecx * 0x14u + sp0 - 0x27ecu) != 0u)
    {
        edx = rd32(ecx * 0x14u + sp0 - 0x27ecu);
        goto L_100df105;
    }
    eax = ecx * 0x14u;
    COW_AT(100df0e8)
    if (rd32(eax + sp0 - 0x27e8u) != 0u)
    {
        edx = rd32(eax + sp0 - 0x27e8u);
        goto L_100df105;
    }
    edx = rd32(eax + sp0 - 0x27e8u);
    COW_AT(100df0f3)
    wr32(ecx * 4u + sp0 - 0x2becu, 1u);
    wr32(ecx * 4u + sp0 - 0x2fecu, 1u);
    eax = 1u;
L_100df175: ;
    COW_AT(100df175)
    wr32(sp0 - 0x3004u, COW_IMG(0x10361d04u));
    wr32(sp0 - 0x3008u, COW_IMG(0x10361d10u));
    g->eax = eax;
    g->esp = sp0 - 0x2ff4u;
    t18 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, COW_IMG(0x10361d10u), COW_IMG(0x10361d04u), rd32(sp0 - 0x3000u), rd32(sp0 - 0x2ffcu), rd32(sp0 - 0x2ff8u));
    wr32(sp0 - 0x2ff0u, sp0 - 0x27e0u);
    ebp = 0u;
    edi = t18;
    loc_2ff0 = sp0 - 0x27e0u;
L_100df196: ;
    COW_AT(100df196)
    t19 = rd32(ebp + sp0 - 0x2becu);
    wr32(sp0 - 0x3004u, t19);
    t20 = rd32(ebp + sp0 - 0x2fecu);
    wr32(sp0 - 0x3008u, t20);
    wr32(sp0 - 0x300cu, (uint32_t)(int8_t)rd8(loc_2ff0));
    wr32(sp0 - 0x3010u, COW_IMG(0x10361cf8u));
    wr32(sp0 - 0x3014u, edi);
    g->ebx = ebx;
    g->ecx = loc_2ff0;
    t21 = rd8(loc_2ff0);
    g->esp = sp0 - 0x3000u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, (uint32_t)(int8_t)t21, 1, 5, edi, COW_IMG(0x10361cf8u), (uint32_t)(int8_t)t21, t20, t19);
    t22 = g->ecx;
    t23 = g->edx;
    if (rd32(ebp + sp0 - 0x2becu) == 0u)
    {
        eax = rd32(ebp + sp0 - 0x2becu);
        ecx = t22;
        edx = t23;
        loc_2ff0 = rd32(sp0 - 0x2ff0u);
        goto L_100df1ef;
    }
    ecx = t22;
    edx = t23;
    esi = 0u;
    loc_2ff0 = rd32(sp0 - 0x2ff0u);
L_100df1c6: ;
    COW_AT(100df1c6)
    wr32(sp0 - 0x3004u, esi);
    t24 = ebp + sp0 - 0x2fecu;
    wr32(sp0 - 0x3008u, t24);
    g->eax = t24;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x3000u;
    t25 = cow_cdecl(g, COW_IMG(0x100df680u), 2, t24, esi);
    t26 = g->ecx;
    t27 = g->edx;
    wr32(sp0 - 0x300cu, (uint32_t)(int8_t)t25);
    wr32(sp0 - 0x3010u, COW_IMG(0x10361cf4u));
    wr32(sp0 - 0x3014u, edi);
    g->ebx = ebx;
    g->ecx = t26;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t27, 1, 5, edi, COW_IMG(0x10361cf4u), (uint32_t)(int8_t)t25, rd32(sp0 - 0x3008u), rd32(sp0 - 0x3004u));
    t28 = g->ecx;
    t29 = g->edx;
    if (esi + 1u < rd32(ebp + sp0 - 0x2becu))
    {
        ecx = t28;
        edx = t29;
        esi = esi + 1u;
        loc_2ff0 = rd32(sp0 - 0x2ff0u);
        goto L_100df1c6;
    }
    eax = rd32(ebp + sp0 - 0x2becu);
    ecx = t28;
    edx = t29;
    loc_2ff0 = rd32(sp0 - 0x2ff0u);
L_100df1ef: ;
    COW_AT(100df1ef)
    wr32(sp0 - 0x3004u, COW_IMG(0x10350e4cu));
    wr32(sp0 - 0x3008u, edi);
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x2ff4u;
    t30 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, edi, COW_IMG(0x10350e4cu), rd32(sp0 - 0x3000u), rd32(sp0 - 0x2ffcu), rd32(sp0 - 0x2ff8u));
    t31 = g->ecx;
    t32 = rd32(sp0 - 0x2ff0u) + 0x14u;
    wr32(sp0 - 0x2ff0u, t32);
    if (ebp + 4u < 0x400u)
    {
        ebp = ebp + 4u;
        loc_2ff0 = t32;
        goto L_100df196;
    }
    eax = t30;
    ecx = t31;
    edx = t32;
    COW_AT(100df213)
    wr32(sp0 - 0x3004u, edi);
    g->edi = edi;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x2ff8u;
    t33 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, edi, rd32(sp0 - 0x3000u), rd32(sp0 - 0x2ffcu));
    t34 = g->ecx;
    t35 = g->edx;
    wr32(sp0 - 0x3008u, COW_IMG(0x1034f7fcu));
    wr32(sp0 - 0x300cu, COW_IMG(0x10361d28u));
    g->ecx = t34;
    g->edx = t35;
    t36 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, COW_IMG(0x10361d28u), COW_IMG(0x1034f7fcu), rd32(sp0 - 0x3004u), rd32(sp0 - 0x3000u), rd32(sp0 - 0x2ffcu));
    t37 = g->ecx;
    t38 = g->edx;
    eax = t36;
    ecx = t37;
    edx = t38;
    ebp = sp0 - 0x27e0u;
    esi = 0u;
    edi = t36;
L_100df236: ;
    COW_AT(100df236)
    wr32(sp0 - 0x3004u, edi);
    wr32(sp0 - 0x3008u, 1u);
    wr32(sp0 - 0x300cu, 1u);
    wr32(sp0 - 0x3010u, ebp);
    g->eax = eax;
    g->esp = sp0 - 0x2ff8u;
    t39 = cow_call_regs(g, COW_IMG(0x103122d6u), g->eax, g->ecx, edx, 1, 6, ebp, 1u, 1u, edi, rd32(sp0 - 0x3000u), rd32(sp0 - 0x2ffcu));
    t40 = g->edx;
    wr32(sp0 - 0x3014u, edi);
    wr32(sp0 - 0x3018u, 1u);
    wr32(sp0 - 0x301cu, 4u);
    t41 = esi + sp0 - 0x2fecu;
    wr32(sp0 - 0x3020u, t41);
    g->ecx = t41;
    g->esp = sp0 - 0x3008u;
    t42 = cow_call_regs(g, COW_IMG(0x103122d6u), g->eax, g->ecx, t40, 1, 6, t41, 4u, 1u, edi, rd32(sp0 - 0x3010u), 1u);
    t43 = g->ecx;
    wr32(sp0 - 0x3024u, edi);
    wr32(sp0 - 0x3028u, 1u);
    wr32(sp0 - 0x302cu, 4u);
    t44 = esi + sp0 - 0x2becu;
    wr32(sp0 - 0x3030u, t44);
    g->ecx = t43;
    g->esp = sp0 - 0x3018u;
    t45 = cow_call_regs(g, COW_IMG(0x103122d6u), g->eax, g->ecx, t44, 1, 6, t44, 4u, 1u, edi, rd32(sp0 - 0x3020u), 4u);
    t46 = g->ecx;
    t47 = g->edx;
    if (esi + 4u < 0x400u)
    {
        eax = t45;
        ecx = t46;
        edx = t47;
        ebp = ebp + 0x14u;
        esi = esi + 4u;
        goto L_100df236;
    }
    eax = t45;
    ecx = t46;
    edx = t47;
    COW_AT(100df273)
    wr32(sp0 - 0x3004u, edi);
    g->edi = edi;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x2ff8u;
    t48 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, edi, rd32(sp0 - 0x3000u), rd32(sp0 - 0x2ffcu));
    t49 = g->ecx;
    t50 = g->edx;
    wr32(sp0 - 0x3008u, COW_IMG(0x10361d04u));
    wr32(sp0 - 0x300cu, COW_IMG(0x10361d10u));
    g->ecx = t49;
    g->edx = t50;
    t51 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, COW_IMG(0x10361d10u), COW_IMG(0x10361d04u), rd32(sp0 - 0x3004u), rd32(sp0 - 0x3000u), rd32(sp0 - 0x2ffcu));
    t52 = g->ecx;
    t53 = g->edx;
    wr32(sp0 - 0x3010u, COW_IMG(0x10361cd8u));
    wr32(sp0 - 0x3014u, t51);
    g->ebx = ebx;
    g->ecx = t52;
    g->esp = sp0 - 0x3000u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t53, 1, 5, t51, COW_IMG(0x10361cd8u), COW_IMG(0x10361d10u), COW_IMG(0x10361d04u), rd32(sp0 - 0x3004u));
    t54 = g->ecx;
    t55 = g->edx;
    ecx = t54;
    edx = t55;
    ebx = sp0 - 0x27e0u;
    esi = t51;
    edi = 0u;
L_100df2a1: ;
    COW_AT(100df2a1)
    wr32(sp0 - 0x3004u, (uint32_t)(int8_t)rd8(ebx));
    wr32(sp0 - 0x3008u, COW_IMG(0x10361cf4u));
    wr32(sp0 - 0x300cu, esi);
    g->ebx = ebx;
    g->eax = (uint32_t)(int8_t)rd8(ebx);
    t56 = rd8(ebx);
    g->esp = sp0 - 0x2ff8u;
    t57 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, esi, COW_IMG(0x10361cf4u), (uint32_t)(int8_t)t56, rd32(sp0 - 0x3000u), rd32(sp0 - 0x2ffcu));
    t58 = g->edx;
    t59 = (uint32_t)(int8_t)rd8(edi * 4u + sp0 - 0x2fecu);
    wr32(sp0 - 0x3010u, t59);
    wr32(sp0 - 0x3014u, COW_IMG(0x10361cf4u));
    wr32(sp0 - 0x3018u, esi);
    g->ebx = ebx;
    g->ecx = t59;
    g->esp = sp0 - 0x3004u;
    t60 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t58, 1, 5, esi, COW_IMG(0x10361cf4u), t59, rd32(sp0 - 0x300cu), COW_IMG(0x10361cf4u));
    t61 = g->ecx;
    t62 = (uint32_t)(int8_t)rd8(edi * 4u + sp0 - 0x2febu);
    wr32(sp0 - 0x301cu, t62);
    wr32(sp0 - 0x3020u, COW_IMG(0x10361cf4u));
    wr32(sp0 - 0x3024u, esi);
    g->ebx = ebx;
    g->ecx = t61;
    g->esp = sp0 - 0x3010u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t62, 1, 5, esi, COW_IMG(0x10361cf4u), t62, rd32(sp0 - 0x3018u), COW_IMG(0x10361cf4u));
    t63 = g->ecx;
    t64 = g->edx;
    t65 = (uint32_t)(int8_t)rd8(edi * 4u + sp0 - 0x2feau);
    wr32(sp0 - 0x3028u, t65);
    wr32(sp0 - 0x302cu, COW_IMG(0x10361cf4u));
    wr32(sp0 - 0x3030u, esi);
    g->ebx = ebx;
    g->eax = t65;
    g->esp = sp0 - 0x301cu;
    t66 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t64, 1, 5, esi, COW_IMG(0x10361cf4u), t65, rd32(sp0 - 0x3024u), COW_IMG(0x10361cf4u));
    t67 = g->edx;
    t68 = (uint32_t)(int8_t)rd8(edi * 4u + sp0 - 0x2fe9u);
    wr32(sp0 - 0x3034u, t68);
    wr32(sp0 - 0x3038u, COW_IMG(0x10361cf4u));
    wr32(sp0 - 0x303cu, esi);
    g->ebx = ebx;
    g->ecx = t68;
    g->esp = sp0 - 0x3028u;
    t69 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t67, 1, 5, esi, COW_IMG(0x10361cf4u), t68, rd32(sp0 - 0x3030u), COW_IMG(0x10361cf4u));
    t70 = g->ecx;
    t71 = (uint32_t)(int8_t)rd8(edi * 4u + sp0 - 0x2becu);
    wr32(sp0 - 0x3040u, t71);
    wr32(sp0 - 0x3044u, COW_IMG(0x10361cf4u));
    wr32(sp0 - 0x3048u, esi);
    g->ebx = ebx;
    g->ecx = t70;
    g->esp = sp0 - 0x3034u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t71, 1, 5, esi, COW_IMG(0x10361cf4u), t71, rd32(sp0 - 0x303cu), COW_IMG(0x10361cf4u));
    t72 = g->ecx;
    t73 = g->edx;
    t74 = (uint32_t)(int8_t)rd8(edi * 4u + sp0 - 0x2bebu);
    wr32(sp0 - 0x3004u, t74);
    wr32(sp0 - 0x3008u, COW_IMG(0x10361cf4u));
    wr32(sp0 - 0x300cu, esi);
    g->ebx = ebx;
    g->eax = t74;
    g->esp = sp0 - 0x2ff8u;
    t75 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t73, 1, 5, esi, COW_IMG(0x10361cf4u), t74, rd32(sp0 - 0x3000u), rd32(sp0 - 0x2ffcu));
    t76 = g->edx;
    t77 = (uint32_t)(int8_t)rd8(edi * 4u + sp0 - 0x2beau);
    wr32(sp0 - 0x3010u, t77);
    wr32(sp0 - 0x3014u, COW_IMG(0x10361cf4u));
    wr32(sp0 - 0x3018u, esi);
    g->ebx = ebx;
    g->ecx = t77;
    g->esp = sp0 - 0x3004u;
    t78 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t76, 1, 5, esi, COW_IMG(0x10361cf4u), t77, rd32(sp0 - 0x300cu), COW_IMG(0x10361cf4u));
    t79 = g->ecx;
    t80 = (uint32_t)(int8_t)rd8(edi * 4u + sp0 - 0x2be9u);
    wr32(sp0 - 0x301cu, t80);
    wr32(sp0 - 0x3020u, COW_IMG(0x10361cd0u));
    wr32(sp0 - 0x3024u, esi);
    g->ebx = ebx;
    g->ecx = t79;
    g->esp = sp0 - 0x3010u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t80, 1, 5, esi, COW_IMG(0x10361cd0u), t80, rd32(sp0 - 0x3018u), COW_IMG(0x10361cf4u));
    t81 = g->ecx;
    t82 = g->edx;
    if (edi + 1u < 0xffu)
    {
        ecx = t81;
        edx = t82;
        ebx = ebx + 0x14u;
        edi = edi + 1u;
        goto L_100df2a1;
    }
    edx = t82;
    ebx = ebx + 0x14u;
    edi = edi + 1u;
    COW_AT(100df35a)
    t83 = (uint32_t)(int8_t)rd8(edi * 0x14u + sp0 - 0x27e0u);
    wr32(sp0 - 0x3004u, t83);
    wr32(sp0 - 0x3008u, COW_IMG(0x10361cf4u));
    wr32(sp0 - 0x300cu, esi);
    g->ebx = ebx;
    g->eax = edi * 5u;
    g->ecx = t83;
    g->esp = sp0 - 0x2ff8u;
    t84 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, esi, COW_IMG(0x10361cf4u), t83, rd32(sp0 - 0x3000u), rd32(sp0 - 0x2ffcu));
    t85 = g->ecx;
    t86 = (uint32_t)(int8_t)rd8(edi * 4u + sp0 - 0x2fecu);
    wr32(sp0 - 0x3010u, t86);
    wr32(sp0 - 0x3014u, COW_IMG(0x10361cf4u));
    wr32(sp0 - 0x3018u, esi);
    g->ebx = ebx;
    g->ecx = t85;
    g->esp = sp0 - 0x3004u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t86, 1, 5, esi, COW_IMG(0x10361cf4u), t86, rd32(sp0 - 0x300cu), COW_IMG(0x10361cf4u));
    t87 = g->ecx;
    t88 = g->edx;
    t89 = (uint32_t)(int8_t)rd8(edi * 4u + sp0 - 0x2febu);
    wr32(sp0 - 0x301cu, t89);
    wr32(sp0 - 0x3020u, COW_IMG(0x10361cf4u));
    wr32(sp0 - 0x3024u, esi);
    g->ebx = ebx;
    g->eax = t89;
    g->esp = sp0 - 0x3010u;
    t90 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t88, 1, 5, esi, COW_IMG(0x10361cf4u), t89, rd32(sp0 - 0x3018u), COW_IMG(0x10361cf4u));
    t91 = g->edx;
    t92 = (uint32_t)(int8_t)rd8(edi * 4u + sp0 - 0x2feau);
    wr32(sp0 - 0x3028u, t92);
    wr32(sp0 - 0x302cu, COW_IMG(0x10361cf4u));
    wr32(sp0 - 0x3030u, esi);
    g->ebx = ebx;
    g->ecx = t92;
    g->esp = sp0 - 0x301cu;
    t93 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t91, 1, 5, esi, COW_IMG(0x10361cf4u), t92, rd32(sp0 - 0x3024u), COW_IMG(0x10361cf4u));
    t94 = g->ecx;
    t95 = (uint32_t)(int8_t)rd8(edi * 4u + sp0 - 0x2fe9u);
    wr32(sp0 - 0x3034u, t95);
    wr32(sp0 - 0x3038u, COW_IMG(0x10361cf4u));
    wr32(sp0 - 0x303cu, esi);
    g->ebx = ebx;
    g->ecx = t94;
    g->esp = sp0 - 0x3028u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t95, 1, 5, esi, COW_IMG(0x10361cf4u), t95, rd32(sp0 - 0x3030u), COW_IMG(0x10361cf4u));
    t96 = g->ecx;
    t97 = g->edx;
    t98 = (uint32_t)(int8_t)rd8(edi * 4u + sp0 - 0x2becu);
    wr32(sp0 - 0x3040u, t98);
    wr32(sp0 - 0x3044u, COW_IMG(0x10361cf4u));
    wr32(sp0 - 0x3048u, esi);
    g->ebx = ebx;
    g->eax = t98;
    g->esp = sp0 - 0x3034u;
    t99 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t97, 1, 5, esi, COW_IMG(0x10361cf4u), t98, rd32(sp0 - 0x303cu), COW_IMG(0x10361cf4u));
    t100 = g->edx;
    t101 = (uint32_t)(int8_t)rd8(edi * 4u + sp0 - 0x2bebu);
    wr32(sp0 - 0x3004u, t101);
    wr32(sp0 - 0x3008u, COW_IMG(0x10361cf4u));
    wr32(sp0 - 0x300cu, esi);
    g->ebx = ebx;
    g->ecx = t101;
    g->esp = sp0 - 0x2ff8u;
    t102 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t100, 1, 5, esi, COW_IMG(0x10361cf4u), t101, rd32(sp0 - 0x3000u), rd32(sp0 - 0x2ffcu));
    t103 = g->ecx;
    t104 = (uint32_t)(int8_t)rd8(edi * 4u + sp0 - 0x2beau);
    wr32(sp0 - 0x3010u, t104);
    wr32(sp0 - 0x3014u, COW_IMG(0x10361cf4u));
    wr32(sp0 - 0x3018u, esi);
    g->ebx = ebx;
    g->ecx = t103;
    g->esp = sp0 - 0x3004u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t104, 1, 5, esi, COW_IMG(0x10361cf4u), t104, rd32(sp0 - 0x300cu), COW_IMG(0x10361cf4u));
    t105 = g->ecx;
    t106 = g->edx;
    t107 = (uint32_t)(int8_t)rd8(edi * 4u + sp0 - 0x2be9u);
    wr32(sp0 - 0x301cu, t107);
    wr32(sp0 - 0x3020u, COW_IMG(0x10361cc8u));
    wr32(sp0 - 0x3024u, esi);
    g->ebx = ebx;
    g->eax = t107;
    g->ecx = t105;
    g->esp = sp0 - 0x3010u;
    t108 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t106, 1, 5, esi, COW_IMG(0x10361cc8u), t107, rd32(sp0 - 0x3018u), COW_IMG(0x10361cf4u));
    t109 = g->ecx;
    t110 = g->edx;
    wr32(sp0 - 0x3028u, esi);
    g->edi = edi;
    g->esp = sp0 - 0x301cu;
    t111 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t110, 1, 3, esi, rd32(sp0 - 0x3024u), COW_IMG(0x10361cc8u));
    t112 = g->edx;
    g->ebx = rd32(sp0 - 0x2ff4u);
    g->esi = rd32(sp0 - 0x2ffcu);
    g->edi = rd32(sp0 - 0x3000u);
    g->ebp = rd32(sp0 - 0x2ff8u);
    g->edx = t112;
    return t111;
L_100df105: ;
    COW_AT(100df105)
    ebx = sp0 - 0x27e4u;
    edi = 0u;
L_100df10e: ;
    COW_AT(100df10e)
    if (rd32(ebx) == 0u)
    {
        esi = 0x20u;
    }
    else
    {
        eax = ebx - 8u;
        ecx = rd32(ebx);
    COW_AT(100df11c)
        ebp = ebx;
        esi = 0x20u;
L_100df11e: ;
    COW_AT(100df11e)
        if (esi == 0u)
        {
    COW_AT(100df122)
            wr32(edi + sp0 - 0x2becu, 0x2710u);
        }
    COW_AT(100df12d)
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
            goto L_100df11e;
        }
        edx = t15;
        esi = esi - 1u;
    }
    COW_AT(100df14d)
    t16 = rd32(edi + sp0 - 0x2fecu);
    wr32(edi + sp0 - 0x2becu, 0x20u - esi);
    t17 = t16 >> (esi & 0x1fu);
    wr32(edi + sp0 - 0x2fecu, t17);
    if (edi + 4u < 0x400u)
    {
        ebx = ebx + 0x14u;
        edi = edi + 4u;
        goto L_100df10e;
    }
    eax = 0x20u - esi;
    ecx = esi;
    ebx = ebx + 0x14u;
    goto L_100df175;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100def30(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100def6eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = rd32(sp0 - 0x3000u);
        in_esi = rd32(sp0 - 0x2ffcu);
        in_ebp = rd32(sp0 - 0x2ff8u);
        in_ebx = rd32(sp0 - 0x2ff4u);
        g->esp = sp0 - 0x3000u;
        g->ebp = 0x100u;
        g->esi = arg1;
        g->edi = 0u;
        wr32(sp0 - 0x2ff0u, 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100def91u:
    {
        uint32_t eax;
        uint32_t ebx;
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
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x3000u);
        in_esi = rd32(sp0 - 0x2ffcu);
        in_ebp = rd32(sp0 - 0x2ff8u);
        in_ebx = rd32(sp0 - 0x2ff4u);
        g->esp = sp0 - 0x3000u;
        g->ebp = 0x100u;
        g->edi = 0u;
        wr32(sp0 - 0x2ff0u, 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100def9du:
    {
        uint32_t eax;
        uint32_t ebx;
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
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x3000u);
        in_esi = rd32(sp0 - 0x2ffcu);
        in_ebp = rd32(sp0 - 0x2ff8u);
        in_ebx = rd32(sp0 - 0x2ff4u);
        g->esp = sp0 - 0x3000u;
        g->ebp = 0x100u;
        g->edi = 0u;
        wr32(sp0 - 0x2ff0u, 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100defb2u:
    {
        uint32_t eax;
        uint32_t ebx;
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
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x3000u);
        in_esi = rd32(sp0 - 0x2ffcu);
        in_ebp = rd32(sp0 - 0x2ff8u);
        in_ebx = rd32(sp0 - 0x2ff4u);
        g->esp = sp0 - 0x3000u;
        g->ebp = 0x100u;
        wr32(sp0 - 0x2ff0u, 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x100defd2u:
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
    case 0x100defeeu:
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
    case 0x100deffeu:
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
    case 0x100df00fu:
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
    case 0x100df016u:
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
    case 0x100df01du:
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
    case 0x100df025u:
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
    case 0x100df02bu:
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
    case 0x100df037u:
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
    case 0x100df03du:
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
    case 0x100df044u:
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
    case 0x100df050u:
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
    case 0x100df052u:
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
    case 0x100df05eu:
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
    case 0x100df065u:
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
    case 0x100df0d7u:
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
    case 0x100df0e8u:
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
    case 0x100df0f3u:
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
    case 0x100df105u:
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
    case 0x100df10eu:
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
    case 0x100df11cu:
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
    case 0x100df11eu:
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
    case 0x100df122u:
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
    case 0x100df12du:
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
    case 0x100df14du:
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
    case 0x100df175u:
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
    case 0x100df196u:
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
    case 0x100df1c6u:
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
    case 0x100df1efu:
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
    case 0x100df213u:
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
    case 0x100df236u:
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
    case 0x100df273u:
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
    case 0x100df2a1u:
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
    case 0x100df35au:
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
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100def30(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100def30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
