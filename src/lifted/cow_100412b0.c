/* f_0x100412b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100412b0(Guest* g)
{
    double d11;
    double d12;
    double d13;
    double d76;
    double d77;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_40;
    uint32_t loc_48;
    uint32_t loc_4c;
    uint32_t loc_50;
    uint32_t loc_54;
    uint32_t loc_64;
    uint32_t loc_68;
    uint32_t loc_6c;
    uint32_t loc_70;
    uint32_t loc_74;
    int64_t q115;
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
    uint32_t t110;
    uint32_t t111;
    uint32_t t112;
    uint32_t t113;
    uint32_t t114;
    uint32_t t116;
    uint32_t t117;
    uint32_t t118;
    uint32_t t119;
    uint32_t t120;
    uint32_t t121;
    uint32_t t122;
    uint32_t t123;
    uint32_t t124;
    uint32_t t125;
    uint32_t t126;
    uint32_t t127;
    uint32_t t128;
    uint32_t t129;
    uint32_t t130;
    uint32_t t131;
    uint32_t t132;
    uint32_t t133;
    uint32_t t134;
    uint32_t t135;
    uint32_t t136;
    uint32_t t137;
    uint32_t t138;
    uint32_t t139;
    uint32_t t14;
    uint32_t t140;
    uint32_t t141;
    uint32_t t142;
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
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 144u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100412c6u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); goto E_100412c6;
    case 0x100412d0u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); goto E_100412d0;
    case 0x100412dbu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->ebp; in_esi = g->esi; in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); goto E_100412db;
    case 0x100412e5u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->ebp; in_esi = g->esi; in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); goto E_100412e5;
    case 0x100412edu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->ebp; in_esi = g->esi; in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); goto E_100412ed;
    case 0x100412f3u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->ebp; in_esi = g->esi; in_edi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); goto E_100412f3;
    case 0x10041303u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; in_esi = g->esi; goto E_10041303;
    case 0x1004130du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; in_esi = g->esi; goto E_1004130d;
    case 0x10041315u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; in_esi = g->esi; goto E_10041315;
    case 0x10041319u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; in_esi = g->esi; goto E_10041319;
    case 0x10041380u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_10041380;
    case 0x100413bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100413bb;
    case 0x1004142bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_20 = rd32(sp0 - 0x20u); goto E_1004142b;
    case 0x10041438u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); goto E_10041438;
    case 0x10041468u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041468;
    case 0x10041471u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041471;
    case 0x10041493u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041493;
    case 0x100414bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100414bd;
    case 0x100414ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100414ce;
    case 0x100414ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_18 = rd32(sp0 - 0x18u); goto E_100414dd;
    case 0x10041518u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041518;
    case 0x10041521u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041521;
    case 0x10041533u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041533;
    case 0x10041538u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041538;
    case 0x1004154au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1004154a;
    case 0x1004154eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1004154e;
    case 0x10041570u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041570;
    case 0x100415b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100415b3;
    case 0x100415dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100415df;
    case 0x1004160bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1004160b;
    case 0x1004160fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1004160f;
    case 0x10041635u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10041635;
    case 0x10041678u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); goto E_10041678;
    case 0x10041689u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); goto E_10041689;
    case 0x10041698u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_74 = rd32(sp0 - 0x74u); loc_64 = rd32(sp0 - 0x64u); goto E_10041698;
    case 0x100416b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); goto E_100416b0;
    case 0x100416bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); goto E_100416bd;
    case 0x100417a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); goto E_100417a7;
    case 0x100417d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); goto E_100417d4;
    case 0x100417f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; goto E_100417f5;
    case 0x100417f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_40 = rd32(sp0 - 0x40u); goto E_100417f9;
    case 0x10041863u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_40 = rd32(sp0 - 0x40u); goto E_10041863;
    case 0x1004186eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_40 = rd32(sp0 - 0x40u); goto E_1004186e;
    case 0x10041877u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_40 = rd32(sp0 - 0x40u); goto E_10041877;
    case 0x10041899u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_40 = rd32(sp0 - 0x40u); goto E_10041899;
    case 0x100418ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_40 = rd32(sp0 - 0x40u); goto E_100418dd;
    case 0x1004198fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); goto E_1004198f;
    case 0x100419d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); goto E_100419d6;
    case 0x100419dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_100419da;
    case 0x100419f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_100419f4;
    default: break;
    }
#endif

    COW_AT(100412b0)
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_edi);
    if (rd32(self + 0x104u) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        esi = in_esi;
        loc_14 = in_ebx;
        loc_18 = in_ebp;
        loc_1c = in_edi;
        goto L_100419f4;
    }
    COW_AT(100412c6)
    if (rd8(self + 0x179u) == 0u) goto L_100412db;
    eax = (in_eax & 0xffffff00u) | rd8(self + 0x179u);
    COW_AT(100412d0)
    g->esp = sp0;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return cow_tailcall(g, COW_IMG(0x10040c20u), eax, self, in_edx);
L_100412db: ;
    COW_AT(100412db)
    if (rd32(self + 0x104u) == 0u)
    {
        eax = rd32(self + 0x104u);
    COW_AT(100412ed)
        wr32(sp0 - 0xcu, 0u);
        ebx = 0u;
    }
    else
    {
        eax = rd32(self + 0x104u);
    COW_AT(100412e5)
        wr32(sp0 - 0xcu, rd32(eax));
        ebx = rd32(eax);
    }
    COW_AT(100412f3)
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t1 = cow_call_regs(g, COW_IMG(0x1003fcf0u), eax, ebx, g->edx, 1, 0);
    t2 = g->edx;
    if (rd32(t1 + 4u) == 0u)
    {
        eax = t1;
        edx = t2;
        esi = in_esi;
        loc_14 = in_ebx;
        loc_18 = in_ebp;
        loc_1c = in_edi;
    }
    else
    {
        edx = t2;
    COW_AT(10041303)
        if (rd32(self + 0x104u) == 0u)
        {
    COW_AT(10041315)
            wr32(sp0 - 0x10u, 0u);
        }
        else
        {
            eax = rd32(self + 0x104u);
    COW_AT(1004130d)
            wr32(sp0 - 0x10u, rd32(eax));
        }
    COW_AT(10041319)
        wr32(sp0 - 0x20u, in_esi);
        wr32(sp0 - 0x24u, 1u);
        wr32(sp0 - 0x28u, 7u);
        t3 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        wr32(sp0 - 0x2cu, t3);
        g->esp = sp0 - 0x2cu;
        cow_thiscall(g, rd32(rd32(t3) + 0xc8u), rd32(t3), 0);
        wr32(sp0 - 0x30u, rd32(COW_IMG(0x1047bc0cu)));
        wr32(sp0 - 0x34u, 0x3cu);
        t4 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        wr32(sp0 - 0x38u, t4);
        g->edx = rd32(t4);
        t5 = rd32(t4);
        t6 = rd32(COW_IMG(0x1047bc0cu));
        g->esp = sp0 - 0x38u;
        cow_thiscall(g, rd32(t5 + 0xc8u), t6, 0);
        t7 = g->edx;
        t8 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
        t9 = rd32(COW_IMG(0x1047cf7cu));
        t10 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
        wr32(t9 + 0xa90u, t8);
        wr32(sp0 - 0x20u, t10);
        if (!(rd8(self + 0x198u) & 1u))
        {
            ecx = rd32(COW_IMG(0x1047cf7cu));
            edx = t7;
            esi = t10;
            loc_20 = t10;
    COW_AT(1004142b)
            wr32(sp0 - 0x3cu, 0u);
            wr32(sp0 - 0x40u, 0xbfc90fdbu);
            wr32(sp0 - 0x44u, 0u);
            wr32(sp0 - 0x48u, esi);
            g->esp = sp0 - 0x48u;
            cow_thiscall(g, rd32(rd32(ecx) + 0x58u), ecx, 0);
            loc_40 = 0xbfc90fdbu;
        }
        else
        {
            eax = (t9 & 0xffffff00u) | rd8(self + 0x198u);
            ecx = rd32(COW_IMG(0x1047cf7cu));
            esi = t10;
            loc_20 = t10;
    COW_AT(10041380)
            d11 = (double)(float)-(double)rdf32(self + 0x1a4u);
            wrf32(sp0 - 0x3cu, (float)d11);
            d12 = fr(g, (double)rdf32(self + 0x1a0u) + (double)rdf32(COW_IMG(0x1032addcu)));
            wrf32(sp0 - 0x40u, (float)(double)(float)-d12);
            d13 = (double)(float)-(double)rdf32(self + 0x19cu);
            wrf32(sp0 - 0x44u, (float)d13);
            wr32(sp0 - 0x48u, esi);
            g->edx = rd32(ecx);
            t14 = rd32(ecx);
            g->esp = sp0 - 0x48u;
            cow_thiscall(g, rd32(t14 + 0x58u), ecx, 0);
            t15 = g->edx;
            if ((rd8(self + 0x198u) & 2u) == 0u)
            {
                loc_40 = rd32(sp0 - 0x40u);
            }
            else
            {
                edx = t15;
    COW_AT(100413bb)
                t16 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
                t17 = rd32(COW_IMG(0x1047cf7cu));
                t18 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
                wr32(t17 + 0xa90u, t16);
                g->eax = t17;
                g->esp = sp0 - 0x48u;
                t19 = cow_stdcall(g, COW_IMG(0x10015230u), 0);
                esi = t19;
                edi = t18;
                ecx = 0x10u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                wr32(t18 + 0x30u, 0u);
                wr32(t18 + 0x34u, 0u);
                wr32(t18 + 0x38u, 0u);
                t20 = rd32(sp0 - 0x30u);
                wr32(t18 + 0x3cu, 0x3f800000u);
                wr32(sp0 - 0x4cu, t18);
                wr32(sp0 - 0x50u, t20);
                wr32(sp0 - 0x54u, t20);
                cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x24u), rd32(COW_IMG(0x1047cf7cu)), 3, t20, t20, t18);
                t21 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
                t22 = rd32(COW_IMG(0x1047cf7cu));
                t23 = rd32(sp0 - 0x30u);
                wr32(t22 + 0xa90u, t21);
                wr32(t21 * 4u + t22 + 0xa10u, t18);
                ebx = rd32(sp0 - 0x34u);
                esi = t23;
                loc_40 = rd32(sp0 - 0x40u);
            }
        }
    COW_AT(10041438)
        wr32(sp0 - 0x4cu, esi);
        t24 = (uint32_t)(int8_t)rd8(self + 0x1bdu) + 0x10u;
        wr32(sp0 - 0x50u, t24);
        t25 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        wr32(sp0 - 0x54u, t25);
        g->eax = t25;
        g->edx = rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu));
        t26 = rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu));
        g->esp = sp0 - 0x54u;
        t27 = cow_thiscall(g, rd32(t26 + 0x94u), t24, 0);
        t28 = g->edx;
        if (rd8(rd32(sp0 - 0x44u) + 0x34u) != 0u)
        {
            eax = (t27 & 0xffffff00u) | rd8(rd32(sp0 - 0x44u) + 0x34u);
            edx = t28;
    COW_AT(10041518)
            if (rd8(self + 0x16cu) == 0x64u) goto L_10041533;
    COW_AT(10041521)
            if (!(rd32(self + 0x10cu) >> 0x1cu & 1u))
            {
                eax = rd32(self + 0x10cu) >> 0x1cu;
                esi = 6u;
                goto L_10041538;
            }
            eax = rd32(self + 0x10cu) >> 0x1cu;
L_10041533: ;
    COW_AT(10041533)
            esi = 2u;
L_10041538: ;
    COW_AT(10041538)
            if ((rd8(self + 0x1b8u) & 2u) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047ba18u));
    COW_AT(1004160b)
                if ((eax & 4u) == 0u)
                {
    COW_AT(1004160f)
                    t58 = rd8(COW_IMG(0x1047ba18u));
                    wr8(COW_IMG(0x1047ba18u), (uint8_t)(t58 | 4u));
                    g->eax = eax;
                    g->edx = (edx & 0xffffff00u) | t58 | 4u;
                    g->esp = sp0 - 0x54u;
                    t59 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047ba2cu), 0);
                    t60 = g->ecx;
                    t61 = g->edx;
                    wr32(sp0 - 0x58u, COW_IMG(0x10041a10u));
                    g->edx = t61;
                    t62 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10041a10u));
                    t63 = g->edx;
                    eax = t62;
                    edx = t63;
                }
    COW_AT(10041635)
                wr32(sp0 - 0x58u, COW_IMG(0x10352b40u));
                wr32(sp0 - 0x5cu, COW_IMG(0x10352c60u));
                g->esp = sp0 - 0x5cu;
                cow_fastcall(g, COW_IMG(0x1006ae30u), COW_IMG(0x1047ba2cu), edx, 0);
                t64 = g->ecx;
                wr32(sp0 - 0x60u, esi);
                wr32(sp0 - 0x64u, 4u);
                wr32(sp0 - 0x68u, 1u);
                t65 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                wr32(sp0 - 0x6cu, t65);
                g->edx = rd32(t65);
                t66 = rd32(t65);
                g->esp = sp0 - 0x60u;
                cow_thiscall(g, rd32(t66 + 0xfcu), t64, 3, t65, 1u, 4u);
                t67 = g->edx;
                if ((rd8(self + 0x198u) & 8u) == 0u)
                {
                    eax = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                    ecx = rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu));
                    edx = t67;
    COW_AT(10041689)
                    wr32(sp0 - 0x64u, 1u);
                    wr32(sp0 - 0x68u, 0xdu);
                    wr32(sp0 - 0x6cu, 1u);
                    wr32(sp0 - 0x70u, eax);
                    g->esp = sp0 - 0x70u;
                    cow_thiscall(g, rd32(ecx + 0xfcu), ecx, 0);
                    t69 = g->ecx;
                    wr32(sp0 - 0x74u, 1u);
                    ecx = t69;
                    loc_64 = 1u;
                    loc_74 = 1u;
                }
                else
                {
                    eax = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                    ecx = rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu));
                    edx = t67;
    COW_AT(10041678)
                    wr32(sp0 - 0x64u, 3u);
                    wr32(sp0 - 0x68u, 0xdu);
                    wr32(sp0 - 0x6cu, 1u);
                    wr32(sp0 - 0x70u, eax);
                    g->esp = sp0 - 0x70u;
                    cow_thiscall(g, rd32(ecx + 0xfcu), ecx, 0);
                    t68 = g->ecx;
                    wr32(sp0 - 0x74u, 3u);
                    ecx = t68;
                    loc_64 = 3u;
                    loc_74 = 3u;
                }
    COW_AT(10041698)
                wr32(sp0 - 0x78u, 0xeu);
                wr32(sp0 - 0x7cu, 1u);
                t70 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                wr32(sp0 - 0x80u, t70);
                g->edx = rd32(t70);
                t71 = rd32(t70);
                g->esp = sp0 - 0x74u;
                cow_thiscall(g, rd32(t71 + 0xfcu), ecx, 3, t70, 1u, 0xeu);
                t72 = g->edx;
                edx = t72;
                loc_70 = rd32(sp0 - 0x70u);
                loc_74 = rd32(sp0 - 0x74u);
                loc_68 = 0xdu;
                loc_6c = 1u;
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047ba18u));
    COW_AT(1004154a)
                if ((eax & 2u) == 0u)
                {
    COW_AT(1004154e)
                    wr8(COW_IMG(0x1047ba18u), (uint8_t)(eax | 2u));
                    g->eax = eax;
                    g->edx = (edx & 0xffffff00u) | (uint8_t)(eax | 2u);
                    g->esp = sp0 - 0x54u;
                    t43 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047ba44u), 0);
                    t44 = g->ecx;
                    t45 = g->edx;
                    wr32(sp0 - 0x58u, COW_IMG(0x10041a20u));
                    g->edx = t45;
                    t46 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10041a20u));
                    t47 = g->edx;
                    eax = t46;
                    edx = t47;
                }
    COW_AT(10041570)
                wr32(sp0 - 0x58u, COW_IMG(0x103529c8u));
                wr32(sp0 - 0x5cu, COW_IMG(0x10352b24u));
                g->esp = sp0 - 0x5cu;
                cow_fastcall(g, COW_IMG(0x1006ae30u), COW_IMG(0x1047ba44u), edx, 0);
                t48 = g->edx;
                wr32(sp0 - 0x60u, esi);
                wr32(sp0 - 0x64u, 4u);
                wr32(sp0 - 0x68u, 1u);
                t49 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                wr32(sp0 - 0x6cu, t49);
                t50 = rd32(t49);
                g->esp = sp0 - 0x6cu;
                cow_thiscall(g, rd32(t50 + 0xfcu), t50, 0);
                t51 = g->ecx;
                if ((rd8(self + 0x198u) & 8u) == 0u)
                {
                    eax = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                    ecx = t51;
                    edx = rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu));
    COW_AT(100415df)
                    wr32(sp0 - 0x70u, 1u);
                    wr32(sp0 - 0x74u, 0xdu);
                    wr32(sp0 - 0x78u, 2u);
                    wr32(sp0 - 0x7cu, eax);
                    g->edx = edx;
                    g->esp = sp0 - 0x64u;
                    cow_thiscall(g, rd32(edx + 0xfcu), ecx, 6, eax, 2u, 0xdu, 1u, rd32(sp0 - 0x6cu), 1u);
                    t55 = g->edx;
                    wr32(sp0 - 0x68u, 1u);
                    wr32(sp0 - 0x6cu, 0xeu);
                    wr32(sp0 - 0x70u, 2u);
                    t56 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                    wr32(sp0 - 0x74u, t56);
                    g->edx = t55;
                    g->esp = sp0 - 0x74u;
                    cow_thiscall(g, rd32(rd32(t56) + 0xfcu), rd32(t56), 0);
                    t57 = g->edx;
                    edx = t57;
                    loc_70 = 2u;
                    loc_74 = rd32(sp0 - 0x74u);
                    loc_68 = 1u;
                    loc_6c = 0xeu;
                }
                else
                {
                    eax = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                    ecx = t51;
                    edx = rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu));
    COW_AT(100415b3)
                    wr32(sp0 - 0x70u, 3u);
                    wr32(sp0 - 0x74u, 0xdu);
                    wr32(sp0 - 0x78u, 2u);
                    wr32(sp0 - 0x7cu, eax);
                    g->edx = edx;
                    g->esp = sp0 - 0x7cu;
                    cow_thiscall(g, rd32(edx + 0xfcu), ecx, 0);
                    t52 = g->edx;
                    wr32(sp0 - 0x80u, 3u);
                    wr32(sp0 - 0x84u, 0xeu);
                    wr32(sp0 - 0x88u, 2u);
                    t53 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                    wr32(sp0 - 0x8cu, t53);
                    g->edx = t52;
                    g->esp = sp0 - 0x74u;
                    cow_thiscall(g, rd32(rd32(t53) + 0xfcu), rd32(t53), 6, t53, 2u, 0xeu, 3u, rd32(sp0 - 0x7cu), 2u);
                    t54 = g->edx;
                    edx = t54;
                    loc_70 = 3u;
                    loc_74 = 0xdu;
                    loc_68 = 1u;
                    loc_6c = rd32(sp0 - 0x6cu);
                }
            }
    COW_AT(100416b0)
            if ((rd8(self + 0x17bu) & 3u) == 0u)
            {
    COW_AT(100417a7)
                t91 = rd32(COW_IMG(0x1047cf7cu)) + 0x810u;
                wr32(sp0 - 0x78u, t91);
                t92 = (uint32_t)(int8_t)rd8(self + 0x1bcu) + 0x10u;
                wr32(sp0 - 0x7cu, t92);
                t93 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                wr32(sp0 - 0x80u, t93);
                g->eax = t93;
                g->edx = t92;
                g->esp = sp0 - 0x5cu;
                t94 = cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu)) + 0x94u), rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu)), 9, t93, t92, t91, loc_74, loc_70, loc_6c, loc_68, rd32(sp0 - 0x64u), rd32(sp0 - 0x60u));
                t95 = g->edx;
                eax = t94;
                edx = t95;
                loc_48 = rd32(sp0 - 0x48u);
                loc_4c = rd32(sp0 - 0x4cu);
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
            }
            else
            {
    COW_AT(100416bd)
                t73 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
                t74 = rd32(COW_IMG(0x1047cf7cu));
                t75 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
                wr32(t74 + 0xa90u, t73);
                g->esp = sp0 - 0x74u;
                cow_thiscall(g, COW_IMG(0x100746a0u), t75, 0);
                d76 = (double)rdf32(self + 0x120u);
                wrf32(t75 + 0x20u, (float)d76);
                d77 = (double)rdf32(self + 0x124u);
                wrf32(t75 + 0x24u, (float)d77);
                wr32(sp0 - 0x78u, 1u);
                wr32(sp0 - 0x7cu, 0xdu);
                t78 = (uint32_t)(int8_t)rd8(self + 0x1bcu);
                wr32(sp0 - 0x80u, t78);
                t79 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                wr32(sp0 - 0x84u, t79);
                g->esp = sp0 - 0x5cu;
                cow_thiscall(g, rd32(rd32(t79) + 0xfcu), rd32(t79), 10, t79, t78, 0xdu, 1u, rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u));
                wr32(sp0 - 0x60u, 1u);
                wr32(sp0 - 0x64u, 0xeu);
                t80 = (uint32_t)(int8_t)rd8(self + 0x1bcu);
                wr32(sp0 - 0x68u, t80);
                t81 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                wr32(sp0 - 0x6cu, t81);
                g->esp = sp0 - 0x44u;
                cow_thiscall(g, rd32(rd32(t81) + 0xfcu), rd32(t81), 10, t81, t80, 0xeu, 1u, rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u));
                wr32(sp0 - 0x48u, 0u);
                wr32(sp0 - 0x4cu, 0xbu);
                t82 = (uint32_t)(int8_t)rd8(self + 0x1bcu);
                wr32(sp0 - 0x50u, t82);
                t83 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                wr32(sp0 - 0x54u, t83);
                g->esp = sp0 - 0x4cu;
                cow_thiscall(g, rd32(rd32(t83) + 0xfcu), rd32(t83), 2, t83, t82);
                wr32(sp0 - 0x50u, 2u);
                wr32(sp0 - 0x54u, 0x18u);
                t84 = (uint32_t)(int8_t)rd8(self + 0x1bcu);
                wr32(sp0 - 0x58u, t84);
                t85 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                wr32(sp0 - 0x5cu, t85);
                g->edx = t84;
                g->esp = sp0 - 0x5cu;
                cow_thiscall(g, rd32(rd32(t85) + 0xfcu), rd32(t85), 0);
                t86 = g->edx;
                wr32(sp0 - 0x60u, t75);
                t87 = (uint32_t)(int8_t)rd8(self + 0x1bcu) + 0x10u;
                wr32(sp0 - 0x64u, t87);
                g->edx = t86;
                cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc8u), 2, t87, t75);
                t88 = g->edx;
                t89 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
                t90 = rd32(COW_IMG(0x1047cf7cu));
                wr32(t90 + 0xa90u, t89);
                wr32(t89 * 4u + t90 + 0xa10u, t75);
                eax = t90;
                edx = t88;
                loc_48 = 0u;
                loc_4c = 0xbu;
                loc_50 = 2u;
                loc_54 = 0x18u;
            }
    COW_AT(100417d4)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x5cu;
            t96 = cow_thiscall(g, COW_IMG(0x1003fce0u), ebx, 0);
            t97 = g->edx;
            g->edx = t97;
            t98 = cow_call_regs(g, COW_IMG(0x1003fcf0u), t96, rd32(sp0 - 0x48u), g->edx, 1, 0);
            t99 = g->edx;
            if (rd8(rd32(sp0 - 0x4cu) + 0x34u) == 0u)
            {
                eax = t98;
                edx = (t99 & 0xffffff00u) | rd8(rd32(sp0 - 0x4cu) + 0x34u);
                edi = 0u;
                loc_40 = rd32(sp0 - 0x40u);
            }
            else
            {
                eax = t98;
                ebx = t96;
    COW_AT(100417f5)
                wr32(sp0 - 0x40u, eax);
                esi = 0u;
                edi = 0u;
                loc_40 = eax;
L_100417f9: ;
    COW_AT(100417f9)
                t100 = rd32(self + 0x148u);
                wr32(sp0 - 0x60u, t100);
                t101 = rd32(self + 0x144u);
                wr32(sp0 - 0x64u, t101);
                t102 = rd32(self + 0x140u);
                wr32(sp0 - 0x68u, t102);
                t103 = (uint32_t)(int8_t)rd8(self + 0x1bcu);
                wr32(sp0 - 0x6cu, t103);
                g->ebx = ebx;
                g->edx = t103;
                g->esp = sp0 - 0x5cu;
                cow_call_regs(g, COW_IMG(0x10075700u), t101, loc_40, g->edx, 0, 4, t103, t102, t101, t100);
                t104 = g->edx;
                wr32(sp0 - 0x60u, 0xffffffffu);
                wr32(sp0 - 0x64u, 0u);
                wr32(sp0 - 0x68u, 4u);
                t105 = rd16(ebx + esi * 2u);
                wr32(sp0 - 0x6cu, t105);
                wr32(sp0 - 0x70u, edi);
                g->edx = t104;
                t106 = cow_call_regs(g, COW_IMG(0x1003fcf0u), t105, rd32(sp0 - 0x48u), g->edx, 1, 5, edi, t105, 4u, 0u, 0xffffffffu);
                t107 = g->edx;
                cow_thiscall(g, COW_IMG(0x10043f40u), rd32(t106 + 4u), 5, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), 4u, 0u, 0xffffffffu);
                t108 = rd32(sp0 - 0x40u) + 0x10u;
                wr32(sp0 - 0x40u, t108);
                if ((int32_t)(esi + 1u) < (int32_t)rd8(rd32(sp0 - 0x4cu) + 0x34u))
                {
                    edi = edi + rd16(ebx + esi * 2u) * 3u;
                    esi = esi + 1u;
                    loc_40 = t108;
                    goto L_100417f9;
                }
                eax = rd32(sp0 - 0x4cu);
                edx = rd8(rd32(sp0 - 0x4cu) + 0x34u);
                edi = edi + rd16(ebx + esi * 2u) * 3u;
                loc_40 = t108;
            }
    COW_AT(10041863)
            if (rd8(rd32(sp0 - 0x4cu) + 0x35u) != 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(rd32(sp0 - 0x4cu) + 0x35u);
    COW_AT(1004186e)
                if ((rd8(COW_IMG(0x1047ba18u)) & 8u) != 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047ba18u));
                }
                else
                {
                    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047ba18u));
    COW_AT(10041877)
                    wr8(COW_IMG(0x1047ba18u), (uint8_t)(eax | 8u));
                    g->eax = eax;
                    g->edx = (edx & 0xffffff00u) | (uint8_t)(eax | 8u);
                    g->esp = sp0 - 0x5cu;
                    t109 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047ba38u), 0);
                    t110 = g->ecx;
                    t111 = g->edx;
                    wr32(sp0 - 0x60u, COW_IMG(0x10041a00u));
                    g->edx = t111;
                    t112 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10041a00u));
                    t113 = g->edx;
                    eax = t112;
                    edx = t113;
                    loc_40 = rd32(sp0 - 0x40u);
                }
    COW_AT(10041899)
                wr32(sp0 - 0x60u, COW_IMG(0x10352c78u));
                g->esp = sp0 - 0x5cu;
                cow_fastcall(g, COW_IMG(0x1006af90u), COW_IMG(0x1047ba38u), edx, 1, COW_IMG(0x10352c78u));
                wr32(sp0 - 0x60u, 0xffffffffu);
                wr32(sp0 - 0x64u, 0u);
                t114 = rd16(rd32(sp0 - 0x4cu) + 0x36u);
                q115 = (int64_t)cow_muls(0x55555556u, edi);
                wr32(sp0 - 0x68u, 4u);
                t116 = t114 - (cow_qhi(q115) + (cow_qhi(q115) >> 0x1fu));
                wr32(sp0 - 0x6cu, t116);
                wr32(sp0 - 0x70u, edi);
                g->edx = cow_qhi(q115) + (cow_qhi(q115) >> 0x1fu);
                t117 = cow_call_regs(g, COW_IMG(0x1003fcf0u), cow_qhi(q115) >> 0x1fu, rd32(sp0 - 0x48u), g->edx, 1, 5, edi, t116, 4u, 0u, 0xffffffffu);
                t118 = g->edx;
                g->edx = t118;
                cow_thiscall(g, COW_IMG(0x10043f40u), rd32(t117 + 4u), 5, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), 4u, 0u, 0xffffffffu);
                t119 = g->edx;
                edx = t119;
                loc_40 = rd32(sp0 - 0x40u);
            }
    COW_AT(100418dd)
            wr32(sp0 - 0x60u, 1u);
            wr32(sp0 - 0x64u, 0x1cu);
            wr32(sp0 - 0x68u, 0u);
            t120 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            wr32(sp0 - 0x6cu, t120);
            t121 = rd32(t120);
            g->esp = sp0 - 0x6cu;
            cow_thiscall(g, rd32(t121 + 0xfcu), t121, 0);
            t122 = g->ecx;
            wr32(sp0 - 0x70u, 1u);
            wr32(sp0 - 0x74u, 1u);
            wr32(sp0 - 0x78u, 0u);
            t123 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            wr32(sp0 - 0x7cu, t123);
            g->edx = rd32(t123);
            t124 = rd32(t123);
            g->esp = sp0 - 0x64u;
            cow_thiscall(g, rd32(t124 + 0xfcu), t122, 6, t123, 0u, 1u, 1u, rd32(sp0 - 0x6cu), 0u);
            t125 = g->edx;
            wr32(sp0 - 0x68u, 1u);
            wr32(sp0 - 0x6cu, 4u);
            wr32(sp0 - 0x70u, 0u);
            t126 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            wr32(sp0 - 0x74u, t126);
            g->esp = sp0 - 0x50u;
            cow_thiscall(g, rd32(rd32(t126) + 0xfcu), rd32(t126), 9, t126, 0u, 4u, 1u, 0x1cu, 1u, rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u));
            wr32(sp0 - 0x54u, 0u);
            wr32(sp0 - 0x58u, 0xbu);
            t127 = (uint32_t)(int8_t)rd8(self + 0x1bdu);
            wr32(sp0 - 0x5cu, t127);
            t128 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            wr32(sp0 - 0x60u, t128);
            g->esp = sp0 - 0x4cu;
            cow_thiscall(g, rd32(rd32(t128) + 0xfcu), t127, 5, t128, t127, 0xbu, 0u, rd32(sp0 - 0x50u));
            wr32(sp0 - 0x50u, 0u);
            wr32(sp0 - 0x54u, 0x18u);
            t129 = (uint32_t)(int8_t)rd8(self + 0x1bdu);
            wr32(sp0 - 0x58u, t129);
            t130 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            wr32(sp0 - 0x5cu, t130);
            g->esp = sp0 - 0x20u;
            cow_thiscall(g, rd32(rd32(t130) + 0xfcu), t129, 15, t130, t129, 0x18u, 0u, rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
            t131 = g->ecx;
            wr32(sp0 - 0x24u, 0u);
            wr32(sp0 - 0x28u, 0x8fu);
            t132 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            wr32(sp0 - 0x2cu, t132);
            g->edx = rd32(t132);
            t133 = rd32(t132);
            cow_thiscall(g, rd32(t133 + 0xc8u), t131, 3, t132, 0x8fu, 0u);
            t134 = g->edx;
            if ((rd8(self + 0x17bu) & 3u) == 0u)
            {
                edx = t134;
            }
            else
            {
    COW_AT(1004198f)
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x28u, 0x18u);
                t135 = (uint32_t)(int8_t)rd8(self + 0x1bcu);
                wr32(sp0 - 0x2cu, t135);
                t136 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                wr32(sp0 - 0x30u, t136);
                g->esp = sp0 - 0x20u;
                cow_thiscall(g, rd32(rd32(t136) + 0xfcu), rd32(t136), 4, t136, t135, 0x18u, 0u);
                t137 = rd32(COW_IMG(0x1047cf7cu)) + 0x810u;
                wr32(sp0 - 0x24u, t137);
                t138 = (uint32_t)(int8_t)rd8(self + 0x1bcu) + 0x10u;
                wr32(sp0 - 0x28u, t138);
                g->edx = rd32(COW_IMG(0x1047bfa8u));
                t139 = rd32(COW_IMG(0x1047bfa8u));
                cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(t139 + 0xdc8u), 2, t138, t137);
                t140 = g->edx;
                edx = t140;
            }
    COW_AT(100419d6)
            esi = rd32(sp0 - 8u);
            loc_1c = rd32(sp0 - 0x1cu);
            loc_20 = rd32(sp0 - 0x20u);
        }
        else
        {
            eax = (t27 & 0xffffff00u) | rd8(rd32(sp0 - 0x44u) + 0x34u);
            edx = t28;
            edi = rd32(sp0 - 0x44u);
    COW_AT(10041468)
            if (rd8(COW_IMG(0x1047ba18u)) & 1u)
            {
                eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047ba18u));
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047ba18u));
    COW_AT(10041471)
                wr8(COW_IMG(0x1047ba18u), (uint8_t)(eax | 1u));
                g->eax = eax;
                g->edx = (edx & 0xffffff00u) | (uint8_t)(eax | 1u);
                g->esp = sp0 - 0x54u;
                t29 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047bab4u), 0);
                t30 = g->ecx;
                t31 = g->edx;
                wr32(sp0 - 0x58u, COW_IMG(0x10041a30u));
                g->edx = t31;
                t32 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10041a30u));
                t33 = g->edx;
                eax = t32;
                edx = t33;
            }
    COW_AT(10041493)
            wr32(sp0 - 0x58u, COW_IMG(0x103528f0u));
            wr32(sp0 - 0x5cu, COW_IMG(0x103529b0u));
            g->esp = sp0 - 0x44u;
            cow_fastcall(g, COW_IMG(0x1006ae30u), COW_IMG(0x1047bab4u), edx, 6, COW_IMG(0x103529b0u), COW_IMG(0x103528f0u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u));
            t34 = g->ecx;
            if ((rd8(self + 0x198u) & 8u) == 0u)
            {
                eax = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                ecx = t34;
                edx = rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu));
    COW_AT(100414ce)
                wr32(sp0 - 0x48u, 1u);
                wr32(sp0 - 0x4cu, 0xdu);
                wr32(sp0 - 0x50u, 1u);
                wr32(sp0 - 0x54u, eax);
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                cow_thiscall(g, rd32(edx + 0xfcu), ecx, 16, eax, 1u, 0xdu, 1u, rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
                t36 = g->edx;
                wr32(sp0 - 0x18u, 1u);
                edx = t36;
                loc_18 = 1u;
            }
            else
            {
                eax = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                ecx = t34;
                edx = rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu));
    COW_AT(100414bd)
                wr32(sp0 - 0x48u, 3u);
                wr32(sp0 - 0x4cu, 0xdu);
                wr32(sp0 - 0x50u, 1u);
                wr32(sp0 - 0x54u, eax);
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                cow_thiscall(g, rd32(edx + 0xfcu), ecx, 16, eax, 1u, 0xdu, 3u, rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
                t35 = g->edx;
                wr32(sp0 - 0x18u, 3u);
                edx = t35;
                loc_18 = 3u;
            }
    COW_AT(100414dd)
            wr32(sp0 - 0x1cu, 0xeu);
            wr32(sp0 - 0x20u, 1u);
            t37 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
            wr32(sp0 - 0x24u, t37);
            g->eax = t37;
            g->esp = sp0 - 0x20u;
            t38 = cow_thiscall(g, rd32(rd32(t37) + 0xfcu), rd32(t37), 1, t37);
            wr32(sp0 - 0x24u, 0xffffffffu);
            wr32(sp0 - 0x28u, 0u);
            wr32(sp0 - 0x2cu, 4u);
            t39 = rd16(edi + 0x36u);
            wr32(sp0 - 0x30u, t39);
            wr32(sp0 - 0x34u, 0u);
            g->edx = t39;
            t40 = cow_call_regs(g, COW_IMG(0x1003fcf0u), t38, ebx, g->edx, 1, 5, 0u, t39, 4u, 0u, 0xffffffffu);
            t41 = g->edx;
            g->edx = t41;
            cow_thiscall(g, COW_IMG(0x10043f40u), rd32(t40 + 4u), 5, 0u, rd32(sp0 - 0x30u), 4u, 0u, 0xffffffffu);
            t42 = g->edx;
            edx = t42;
            loc_1c = 0xeu;
            loc_20 = 1u;
        }
    COW_AT(100419da)
        t141 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
        t142 = rd32(COW_IMG(0x1047cf7cu));
        wr32(t142 + 0xa90u, t141);
        wr32(t141 * 4u + t142 + 0xa10u, esi);
        eax = t142;
        esi = loc_20;
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
    }
L_100419f4: ;
    COW_AT(100419f4)
    g->ebx = loc_14;
    g->esi = esi;
    g->edi = loc_1c;
    g->ebp = loc_18;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100412b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100412c6u:
    {
        uint32_t ebx;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = self;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100412d0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100412dbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100412e5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100412edu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100412f3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10041303u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1004130du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10041315u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10041319u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10041380u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x38u;
        wr32(sp0 - 0x34u, 0x3cu);
        wr32(sp0 - 0x28u, 7u);
        wr32(sp0 - 0x24u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x100413bbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1004142bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x38u;
        g->edi = 0u;
        wr32(sp0 - 0x34u, 0x3cu);
        wr32(sp0 - 0x28u, 7u);
        wr32(sp0 - 0x24u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10041438u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x10041468u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x10041471u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x10041493u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x100414bdu:
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
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x100414ceu:
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
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x100414ddu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10041518u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x10041521u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x10041533u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x10041538u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x1004154au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x1004154eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x10041570u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x100415b3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x68u, 1u);
        wr32(sp0 - 0x64u, 4u);
        wr32(sp0 - 0x5cu, COW_IMG(0x10352b24u));
        wr32(sp0 - 0x58u, COW_IMG(0x103529c8u));
        (void)sp0;
        return 1;
    }
    case 0x100415dfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x68u, 1u);
        wr32(sp0 - 0x64u, 4u);
        wr32(sp0 - 0x5cu, COW_IMG(0x10352b24u));
        wr32(sp0 - 0x58u, COW_IMG(0x103529c8u));
        (void)sp0;
        return 1;
    }
    case 0x1004160bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x1004160fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x10041635u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x10041678u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_64;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x5cu, COW_IMG(0x10352c60u));
        wr32(sp0 - 0x58u, COW_IMG(0x10352b40u));
        (void)sp0;
        return 1;
    }
    case 0x10041689u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_64;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x5cu, COW_IMG(0x10352c60u));
        wr32(sp0 - 0x58u, COW_IMG(0x10352b40u));
        (void)sp0;
        return 1;
    }
    case 0x10041698u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_64;
        uint32_t loc_74;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_74 = rd32(sp0 - 0x74u);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x74u;
        wr32(sp0 - 0x6cu, 1u);
        wr32(sp0 - 0x68u, 0xdu);
        (void)sp0;
        return 1;
    }
    case 0x100416b0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x100416bdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x100417a7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x100417d4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x100417f5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        g->esp = sp0 - 0x5cu;
        g->esi = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100417f9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_40;
        uint32_t loc_64;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10041863u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_40;
        uint32_t loc_64;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004186eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_40;
        uint32_t loc_64;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10041877u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_40;
        uint32_t loc_64;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10041899u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_40;
        uint32_t loc_64;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x100418ddu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_40;
        uint32_t loc_64;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004198fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100419d6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100419dau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100419f4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100412b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100412b0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
