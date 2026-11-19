/* f_0x1009d0f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1009d0f0(Guest* g)
{
    double d114;
    double d34;
    double d36;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    int64_t q120;
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
    uint32_t t113;
    uint32_t t115;
    uint32_t t116;
    uint32_t t117;
    uint32_t t118;
    uint32_t t119;
    uint32_t t12;
    uint32_t t121;
    uint32_t t122;
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
    uint32_t t35;
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
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1009d100u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1009d100;
    case 0x1009d108u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1009d108;
    case 0x1009d11bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1009d11b;
    case 0x1009d123u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1009d123;
    case 0x1009d126u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1009d126;
    case 0x1009d13bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1009d13b;
    case 0x1009d140u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1009d140;
    case 0x1009d150u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1009d150;
    case 0x1009d154u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1009d154;
    case 0x1009d160u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1009d160;
    case 0x1009d16eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1009d16e;
    case 0x1009d174u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1009d174;
    case 0x1009d293u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1009d293;
    case 0x1009d2b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1009d2b2;
    case 0x1009d2d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1009d2d3;
    case 0x1009d489u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1009d489;
    case 0x1009d494u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1009d494;
    case 0x1009d49au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1009d49a;
    case 0x1009d4a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1009d4a3;
    case 0x1009d4b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1009d4b9;
    case 0x1009d4beu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1009d4be;
    case 0x1009d4c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1009d4c4;
    case 0x1009d4cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1009d4cd;
    case 0x1009d4e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1009d4e1;
    case 0x1009d4ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1009d4ec;
    case 0x1009d6a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1009d6a1;
    case 0x1009d6a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1009d6a9;
    case 0x1009d6bau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1009d6ba;
    case 0x1009d6c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1009d6c7;
    case 0x1009d6c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1009d6c9;
    case 0x1009d97du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1009d97d;
    case 0x1009d98bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1009d98b;
    case 0x1009d999u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1009d999;
    case 0x1009d9b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1009d9b7;
    default: break;
    }
#endif

    COW_AT(1009d0f0)
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc4f0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->edx;
    if (t1 != 0u)
    {
        edx = t2;
        esi = t1;
        goto L_1009d108;
    }
    eax = t1;
    edx = t2;
    COW_AT(1009d100)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009d108: ;
    COW_AT(1009d108)
    t3 = rd32(esi + 0x74u);
    if (rd32(esi + 0x78u) == rd32(rd32(sp0 + 0xcu) + 0x24u))
    {
        edi = rd32(sp0 + 0xcu);
        goto L_1009d123;
    }
    eax = rd32(esi + 0x78u);
    COW_AT(1009d11b)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009d123: ;
    COW_AT(1009d123)
    edx = 0u;
L_1009d126: ;
    COW_AT(1009d126)
    if ((int32_t)(edx & 0x80000003u) >= 0)
    {
        eax = rd8(edi + (uint32_t)((int32_t)edx >> 2u) + 0x4cu);
        ecx = edx & 0x80000003u;
    }
    else
    {
        eax = rd8(edi + (uint32_t)((int32_t)edx >> 2u) + 0x4cu);
        ecx = edx & 0x80000003u;
    COW_AT(1009d13b)
        ecx = (ecx - 1u | 0xfffffffcu) + 1u;
    }
    COW_AT(1009d140)
    if (rd8(edi + edx + 4u) != 0xffu)
    {
        eax = eax >> ((uint8_t)ecx * 2u & 0x1fu) & 3u;
        ecx = (ecx & 0xffffff00u) | rd8(edi + edx + 4u);
        goto L_1009d160;
    }
    eax = eax >> ((uint8_t)ecx * 2u & 0x1fu) & 3u;
    ecx = (ecx & 0xffffff00u) | rd8(edi + edx + 4u);
    COW_AT(1009d150)
    if (eax != 0u) goto L_1009d160;
    COW_AT(1009d154)
    wr16(COW_IMG(0x10485a30u) + edx * 2u, 0xffffu);
L_1009d16e: ;
    COW_AT(1009d16e)
    if ((int32_t)(edx + 1u) < 32)
    {
        edx = edx + 1u;
        goto L_1009d126;
    }
    COW_AT(1009d174)
    t4 = rd32(esi + 0x120u);
    t5 = t4 ^ (((uint32_t)rd8(edi + 0x28u) << 0xeu ^ t4) & 0x4000u);
    t6 = rd32(esi + 0x124u);
    wr32(esi + 0x120u, t5);
    t7 = ((rd32(edi + 0x28u) >> 1u << 0x12u ^ t5) & 0x40000u) ^ t5;
    wr32(esi + 0x120u, t7);
    t8 = ((rd32(edi + 0x28u) >> 2u << 0x14u ^ t7) & 0x100000u) ^ t7;
    wr32(esi + 0x120u, t8);
    t9 = ((rd32(edi + 0x28u) >> 3u << 0x16u ^ t8) & 0x400000u) ^ t8;
    wr32(esi + 0x120u, t9);
    t10 = t6 ^ ((rd32(edi + 0x28u) >> 4u << 0x14u ^ t6) & 0x100000u);
    wr32(esi + 0x124u, t10);
    t11 = ((rd32(edi + 0x34u) >> 2u << 0x15u ^ t10) & 0x200000u) ^ t10;
    wr32(esi + 0x124u, t11);
    t12 = ((rd32(edi + 0x28u) >> 5u << 0x17u ^ t11) & 0x800000u) ^ t11;
    wr32(esi + 0x124u, t12);
    t13 = ((rd32(edi + 0x28u) >> 7u << 0x16u ^ t12) & 0x400000u) ^ t12;
    wr32(esi + 0x124u, t13);
    t14 = (((uint32_t)(int8_t)(rd32(edi + 0x28u) >> 8u) << 0x19u ^ t13) & 0x2000000u) ^ t13;
    wr32(esi + 0x124u, t14);
    if (rd16(edi + 0x54u) == 0u)
    {
        ecx = t14;
    COW_AT(1009d2b2)
        t16 = ((rd32(edi + 0x34u) >> 0x1du << 0xdu ^ ecx) & 0x6000u) ^ ecx;
        t17 = rd32(esi + 0x130u);
        wr32(esi + 0x124u, t16);
        eax = (t17 & 0xffffff00u) | (t17 & 0xfbu);
    }
    else
    {
        ecx = t14;
    COW_AT(1009d293)
        t15 = (((rd32(edi + 0x34u) >> 0x1du) * 2u ^ ecx) & 0xeu) ^ ecx;
        wr32(esi + 0x124u, t15);
        eax = (rd32(esi + 0x130u) & 0xffffff00u) | (uint8_t)(rd32(esi + 0x130u) | 4u);
    }
    COW_AT(1009d2d3)
    wr32(esi + 0x130u, eax);
    t18 = rd32(esi + 0x120u);
    wr8(sp0 + 0xcu, rd32(edi + 0x28u) >> 0xbu & 3u);
    t19 = (t18 & 0x3fffffffu) ^ (uint32_t)(uint8_t)rd32(sp0 + 0xcu) << 0x1eu;
    t20 = rd32(sp0 + 0xcu);
    wr32(esi + 0x120u, t19);
    t21 = rd32(edi + 0x28u) >> 0xdu & 7u;
    g->eax = (uint32_t)(uint8_t)t20 << 0x1eu;
    g->esp = sp0 - 0x14u;
    t22 = cow_thiscall(g, COW_IMG(0x10097a20u), esi, 1, t21);
    t23 = rd32(esi + 0x124u);
    wr8(esi + 0xecu, rd8(edi + 0x2au));
    t24 = t23 ^ (((uint32_t)rd8(edi + 0x2bu) << 0x1au ^ t23) & 0x4000000u);
    wr32(esi + 0x124u, t24);
    t25 = rd32(esi + 0x140u);
    t26 = ((rd32(edi + 0x28u) >> 0x19u << 0x1bu ^ t24) & 0x8000000u) ^ t24;
    wr32(esi + 0x124u, t26);
    t27 = ((rd32(edi + 0x28u) >> 0x1au << 0x1cu ^ t26) & 0x10000000u) ^ t26;
    wr32(esi + 0x124u, t27);
    t28 = rd32(esi + 0x128u);
    t29 = t25 ^ (((uint32_t)rd8(edi + 0x38u) << 3u ^ t25) & 8u);
    wr32(esi + 0x140u, t29);
    t30 = t28 ^ ((rd32(edi + 0x28u) >> 0x1bu << 4u ^ t28) & 0x10u);
    wr32(esi + 0x128u, t30);
    t31 = ((rd32(edi + 0x28u) >> 0x1cu << 5u ^ t30) & 0x20u) ^ t30;
    wr32(esi + 0x128u, t31);
    t32 = ((rd32(edi + 0x28u) >> 0x1du << 0xbu ^ t31) & 0x3800u) ^ t31;
    wr32(esi + 0x128u, t32);
    t33 = rd16(edi + 0x2cu) & 0xfffu;
    wr32(sp0 + 0xcu, t33);
    d34 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x1032a378u)));
    wrf32(esi + 0x15cu, (float)d34);
    t35 = (uint8_t)(rd32(edi + 0x2cu) >> 0x11u);
    wr32(sp0 + 0xcu, t35);
    d36 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x1032a378u)));
    wrf32(esi + 0x9cu, (float)d36);
    t37 = rd8(edi + 0x31u) + rd8(edi + 0x32u) * 0x100u + rd8(edi + 0x33u) * 0x10000u;
    wr32(esi + 0x1d4u, t37);
    t38 = rd32(esi + 0x128u);
    t39 = t38 ^ (((uint32_t)(int8_t)(rd32(edi + 0x2cu) >> 0xcu) << 0xeu ^ rd32(esi + 0x128u)) & 0x4000u);
    wr32(esi + 0x128u, t39);
    t40 = (((uint32_t)(int8_t)(rd32(edi + 0x2cu) >> 0xdu) << 0xfu ^ t39) & 0x8000u) ^ t39;
    t41 = rd32(esi + 0x120u);
    wr32(esi + 0x128u, t40);
    if (!(t41 >> 1u & 1u))
    {
    COW_AT(1009d489)
        if (rd32(esi + 0x16cu) == 0x32u)
        {
            eax = rd32(esi + 0x16cu);
            goto L_1009d4b9;
        }
        eax = rd32(esi + 0x16cu);
    COW_AT(1009d494)
        if (rd8(edi + 0x30u) != 0x32u) goto L_1009d4b9;
    COW_AT(1009d49a)
        if (rd16(edi + 0x4au) != 0u)
        {
            eax = (eax & 0xffff0000u) | rd16(edi + 0x4au);
    COW_AT(1009d4a3)
            t42 = (uint16_t)eax * 0x3cu;
            wr32(esi + 0x1dcu, t42);
        }
L_1009d4e1: ;
    COW_AT(1009d4e1)
        t44 = rd8(edi + 0x30u);
        wr32(esi + 0x16cu, t44);
    }
    COW_AT(1009d4ec)
    t45 = rd32(esi + 0x130u);
    t46 = t45 ^ (((uint32_t)rd8(edi + 0x2eu) << 8u ^ t45) & 0x100u);
    wr32(esi + 0x130u, t46);
    wr8(esi + 0x1ffu, (uint8_t)(rd32(edi + 0x34u) >> 0x15u));
    t47 = rd32(esi + 0x130u);
    t48 = t47 ^ ((rd32(edi + 0x38u) >> 5u << 0xbu ^ t47) & 0x800u);
    wr32(esi + 0x130u, t48);
    t49 = rd32(esi + 0x128u);
    t50 = t49 ^ ((rd32(edi + 0x2cu) >> 0x1du << 9u ^ rd32(esi + 0x128u)) & 0x200u);
    wr32(esi + 0x128u, t50);
    t51 = (((uint32_t)(int8_t)(rd32(edi + 0x2cu) >> 0xeu) << 0x10u ^ t50) & 0x10000u) ^ t50;
    wr32(esi + 0x128u, t51);
    t52 = (((uint32_t)(int8_t)(rd32(edi + 0x2cu) >> 0xfu) << 6u ^ t51) & 0x40u) ^ t51;
    wr32(esi + 0x128u, t52);
    t53 = (((uint32_t)(int8_t)(rd32(edi + 0x38u) >> 2u) << 8u ^ t52) & 0x100u) ^ t52;
    wr32(esi + 0x128u, t53);
    t54 = rd32(esi + 0x12cu);
    t55 = t54 ^ ((rd32(edi + 0x2cu) >> 0x1eu << 0xdu ^ rd32(esi + 0x12cu)) & 0x2000u);
    t56 = rd32(esi + 0x124u);
    wr32(esi + 0x12cu, t55);
    t57 = t56 ^ ((rd32(edi + 0x28u) >> 6u << 0x18u ^ t56) & 0x1000000u);
    wr32(esi + 0x124u, t57);
    t58 = rd32(esi + 0x12cu);
    t59 = t58 ^ ((rd32(edi + 0x2cu) >> 0x1fu << 0x12u ^ rd32(esi + 0x12cu)) & 0x40000u);
    t60 = rd32(edi + 0x2cu);
    t61 = rd32(esi + 0x12cu);
    wr32(esi + 0x12cu, t59);
    t62 = rd32(edi + 0x34u) & 1u;
    t63 = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x1008a9e0u), g->eax, g->ecx, t63, 1, 2, t63, t62);
    t64 = g->edx;
    t65 = rd32(edi + 0x34u) >> 1u & 1u;
    t66 = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
    g->esp = sp0 - 0x1cu;
    cow_call_regs(g, COW_IMG(0x1008aa30u), g->eax, g->ecx, t64, 1, 2, t66, t65);
    t67 = rd32(edi + 0x34u);
    t68 = rd32(esi + 0x12cu);
    wr16(esi + 0x1fau, (uint16_t)(t67 >> 3u));
    t69 = t68 ^ ((rd32(edi + 0x34u) >> 0x13u << 0x19u ^ t68) & 0x2000000u);
    wr32(esi + 0x12cu, t69);
    t70 = ((rd32(edi + 0x34u) >> 0x14u << 0x1bu ^ t69) & 0x8000000u) ^ t69;
    wr32(esi + 0x12cu, t70);
    if (rd16(edi + 0x44u) == rd16(esi + 0x166u))
    {
        edx = t67 >> 3u;
    }
    else
    {
        eax = (t69 & 0xffff0000u) | rd16(edi + 0x44u);
        edx = t67 >> 3u;
    COW_AT(1009d6a1)
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        cow_call_regs(g, COW_IMG(0x1008cce0u), eax, esi, g->edx, 0, 1, eax);
        t71 = g->edx;
        edx = t71;
    }
    COW_AT(1009d6a9)
    wr8(esi + 0x294u, rd8(edi + 0x39u));
    if ((rd32(edi + 0x28u) >> 8u & 2u) == 0u)
    {
    COW_AT(1009d6c7)
        eax = 0u;
    }
    else
    {
    COW_AT(1009d6ba)
        eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c350u);
    }
    COW_AT(1009d6c9)
    t72 = rd32(esi + 0x130u);
    wr32(esi + 0x18cu, eax);
    t73 = t72 ^ ((rd32(edi + 0x38u) >> 4u << 0xcu ^ t72) & 0x1000u);
    wr32(esi + 0x130u, t73);
    t74 = ((rd32(edi + 0x38u) >> 3u << 0xdu ^ t73) & 0x2000u) ^ t73;
    wr32(esi + 0x130u, t74);
    t75 = ((rd32(edi + 0x38u) >> 1u << 0xeu ^ t74) & 0x4000u) ^ t74;
    wr32(esi + 0x130u, t75);
    t76 = rd32(esi + 0x13cu);
    t77 = t76 ^ (((uint32_t)rd8(edi + 0x5cu) << 0x1du ^ rd32(esi + 0x13cu)) & 0x20000000u);
    wr32(esi + 0x13cu, t77);
    t78 = ((rd32(edi + 0x5cu) >> 1u << 0x1eu ^ t77) & 0x40000000u) ^ t77;
    wr32(esi + 0x13cu, t78);
    t79 = rd32(edi + 0x5cu);
    wr8(sp0 + 0xcu, t79 >> 3u & 1u);
    t80 = (t79 >> 3u & 1u) << 0x1fu;
    t81 = ((t80 ^ t78) & 0x7fffffffu) ^ t80;
    t82 = rd32(esi + 0x140u);
    wr32(esi + 0x13cu, t81);
    t83 = (rd32(edi + 0x5cu) >> 4u & 1u) ^ ((t82 & 0xffffff00u) | (t82 & 0xfeu));
    wr32(esi + 0x140u, t83);
    t84 = (((uint8_t)(rd32(edi + 0x5cu) >> 5u) * 2u ^ t83) & 2u) ^ t83;
    wr32(esi + 0x140u, t84);
    t85 = ((rd32(edi + 0x5cu) >> 6u << 2u ^ t84) & 4u) ^ t84;
    wr32(esi + 0x140u, t85);
    t86 = rd32(esi + 0x13cu);
    t87 = rd32(esi + 0x130u);
    t88 = t86 ^ ((rd32(edi + 0x5cu) >> 2u << 0x1cu ^ t86) & 0x10000000u);
    wr32(esi + 0x13cu, t88);
    t89 = t87 ^ ((rd32(edi + 0x38u) >> 6u << 0x10u ^ t87) & 0x10000u);
    wr32(esi + 0x130u, t89);
    t90 = rd32(esi + 0x130u);
    wr16(esi + 0x2a0u, rd16(edi + 0x48u));
    t91 = rd16(edi + 0x46u);
    wr16(esi + 0x2a2u, (uint16_t)t91);
    wr32(esi + 0x130u, t90 & 0xfffbffffu);
    t92 = ((rd32(edi + 0x38u) >> 7u << 0x13u ^ t90) & 0x80000u) ^ (t90 & 0xfffbffffu);
    wr32(esi + 0x130u, t92);
    t93 = ((t89 | t91) & 0xffff0000u) | rd16(edi + 0x54u);
    g->edx = t93;
    g->esp = sp0 - 0x14u;
    t94 = cow_call_regs(g, COW_IMG(0x1009acb0u), t90 & 0xfffbffffu, esi, g->edx, 0, 1, t93);
    t95 = g->ecx;
    t96 = g->edx;
    t97 = (t94 & 0xffffff00u) | rd8(edi + 0x56u);
    g->ebx = t88;
    g->eax = t97;
    t98 = cow_fastcall(g, COW_IMG(0x1009ace0u), t95, t96, 2, 0u, t97);
    t99 = g->ecx;
    t100 = g->edx;
    t101 = (t99 & 0xffffff00u) | rd8(edi + 0x57u);
    g->ebx = t88;
    t102 = cow_fastcall(g, COW_IMG(0x1009ace0u), esi, t100, 2, 1u, t101);
    t103 = rd32(esi + 0x13cu);
    t104 = t103 ^ (((uint32_t)rd8(edi + 0x5au) << 4u ^ t103) & 0x30u);
    wr32(esi + 0x13cu, t104);
    t105 = (rd8(edi + 0x5au) & 0xcu) ^ (t104 & 0xfffffff3u);
    wr32(esi + 0x13cu, t105);
    t106 = (rd8(edi + 0x5au) & 0xfffffff0u) << 0x14u ^ (t105 & 0xf0ffffffu);
    wr32(esi + 0x13cu, t106);
    t107 = rd8(edi + 0x58u);
    t108 = t107 >> 6u & 1u;
    t109 = t107 >> 4u & 3u;
    g->eax = t107 & 0xfu;
    t110 = cow_fastcall(g, COW_IMG(0x1009ad20u), esi, t108, 3, t107 & 0xfu, t109, t108);
    t111 = g->ecx;
    t112 = rd8(edi + 0x59u);
    wr32(sp0 + 0xcu, t112);
    t113 = rd32(esi + 0x13cu);
    d114 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x1032a378u)));
    wrf32(esi + 0x208u, (float)d114);
    wr8(esi + 0x1dbu, rd8(edi + 0x5bu));
    t115 = (rd8(edi + 0x58u) & 0x80u) ^ ((t113 & 0xffffff00u) | (t113 & 0x7fu));
    wr32(esi + 0x13cu, t115);
    t116 = rd32(edi + 0x28u);
    t117 = rd16(arg1 + 0x40dacu);
    wr32(arg1 + 0x40ddcu, 0u);
    wr16(arg1 + 0x40dacu, (uint16_t)((t117 & 0x7fffu) ^ t116 >> 0xau << 0xfu));
    if ((int32_t)rd32(edi + 0x3cu) <= 0)
    {
        eax = rd32(edi + 0x3cu);
        edx = (t113 & 0xffffff00u) | (t113 & 0x7fu);
        goto L_1009d9b7;
    }
    eax = rd32(edi + 0x3cu);
    ecx = (t117 & 0x7fffu) ^ t116 >> 0xau << 0xfu;
    edx = (t113 & 0xffffff00u) | (t113 & 0x7fu);
    COW_AT(1009d97d)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t118 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
    t119 = g->edx;
    if (rd32(edi + 0x40u) <= t118)
    {
        ecx = t118;
        edx = t119;
        goto L_1009d999;
    }
    eax = rd32(edi + 0x40u);
    edx = t119;
    COW_AT(1009d98b)
    wr32(arg1 + 0x40ddcu, eax);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_1009d160: ;
    COW_AT(1009d160)
    wr16(COW_IMG(0x10485a30u) + edx * 2u, (uint16_t)(eax << 8u | (uint8_t)ecx));
    goto L_1009d16e;
L_1009d4b9: ;
    COW_AT(1009d4b9)
    if (eax != 0x38u)
    {
    COW_AT(1009d4be)
        if (rd8(edi + 0x30u) == 0x38u)
        {
    COW_AT(1009d4c4)
            if (rd16(edi + 0x4au) != 0u)
            {
                eax = (eax & 0xffff0000u) | rd16(edi + 0x4au);
    COW_AT(1009d4cd)
                t43 = (uint16_t)eax * 0x3cu;
                wr32(esi + 0x1e4u, t43);
            }
        }
    }
    goto L_1009d4e1;
L_1009d999: ;
    COW_AT(1009d999)
    q120 = (int64_t)cow_muls(0x88888889u, rd32(edi + 0x3cu));
    t121 = (uint32_t)((int32_t)(cow_qhi(q120) + rd32(edi + 0x3cu)) >> 5u);
    t122 = ecx + t121 + (t121 >> 0x1fu);
    wr32(arg1 + 0x40ddcu, t122);
    eax = t121 >> 0x1fu;
    edx = t122;
L_1009d9b7: ;
    COW_AT(1009d9b7)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1009d0f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1009d100u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1009d108u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1009d11bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1009d123u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1009d126u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1009d13bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1009d140u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1009d150u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1009d154u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1009d160u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1009d16eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1009d174u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1009d293u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1009d2b2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1009d2d3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1009d489u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1009d494u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1009d49au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1009d4a3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1009d4b9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1009d4beu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1009d4c4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1009d4cdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1009d4e1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1009d4ecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1009d6a1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1009d6a9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1009d6bau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1009d6c7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1009d6c9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1009d97du:
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
        in_ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1009d98bu:
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
        in_ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1009d999u:
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
        in_ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1009d9b7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1009d0f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1009d0f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
