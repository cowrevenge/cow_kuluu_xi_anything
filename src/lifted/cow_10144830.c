/* f_0x10144830 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10144830(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_3c;
    uint32_t loc_44;
    uint32_t sf;
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
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 124u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10144852u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; sf = g->sf; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); g->ebx = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x2cu); goto E_10144852;
    case 0x1014485fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; sf = g->sf; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); g->ebx = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x2cu); goto E_1014485f;
    case 0x1014486cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; sf = g->sf; goto E_1014486c;
    case 0x1014487au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; sf = g->sf; goto E_1014487a;
    case 0x10144881u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; sf = g->sf; goto E_10144881;
    case 0x101448b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; sf = g->sf; loc_30 = rd32(sp0 - 0x30u); goto E_101448b1;
    case 0x101448bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; in_edi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x34u); goto E_101448bc;
    case 0x101448c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_101448c5;
    case 0x101448d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_101448d0;
    case 0x101448d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_101448d5;
    case 0x10144915u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_10144915;
    case 0x10144928u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; goto E_10144928;
    case 0x10144949u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_3c = rd32(sp0 - 0x3cu); goto E_10144949;
    case 0x101449d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_3c = rd32(sp0 - 0x3cu); goto E_101449d2;
    case 0x101449f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_3c = rd32(sp0 - 0x3cu); goto E_101449f3;
    case 0x10144ab6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_3c = rd32(sp0 - 0x3cu); goto E_10144ab6;
    case 0x10144accu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_24 = rd32(sp0 - 0x24u); goto E_10144acc;
    case 0x10144aeau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_3c = rd32(sp0 - 0x3cu); loc_24 = rd32(sp0 - 0x24u); goto E_10144aea;
    case 0x10144b2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_3c = rd32(sp0 - 0x3cu); goto E_10144b2f;
    case 0x10144b49u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_3c = rd32(sp0 - 0x3cu); goto E_10144b49;
    case 0x10144b4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_3c = rd32(sp0 - 0x3cu); goto E_10144b4b;
    case 0x10144b63u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_3c = rd32(sp0 - 0x3cu); goto E_10144b63;
    case 0x10144b72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_3c = rd32(sp0 - 0x3cu); goto E_10144b72;
    case 0x10144b7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_3c = rd32(sp0 - 0x3cu); goto E_10144b7f;
    case 0x10144b9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_3c = rd32(sp0 - 0x3cu); goto E_10144b9c;
    case 0x10144ba1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_3c = rd32(sp0 - 0x3cu); goto E_10144ba1;
    case 0x10144be8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); goto E_10144be8;
    case 0x10144c32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; loc_44 = rd32(sp0 - 0x44u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_10144c32;
    default: break;
    }
#endif

    COW_AT(10144830)
    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, 1u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x2cu;
    t1 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x34u, 0u);
    g->edx = t3;
    g->esp = sp0 - 0x30u;
    t4 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), t2, 1, 0u);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        edx = t6;
        ebp = in_ebp;
        edi = in_edi;
        loc_28 = in_ebx;
        loc_2c = in_esi;
    }
    else
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        ebx = t4;
    COW_AT(10144852)
        if (!(rd8(COW_IMG(0x10485824u)) & 1u))
        {
            ebp = in_ebp;
            edi = in_edi;
            loc_28 = in_ebx;
            loc_2c = in_esi;
        }
        else
        {
    COW_AT(1014485f)
            g->edx = edx;
            g->esp = sp0 - 0x2cu;
            t7 = cow_call_regs(g, COW_IMG(0x10087b20u), eax, g->ecx, g->edx, 1, 0);
            t8 = g->edx;
            if ((uint8_t)t7 == 0u)
            {
                eax = t7;
                edx = t8;
                ebp = in_ebp;
                edi = in_edi;
                loc_28 = in_ebx;
                loc_2c = in_esi;
            }
            else
            {
                eax = t7;
                edx = t8;
    COW_AT(1014486c)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x2cu;
                t9 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
                t10 = g->ecx;
                t11 = g->edx;
                if (t9 == 0u)
                {
                    eax = t9;
                    ecx = t10;
                    edx = t11;
                }
                else
                {
                    eax = t9;
                    edx = t11;
    COW_AT(1014487a)
                    if (rd32(eax + 0x70u) == 0u)
                    {
                        ecx = rd32(eax + 0x70u);
                    }
                    else
                    {
                        ecx = rd32(eax + 0x70u);
    COW_AT(10144881)
                        wr32(sp0 - 0x30u, 0x80808080u);
                        wr32(sp0 - 0x34u, ecx + 0x235u);
                        t12 = (ecx + 0x235u & 0xffff0000u) | (uint16_t)(rd16(self + 0x1au) + 7u);
                        wr32(sp0 - 0x38u, t12);
                        t13 = ((eax & 0xffff0000u) | rd16(self + 0x18u)) + 4u;
                        wr32(sp0 - 0x3cu, t13);
                        t14 = ((t12 & 0xffff0000u) | (uint16_t)(rd16(self + 0x1cu) - rd16(self + 0x18u))) - 6u;
                        wr32(sp0 - 0x40u, t14);
                        g->eax = (eax & 0xffff0000u) | rd16(self + 0x18u);
                        g->ecx = t14;
                        g->edx = t13;
                        t15 = rd16(self + 0x18u);
                        g->esp = sp0 - 0x2cu;
                        t16 = cow_cdecl(g, COW_IMG(0x101c9d50u), 5, t14, t13, t12, ecx + 0x235u, 0x80808080u);
                        t17 = g->ecx;
                        t18 = g->edx;
                        eax = t16;
                        ecx = t17;
                        edx = t18;
                    }
                }
    COW_AT(101448b1)
                wr32(sp0 - 0x30u, in_ebp);
                wr32(sp0 - 0x34u, in_edi);
                if (rd8(COW_IMG(0x10485640u)) == 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10485640u));
                    loc_30 = in_ebp;
                    loc_34 = in_edi;
                }
                else
                {
                    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10485640u));
    COW_AT(101448bc)
                    g->ecx = ecx;
                    g->esp = sp0 - 0x34u;
                    t19 = cow_call_regs(g, COW_IMG(0x100991d0u), eax, g->ecx, g->edx, 1, 0);
                    t20 = g->ecx;
                    if (t19 == 0u)
                    {
                        eax = t19;
                        ecx = t20;
                        goto L_101448d0;
                    }
                    eax = t19;
                    ecx = t20;
    COW_AT(101448c5)
                    if ((rd8(eax + 3u) & 0x40u) != 0u)
                    {
                        edi = 0x802060a0u;
                        goto L_101448d5;
                    }
L_101448d0: ;
    COW_AT(101448d0)
                    edi = 0x80808080u;
L_101448d5: ;
    COW_AT(101448d5)
                    wr32(sp0 - 0x38u, rd8(COW_IMG(0x10485641u)));
                    wr32(sp0 - 0x3cu, 0x59u);
                    wr32(sp0 - 0x40u, 0xau);
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = rd8(COW_IMG(0x10485641u));
                    t21 = rd8(COW_IMG(0x10485641u));
                    g->esp = sp0 - 0x38u;
                    t22 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x59u);
                    t23 = g->ecx;
                    t24 = g->edx;
                    wr32(sp0 - 0x3cu, t22);
                    wr32(sp0 - 0x40u, sp0 - 0x20u);
                    g->ebx = ebx;
                    g->eax = sp0 - 0x20u;
                    g->edx = t24;
                    g->esp = sp0 - 0x2cu;
                    t25 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, t22, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
                    t26 = g->edx;
                    wr32(sp0 - 0x44u, edi);
                    wr32(sp0 - 0x48u, sp0 - 0x20u);
                    t27 = (t26 & 0xffff0000u) | (uint16_t)(rd16(self + 0x1au) + 0x18u);
                    wr32(sp0 - 0x4cu, t27);
                    t28 = (t25 & 0xffff0000u) | (uint16_t)(rd16(self + 0x18u) + 4u);
                    wr32(sp0 - 0x50u, t28);
                    g->eax = t28;
                    g->edx = t27;
                    t29 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t28, t27, sp0 - 0x20u, edi, sp0 - 0x20u, rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
                    t30 = g->edx;
                    eax = t29;
                    edx = t30;
                    loc_30 = rd32(sp0 - 0x30u);
                    loc_34 = rd32(sp0 - 0x34u);
                }
    COW_AT(10144915)
                wr32(sp0 - 0x38u, 0x17u);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x34u;
                t31 = cow_stdcall(g, COW_IMG(0x10144800u), 1, 0x17u);
                t32 = g->edx;
                if (t31 == 0x80808080u)
                {
                    edx = t32;
                    edi = t31;
                }
                else
                {
                    eax = t31;
                    edi = t31;
    COW_AT(10144928)
                    wr32(sp0 - 0x38u, 0u);
                    wr32(sp0 - 0x3cu, 0u);
                    wr32(sp0 - 0x40u, 0x80808080u);
                    t33 = (uint32_t)(int16_t)rd16(self + 0x1au) + 0x4cu;
                    wr32(sp0 - 0x44u, t33);
                    t34 = (uint32_t)(int16_t)rd16(self + 0x18u) + 0x17u;
                    wr32(sp0 - 0x48u, t34);
                    g->edx = t34;
                    g->esp = sp0 - 0x34u;
                    cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + 0x24u), 5, t34, t33, 0x80808080u, 0u, 0u);
                    t35 = g->edx;
                    edx = t35;
                }
    COW_AT(10144949)
                t36 = rd32(ebx + 0x20u);
                wr32(sp0 - 0x38u, t36);
                wr32(sp0 - 0x3cu, COW_IMG(0x103715c8u));
                wr32(sp0 - 0x40u, sp0 - 0x20u);
                g->ebx = ebx;
                g->eax = t36;
                g->ecx = sp0 - 0x20u;
                g->esp = sp0 - 0x2cu;
                t37 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x103715c8u), t36, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
                t38 = g->ecx;
                wr32(sp0 - 0x44u, 0x3f800000u);
                wr32(sp0 - 0x48u, 0x3f800000u);
                wr32(sp0 - 0x4cu, 1u);
                wr32(sp0 - 0x50u, 0x80808080u);
                wr32(sp0 - 0x54u, sp0 - 0x20u);
                t39 = (t37 & 0xffff0000u) | (uint16_t)(rd16(self + 0x1au) + 0x4bu);
                wr32(sp0 - 0x58u, t39);
                t40 = (t38 & 0xffff0000u) | (uint16_t)(rd16(self + 0x18u) + 0x46u);
                wr32(sp0 - 0x5cu, t40);
                g->esp = sp0 - 0x40u;
                cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t40, 7, t40, t39, sp0 - 0x20u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
                t41 = g->ecx;
                wr32(sp0 - 0x60u, rd32(COW_IMG(0x10485638u)));
                wr32(sp0 - 0x64u, COW_IMG(0x10352ff0u));
                wr32(sp0 - 0x68u, sp0 - 0x20u);
                g->ebx = ebx;
                g->eax = sp0 - 0x20u;
                g->edx = rd32(COW_IMG(0x10485638u));
                t42 = rd32(COW_IMG(0x10485638u));
                g->esp = sp0 - 0x54u;
                t43 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x10352ff0u), t42, rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u));
                t44 = g->edx;
                wr32(sp0 - 0x6cu, edi);
                wr32(sp0 - 0x70u, sp0 - 0x20u);
                t45 = (t44 & 0xffff0000u) | (uint16_t)(rd16(self + 0x1au) + 0x4bu);
                wr32(sp0 - 0x74u, t45);
                t46 = (t43 & 0xffff0000u) | (uint16_t)(rd16(self + 0x18u) + 0x48u);
                wr32(sp0 - 0x78u, t46);
                g->eax = t46;
                g->edx = t45;
                t47 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t46, t45, sp0 - 0x20u, edi, sp0 - 0x20u, COW_IMG(0x10352ff0u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u));
                t48 = g->edx;
                wr32(sp0 - 0x38u, 0x18u);
                g->edx = t48;
                g->esp = sp0 - 0x34u;
                t49 = cow_stdcall(g, COW_IMG(0x10144800u), 1, 0x18u);
                t50 = g->edx;
                if (t49 == 0x80808080u)
                {
                    edx = t50;
                    edi = t49;
                }
                else
                {
                    eax = t49;
                    edi = t49;
    COW_AT(101449d2)
                    wr32(sp0 - 0x38u, 0u);
                    wr32(sp0 - 0x3cu, 0u);
                    wr32(sp0 - 0x40u, 0x80808080u);
                    t51 = (uint32_t)(int16_t)rd16(self + 0x1au) + 0x58u;
                    wr32(sp0 - 0x44u, t51);
                    t52 = (uint32_t)(int16_t)rd16(self + 0x18u) + 0x17u;
                    wr32(sp0 - 0x48u, t52);
                    g->edx = t52;
                    g->esp = sp0 - 0x34u;
                    cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + 0x24u), 5, t52, t51, 0x80808080u, 0u, 0u);
                    t53 = g->edx;
                    edx = t53;
                }
    COW_AT(101449f3)
                t54 = rd32(ebx + 0x24u);
                wr32(sp0 - 0x38u, t54);
                wr32(sp0 - 0x3cu, COW_IMG(0x103715c8u));
                wr32(sp0 - 0x40u, sp0 - 0x20u);
                g->ebx = ebx;
                g->eax = t54;
                g->ecx = sp0 - 0x20u;
                g->esp = sp0 - 0x2cu;
                t55 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x103715c8u), t54, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
                t56 = g->ecx;
                wr32(sp0 - 0x44u, 0x3f800000u);
                wr32(sp0 - 0x48u, 0x3f800000u);
                wr32(sp0 - 0x4cu, 1u);
                wr32(sp0 - 0x50u, 0x80808080u);
                wr32(sp0 - 0x54u, sp0 - 0x20u);
                t57 = (t55 & 0xffff0000u) | (uint16_t)(rd16(self + 0x1au) + 0x57u);
                wr32(sp0 - 0x58u, t57);
                t58 = (t56 & 0xffff0000u) | (uint16_t)(rd16(self + 0x18u) + 0x46u);
                wr32(sp0 - 0x5cu, t58);
                g->esp = sp0 - 0x40u;
                cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t58, 7, t58, t57, sp0 - 0x20u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
                t59 = g->ecx;
                wr32(sp0 - 0x60u, rd32(COW_IMG(0x1048563cu)));
                wr32(sp0 - 0x64u, COW_IMG(0x10352ff0u));
                wr32(sp0 - 0x68u, sp0 - 0x20u);
                g->ebx = ebx;
                g->eax = sp0 - 0x20u;
                g->edx = rd32(COW_IMG(0x1048563cu));
                t60 = rd32(COW_IMG(0x1048563cu));
                g->esp = sp0 - 0x54u;
                t61 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x10352ff0u), t60, rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u));
                t62 = g->edx;
                wr32(sp0 - 0x6cu, edi);
                wr32(sp0 - 0x70u, sp0 - 0x20u);
                t63 = (t62 & 0xffff0000u) | (uint16_t)(rd16(self + 0x1au) + 0x57u);
                wr32(sp0 - 0x74u, t63);
                t64 = (t61 & 0xffff0000u) | (uint16_t)(rd16(self + 0x18u) + 0x48u);
                wr32(sp0 - 0x78u, t64);
                g->eax = t64;
                t65 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t64, t63, sp0 - 0x20u, edi, sp0 - 0x20u, COW_IMG(0x10352ff0u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u));
                t66 = rd32(ebx + 0x28u);
                wr32(sp0 - 0x38u, t66);
                wr32(sp0 - 0x3cu, COW_IMG(0x1036f9d0u));
                wr32(sp0 - 0x40u, sp0 - 0x20u);
                g->ebx = ebx;
                g->ecx = t66;
                g->edx = sp0 - 0x20u;
                g->esp = sp0 - 0x2cu;
                cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1036f9d0u), t66, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
                t67 = g->ecx;
                t68 = g->edx;
                wr32(sp0 - 0x44u, 0x3f800000u);
                wr32(sp0 - 0x48u, 0x3f800000u);
                wr32(sp0 - 0x4cu, 1u);
                wr32(sp0 - 0x50u, 0x80808080u);
                wr32(sp0 - 0x54u, sp0 - 0x20u);
                t69 = (t67 & 0xffff0000u) | (uint16_t)(rd16(self + 0x1au) + 0x63u);
                wr32(sp0 - 0x58u, t69);
                t70 = (t68 & 0xffff0000u) | (uint16_t)(rd16(self + 0x18u) + 0x4bu);
                wr32(sp0 - 0x5cu, t70);
                g->edx = t70;
                g->esp = sp0 - 0x40u;
                cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t69, 7, t70, t69, sp0 - 0x20u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
                t71 = g->edx;
                edx = t71;
                ebp = 0u;
                edi = (edi & 0xffff0000u) | (uint16_t)(rd16(self + 0x1au) + 0x74u);
L_10144ab6: ;
    COW_AT(10144ab6)
                wr32(sp0 - 0x38u, ebp + 0x10u);
                g->eax = ebp + 0x10u;
                g->edx = edx;
                g->esp = sp0 - 0x34u;
                t72 = cow_stdcall(g, COW_IMG(0x10144800u), 1, ebp + 0x10u);
                t73 = g->edx;
                wr32(sp0 - 0x24u, t72);
                if (t72 == 0x80808080u)
                {
                    edx = t73;
                    loc_24 = t72;
                }
                else
                {
                    eax = t72;
                    loc_24 = t72;
    COW_AT(10144acc)
                    wr32(sp0 - 0x38u, 0u);
                    wr32(sp0 - 0x3cu, 0u);
                    wr32(sp0 - 0x40u, 0x80808080u);
                    t74 = (uint32_t)(int16_t)edi + 1u;
                    wr32(sp0 - 0x44u, t74);
                    t75 = (uint32_t)(int16_t)rd16(self + 0x18u) + 0x1fu;
                    wr32(sp0 - 0x48u, t75);
                    g->edx = t75;
                    g->esp = sp0 - 0x34u;
                    cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + 0x24u), 5, t75, t74, 0x80808080u, 0u, 0u);
                    t76 = g->edx;
                    edx = t76;
                    loc_24 = rd32(sp0 - 0x24u);
                }
    COW_AT(10144aea)
                t77 = rd16(COW_IMG(0x10485648u) + ebp * 2u);
                wr32(sp0 - 0x38u, t77);
                wr32(sp0 - 0x3cu, COW_IMG(0x1036f9d0u));
                wr32(sp0 - 0x40u, sp0 - 0x20u);
                g->ebx = (ebx & 0xffff0000u) | (uint16_t)(rd16(self + 0x18u) + 0x32u);
                g->ecx = sp0 - 0x20u;
                t78 = rd16(self + 0x18u);
                g->esp = sp0 - 0x2cu;
                cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1036f9d0u), t77, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
                t79 = g->ecx;
                t80 = rd32(sp0 - 0x24u);
                wr32(sp0 - 0x44u, t80);
                wr32(sp0 - 0x48u, sp0 - 0x20u);
                wr32(sp0 - 0x4cu, edi);
                t81 = (ebx & 0xffff0000u) | (uint16_t)(t78 + 0x32u);
                wr32(sp0 - 0x50u, t81);
                g->eax = sp0 - 0x20u;
                g->ecx = t79;
                g->edx = t80;
                t82 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t81, edi, sp0 - 0x20u, t80, sp0 - 0x20u, COW_IMG(0x1036f9d0u), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
                t83 = g->ecx;
                t84 = g->edx;
                if ((int16_t)rd16(COW_IMG(0x10485656u) + ebp * 2u) <= 0)
                {
                    eax = (t82 & 0xffff0000u) | rd16(COW_IMG(0x10485656u) + ebp * 2u);
                    ecx = t83;
                    edx = t84;
                    ebx = t82;
                    sf = (int16_t)rd16(COW_IMG(0x10485656u) + ebp * 2u) < 0;
                    goto L_10144b49;
                }
                eax = (t82 & 0xffff0000u) | rd16(COW_IMG(0x10485656u) + ebp * 2u);
                ebx = t82;
    COW_AT(10144b2f)
                wr32(sp0 - 0x38u, (uint32_t)(int16_t)eax);
                wr32(sp0 - 0x3cu, COW_IMG(0x103715c0u));
                wr32(sp0 - 0x40u, sp0 - 0x20u);
                g->ebx = ebx;
                g->ecx = (uint32_t)(int16_t)eax;
                g->edx = sp0 - 0x20u;
                g->esp = sp0 - 0x2cu;
                cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x103715c0u), (uint32_t)(int16_t)eax, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
                t85 = g->ecx;
                t86 = g->edx;
                wr32(sp0 - 0x44u, 0x80408040u);
                ecx = t85;
                edx = t86;
                loc_3c = COW_IMG(0x103715c0u);
                loc_44 = 0x80408040u;
L_10144b63: ;
    COW_AT(10144b63)
                wr32(sp0 - 0x48u, sp0 - 0x20u);
                wr32(sp0 - 0x4cu, edi);
                wr32(sp0 - 0x50u, ebx);
                g->eax = sp0 - 0x20u;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x2cu;
                t89 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, ebx, edi, sp0 - 0x20u, loc_44, sp0 - 0x20u, loc_3c, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
                t90 = g->ecx;
                t91 = g->edx;
                eax = t89;
                ecx = t90;
                edx = t91;
L_10144b72: ;
    COW_AT(10144b72)
                if ((int32_t)(ebp + 1u) < 7)
                {
                    ebp = ebp + 1u;
                    edi = edi + 0xdu;
                    goto L_10144ab6;
                }
    COW_AT(10144b7f)
                t92 = rd8(COW_IMG(0x10482f9cu));
                t93 = rd16(COW_IMG(0x10482fa2u));
                t94 = rd32(sp0 - 0x34u);
                wr16(sp0 - 0x24u, (uint16_t)t93);
                if ((int32_t)(t92 & 3u) < 0)
                {
                    eax = t92 & 3u;
                    ebp = rd32(sp0 - 0x30u);
                    edi = t94;
                }
                else
                {
                    eax = t92 & 3u;
                    ecx = (ecx & 0xffff0000u) | t93;
                    ebp = rd32(sp0 - 0x30u);
                    edi = t94;
    COW_AT(10144b9c)
                    if ((int32_t)eax <= 2)
                    {
    COW_AT(10144ba1)
                        t95 = rd32(COW_IMG(0x10371594u) + eax * 4u);
                        wr32(sp0 - 0x30u, t95);
                        wr32(sp0 - 0x34u, COW_IMG(0x1034f7e0u));
                        wr32(sp0 - 0x38u, sp0 - 0x20u);
                        g->ebx = ebx;
                        g->eax = sp0 - 0x20u;
                        g->edx = t95;
                        g->esp = sp0 - 0x24u;
                        t96 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1034f7e0u), t95, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u));
                        t97 = g->edx;
                        wr32(sp0 - 0x3cu, 0x3f800000u);
                        wr32(sp0 - 0x40u, 0x3f800000u);
                        wr32(sp0 - 0x44u, 1u);
                        wr32(sp0 - 0x48u, 0x80808080u);
                        wr32(sp0 - 0x4cu, sp0 - 0x20u);
                        t98 = (t97 & 0xffff0000u) | (uint16_t)(rd16(self + 0x1au) + 0x2au);
                        wr32(sp0 - 0x50u, t98);
                        t99 = (t96 & 0xffff0000u) | (uint16_t)(rd16(self + 0x18u) + 0x67u);
                        wr32(sp0 - 0x54u, t99);
                        g->eax = t99;
                        g->esp = sp0 - 0x38u;
                        t100 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), sp0 - 0x20u, 7, t99, t98, sp0 - 0x20u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
                        eax = t100;
                    }
                }
    COW_AT(10144be8)
                t101 = (uint16_t)rd32(sp0 - 0x24u);
                wr32(sp0 - 0x30u, t101);
                wr32(sp0 - 0x34u, COW_IMG(0x10352ff0u));
                wr32(sp0 - 0x38u, sp0 - 0x20u);
                g->ebx = ebx;
                g->ecx = t101;
                g->edx = sp0 - 0x20u;
                g->esp = sp0 - 0x24u;
                cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x10352ff0u), t101, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u));
                t102 = g->ecx;
                t103 = g->edx;
                wr32(sp0 - 0x3cu, 0x3f800000u);
                wr32(sp0 - 0x40u, 0x3f800000u);
                wr32(sp0 - 0x44u, 1u);
                wr32(sp0 - 0x48u, 0x80808080u);
                wr32(sp0 - 0x4cu, sp0 - 0x20u);
                t104 = (t102 & 0xffff0000u) | (uint16_t)(rd16(self + 0x1au) + 0x3au);
                wr32(sp0 - 0x50u, t104);
                t105 = (t103 & 0xffff0000u) | (uint16_t)(rd16(self + 0x18u) + 0x67u);
                wr32(sp0 - 0x54u, t105);
                g->eax = sp0 - 0x20u;
                g->edx = t105;
                g->esp = sp0 - 0x38u;
                t106 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t104, 7, t105, t104, sp0 - 0x20u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
                t107 = g->edx;
                eax = t106;
                edx = t107;
                loc_28 = rd32(sp0 - 0x28u);
                loc_2c = rd32(sp0 - 0x2cu);
            }
        }
    }
    COW_AT(10144c32)
    g->ebx = loc_28;
    g->esi = loc_2c;
    g->edi = edi;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
L_10144b49: ;
    COW_AT(10144b49)
    if (!sf) goto L_10144b72;
    COW_AT(10144b4b)
    wr32(sp0 - 0x38u, (uint32_t)(int16_t)eax);
    wr32(sp0 - 0x3cu, COW_IMG(0x1036c00cu));
    wr32(sp0 - 0x40u, sp0 - 0x20u);
    g->ebx = ebx;
    g->ecx = (uint32_t)(int16_t)eax;
    g->edx = sp0 - 0x20u;
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1036c00cu), (uint32_t)(int16_t)eax, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
    t87 = g->ecx;
    t88 = g->edx;
    wr32(sp0 - 0x44u, 0x80804040u);
    ecx = t87;
    edx = t88;
    loc_3c = COW_IMG(0x1036c00cu);
    loc_44 = 0x80804040u;
    goto L_10144b63;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10144830(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10144852u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        sf = g->sf;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1014485fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        sf = g->sf;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1014486cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1014487au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x10144881u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x101448b1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_30;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        sf = g->sf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x101448bcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x101448c5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x101448d0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x101448d5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10144915u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10144928u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10144949u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x101449d2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_44;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x70u, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101449f3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_44;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x70u, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10144ab6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_44;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x70u, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10144accu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x70u, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10144aeau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_3c;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x70u, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10144b2fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x70u, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x48u, sp0 - 0x20u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10144b49u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x34u;
        g->of = (uint8_t)(0u);
        wr32(sp0 - 0x70u, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x48u, sp0 - 0x20u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10144b4bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x70u, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x48u, sp0 - 0x20u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10144b63u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_44;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x70u, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x48u, sp0 - 0x20u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10144b72u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x70u, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x48u, sp0 - 0x20u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10144b7fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x70u, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x48u, sp0 - 0x20u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10144b9cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x70u, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x48u, sp0 - 0x20u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10144ba1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x70u, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x48u, sp0 - 0x20u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10144be8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_44;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x70u, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10144c32u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_44;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10144830(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10144830(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
