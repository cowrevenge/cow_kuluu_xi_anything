/* f_0x10137270 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10137270(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 68u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10137284u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_10137284;
    case 0x101372b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; goto E_101372b7;
    case 0x101372beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; goto E_101372be;
    case 0x101372d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; goto E_101372d0;
    case 0x101372dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; goto E_101372da;
    case 0x1013731fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; goto E_1013731f;
    case 0x10137330u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; goto E_10137330;
    case 0x10137348u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; goto E_10137348;
    case 0x1013734cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); goto E_1013734c;
    case 0x10137359u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; goto E_10137359;
    case 0x1013735eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; goto E_1013735e;
    case 0x10137366u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; goto E_10137366;
    case 0x10137372u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; goto E_10137372;
    case 0x10137376u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); goto E_10137376;
    case 0x10137390u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); goto E_10137390;
    case 0x10137397u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); goto E_10137397;
    case 0x10137399u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); goto E_10137399;
    case 0x1013739bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); goto E_1013739b;
    case 0x101373a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); goto E_101373a2;
    case 0x101373a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); goto E_101373a4;
    case 0x101373afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); goto E_101373af;
    case 0x101373e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_101373e9;
    case 0x101373edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_101373ed;
    case 0x10137405u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; goto E_10137405;
    case 0x1013740du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; goto E_1013740d;
    case 0x1013740fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; goto E_1013740f;
    case 0x10137412u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_10137412;
    case 0x1013741du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_1013741d;
    case 0x10137421u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_10137421;
    case 0x10137425u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_10137425;
    case 0x1013742bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_1013742b;
    case 0x1013742fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_1013742f;
    case 0x10137433u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_10137433;
    case 0x10137437u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_10137437;
    case 0x1013743eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_1013743e;
    case 0x10137447u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_10137447;
    case 0x1013744eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_1013744e;
    case 0x10137464u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10137464;
    case 0x1013747eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; goto E_1013747e;
    case 0x10137485u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; goto E_10137485;
    case 0x1013748fu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; goto E_1013748f;
    case 0x10137493u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; goto E_10137493;
    case 0x1013749bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; goto E_1013749b;
    case 0x101374b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; goto E_101374b3;
    case 0x101374c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_101374c4;
    case 0x101374cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; zf = g->zf; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_101374cb;
    default: break;
    }
#endif

    COW_AT(10137270)
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        edx = in_edx;
        loc_18 = in_ebx;
        loc_1c = in_ebp;
        loc_20 = in_esi;
        loc_24 = in_edi;
    }
    else
    {
        eax = rd32(self + 8u);
    COW_AT(10137284)
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x24u;
        t1 = cow_thiscall(g, COW_IMG(0x10126500u), self + 0x14u, 0);
        t2 = g->edx;
        wr32(sp0 - 0xcu, t1);
        t3 = rd32(self + 0x68u);
        wr32(sp0 - 0x28u, t3);
        g->eax = t3;
        g->edx = t2;
        t4 = cow_stdcall(g, COW_IMG(0x10126460u), 1, t3);
        t5 = g->edx;
        wr32(sp0 - 4u, t4);
        t6 = rd32(self + 8u);
        wr8(sp0 - 0x11u, 0u);
        g->edx = t5;
        t7 = cow_thiscall(g, COW_IMG(0x10118220u), t6, 0);
        t8 = g->edx;
        if (rd32(self + 0x64u) == 0u)
        {
            eax = rd32(self + 0x64u);
            edx = t8;
            edi = t7;
        }
        else
        {
            eax = rd32(self + 0x64u);
            edx = t8;
            edi = t7;
    COW_AT(101372b7)
            if (rd32(eax + 8u) == 0u)
            {
                eax = rd32(eax + 8u);
            }
            else
            {
                eax = rd32(eax + 8u);
    COW_AT(101372be)
                t9 = (uint32_t)(int16_t)rd16(eax + 0x3cu);
                wr32(sp0 - 0x28u, t9);
                t10 = (uint32_t)(int16_t)rd16(eax + 0x3au);
                wr32(sp0 - 0x2cu, t10);
                g->edx = edx;
                g->esp = sp0 - 0x24u;
                t11 = cow_call_regs(g, COW_IMG(0x10119110u), t10, rd32(self + 8u), g->edx, 0, 2, t10, t9);
                t12 = g->edx;
                eax = t11;
                edx = t12;
            }
        }
    COW_AT(101372d0)
        if (rd8(rd32(self + 8u) + 0x6au) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(rd32(self + 8u) + 0x6au);
            ecx = rd32(self + 8u);
    COW_AT(101372da)
            wr32(sp0 - 0x28u, 1u);
            g->edi = edi;
            g->esp = sp0 - 0x24u;
            cow_thiscall(g, COW_IMG(0x101192e0u), ecx, 1, 1u);
            wr32(sp0 - 0x28u, 0u);
            wr32(sp0 - 0x2cu, 0u);
            wr32(sp0 - 0x30u, 1u);
            t13 = rd32(self + 8u);
            wr8(t13 + 0x62u, 1u);
            t14 = rd32(self + 8u);
            wr8(t14 + 0x69u, 1u);
            t15 = rd32(self + 8u);
            wr8(t15 + 0x6au, 1u);
            t16 = ((t13 & 0xffff0000u) | (uint16_t)((uint32_t)rd16(self + 0x4eu) << 4u)) + 4u;
            wr32(sp0 - 0x34u, t16);
            t17 = (t14 & 0xffff0000u) | rd16(edi + 0x22u);
            wr32(sp0 - 0x38u, t17);
            t18 = (t15 & 0xffff0000u) | rd16(edi + 0x1cu);
            wr32(sp0 - 0x3cu, t18);
            t19 = (t16 & 0xffff0000u) | rd16(edi + 0x1au);
            wr32(sp0 - 0x40u, t19);
            g->edx = t17;
            cow_thiscall(g, COW_IMG(0x1011a5a0u), rd32(self + 8u), 7, t19, t18, t17, t16, 1u, 0u, 0u);
            t20 = g->edx;
            edx = t20;
        }
    COW_AT(1013731f)
        t21 = rd16(self + 0x24u);
        t22 = rd32(sp0 - 0xcu);
        wr16(sp0 - 0x10u, (uint16_t)t21);
        if (t22 == 0u) goto L_10137366;
        edx = (edx & 0xffff0000u) | t21;
L_10137330: ;
    COW_AT(10137330)
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        g->eax = sp0 - 0xcu;
        g->esp = sp0 - 0x24u;
        t23 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 0xcu);
        t24 = g->edx;
        if (rd16(t23 + 0x14au) == 1u)
        {
            eax = t23;
            edx = t24;
            ebx = t23;
            loc_10 = rd32(sp0 - 0x10u);
        }
        else
        {
            eax = t23;
            edx = t24;
            ebx = t23;
    COW_AT(10137348)
            t25 = rd32(sp0 - 0x10u) - 1u;
            wr32(sp0 - 0x10u, t25);
            loc_10 = t25;
        }
    COW_AT(1013734c)
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        cow_thiscall(g, COW_IMG(0x101375e0u), ebx, 0);
        t26 = g->edx;
        if (rd32(sp0 - 4u) != ebx)
        {
            edx = t26;
        }
        else
        {
            edx = t26;
    COW_AT(10137359)
            wr8(sp0 - 0x11u, 1u);
        }
    COW_AT(1013735e)
        if (rd32(sp0 - 0xcu) != 0u) goto L_10137330;
L_10137366: ;
    COW_AT(10137366)
        if ((int16_t)rd16(sp0 - 0x10u) <= 4)
        {
            loc_10 = rd32(sp0 - 0x10u);
        }
        else
        {
    COW_AT(10137372)
            wr32(sp0 - 0x10u, 4u);
            loc_10 = 4u;
        }
    COW_AT(10137376)
        wr16(self + 0x4eu, (uint16_t)loc_10);
        if (rd32(rd32(edi + 4u) + 4u) >= ((uint32_t)(int16_t)loc_10 << 4u) + 4u)
        {
            eax = ((uint32_t)(int16_t)loc_10 << 4u) + 4u;
            edx = rd32(rd32(edi + 4u) + 4u);
            cf = rd32(rd32(edi + 4u) + 4u) < ((uint32_t)(int16_t)loc_10 << 4u) + 4u;
            zf = rd32(rd32(edi + 4u) + 4u) == ((uint32_t)(int16_t)loc_10 << 4u) + 4u;
            goto L_10137399;
        }
        eax = ((uint32_t)(int16_t)loc_10 << 4u) + 4u;
        edx = rd32(rd32(edi + 4u) + 4u);
    COW_AT(10137390)
        if (edx + 8u <= eax)
        {
            edx = edx + 8u;
            goto L_101373a4;
        }
    COW_AT(10137397)
L_101373a2: ;
    COW_AT(101373a2)
        edx = eax;
L_101373a4: ;
    COW_AT(101373a4)
        if (rd32(self + 8u) == 0u)
        {
            loc_18 = rd32(sp0 - 0x18u);
            loc_1c = rd32(sp0 - 0x1cu);
            loc_20 = rd32(sp0 - 0x20u);
            loc_24 = rd32(sp0 - 0x24u);
        }
        else
        {
            ecx = rd32(self + 8u);
    COW_AT(101373af)
            wr32(sp0 - 0x28u, 0u);
            wr32(sp0 - 0x2cu, 0u);
            wr32(sp0 - 0x30u, 1u);
            wr32(sp0 - 0x34u, edx);
            t27 = (eax & 0xffff0000u) | rd16(edi + 0x22u);
            wr32(sp0 - 0x38u, t27);
            t28 = (edx & 0xffff0000u) | rd16(edi + 0x1cu);
            wr32(sp0 - 0x3cu, t28);
            t29 = (t27 & 0xffff0000u) | rd16(edi + 0x1au);
            wr32(sp0 - 0x40u, t29);
            g->eax = t29;
            g->edx = t28;
            g->esp = sp0 - 0x24u;
            t30 = cow_thiscall(g, COW_IMG(0x1011a5a0u), ecx, 7, t29, t28, t27, edx, 1u, 0u, 0u);
            t31 = g->edx;
            wr32(sp0 - 0x28u, self + 0x30u);
            g->edx = t31;
            t32 = cow_call_regs(g, COW_IMG(0x10118f70u), t30, rd32(self + 8u), g->edx, 0, 1, self + 0x30u);
            t33 = g->edx;
            g->edx = t33;
            t34 = cow_thiscall(g, COW_IMG(0x10126510u), self + 0x14u, 0);
            t35 = g->ecx;
            t36 = g->edx;
            wr32(sp0 - 8u, t34);
            if (rd8(sp0 - 0x11u) != 0u)
            {
                eax = t34;
                edx = t36;
            }
            else
            {
                eax = t34;
                edx = t36;
                loc_8 = t34;
    COW_AT(101373e9)
                if (eax == 0u) goto L_10137412;
L_101373ed: ;
    COW_AT(101373ed)
                wr32(sp0 - 0x28u, sp0 - 8u);
                g->eax = eax;
                g->esp = sp0 - 0x24u;
                t37 = cow_call_regs(g, COW_IMG(0x10126550u), g->eax, g->ecx, sp0 - 8u, 0, 1, sp0 - 8u);
                t38 = g->edx;
                if (rd16(t37 + 0x14au) == 1u)
                {
                    edx = t38;
                    ebx = eax;
                    eax = t37;
                    goto L_1013740f;
                }
                edx = t38;
    COW_AT(10137405)
                if (rd32(sp0 - 8u) != 0u)
                {
                    eax = rd32(sp0 - 8u);
                    loc_8 = rd32(sp0 - 8u);
                    goto L_101373ed;
                }
                eax = rd32(sp0 - 8u);
    COW_AT(1013740d)
            }
L_10137412: ;
    COW_AT(10137412)
            if (rd16(sp0 - 0x10u) != 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(edi + 0x44u);
                goto L_1013742b;
            }
            eax = (eax & 0xffffff00u) | rd8(edi + 0x44u);
    COW_AT(1013741d)
            if ((uint8_t)eax == 3u) goto L_10137425;
    COW_AT(10137421)
            if ((uint8_t)eax != 0u) goto L_1013743e;
L_10137425: ;
    COW_AT(10137425)
            wr8(edi + 0x44u, 2u);
L_10137437: ;
    COW_AT(10137437)
            wr32(edi + 0x48u, 0x14u);
L_1013743e: ;
    COW_AT(1013743e)
            if (rd16(self + 0x6cu) == 0u)
            {
                eax = (eax & 0xffff0000u) | rd16(self + 0x6cu);
            }
            else
            {
                eax = (eax & 0xffff0000u) | rd16(self + 0x6cu);
    COW_AT(10137447)
                wr16(self + 0x6cu, (uint16_t)(eax - 4u));
                eax = eax - 4u;
            }
    COW_AT(1013744e)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x24u;
            t39 = cow_thiscall(g, COW_IMG(0x10126500u), self + 0x14u, 0);
            t40 = g->edx;
            wr32(sp0 - 0xcu, t39);
            t41 = rd32(self + 0x24u);
            wr32(sp0 - 0x10u, t41);
            if (t39 == 0u)
            {
                eax = t39;
                edx = t40;
                goto L_101374c4;
            }
            eax = t39;
            loc_c = t39;
            loc_10 = t41;
L_10137464: ;
    COW_AT(10137464)
            wr32(sp0 - 0x28u, sp0 - 0xcu);
            g->eax = eax;
            g->esp = sp0 - 0x24u;
            t42 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, sp0 - 0xcu, 0, 1, sp0 - 0xcu);
            t43 = g->edx;
            if (rd32(t42 + 0x140u) == 0u)
            {
                edx = t43;
                ebx = eax;
                edi = t42;
                goto L_10137485;
            }
            edx = t43;
            ebx = eax;
            edi = t42;
    COW_AT(1013747e)
            if ((int32_t)rd32(sp0 - 0x10u) <= 8) goto L_101374b3;
L_10137485: ;
    COW_AT(10137485)
            if (rd32(self + 0x68u) != ebx)
            {
                eax = self + 0x68u;
            }
            else
            {
                ecx = rd32(self + 0x68u);
    COW_AT(1013748f)
                if (ecx == 0u)
                {
                    eax = self + 0x68u;
                }
                else
                {
    COW_AT(10137493)
                    wr32(sp0 - 0x28u, self + 0x68u);
                    g->eax = self + 0x68u;
                    g->esp = sp0 - 0x24u;
                    t44 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, self + 0x68u);
                    t45 = g->edx;
                    eax = t44;
                    edx = t45;
                }
            }
    COW_AT(1013749b)
            wr32(sp0 - 0x28u, ebx);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x24u;
            t46 = cow_thiscall(g, COW_IMG(0x10126580u), self + 0x14u, 1, ebx);
            t47 = g->edx;
            g->ecx = edi;
            g->edx = t47;
            t48 = cow_stdcall(g, COW_IMG(0x10126330u), 0);
            t49 = g->ecx;
            t50 = g->edx;
            wr32(sp0 - 0x28u, edi);
            cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t49, t50, 1, 1, edi);
L_101374b3: ;
    COW_AT(101374b3)
            t51 = rd32(sp0 - 0x10u) - 1u;
            wr32(sp0 - 0x10u, t51);
            if (rd32(sp0 - 0xcu) != 0u)
            {
                eax = rd32(sp0 - 0xcu);
                loc_c = rd32(sp0 - 0xcu);
                loc_10 = t51;
                goto L_10137464;
            }
            eax = rd32(sp0 - 0xcu);
            edx = t51;
L_101374c4: ;
    COW_AT(101374c4)
            wr32(self + 0x58u, 0u);
            loc_18 = rd32(sp0 - 0x18u);
            loc_1c = rd32(sp0 - 0x1cu);
            loc_20 = rd32(sp0 - 0x20u);
            loc_24 = rd32(sp0 - 0x24u);
        }
    }
    COW_AT(101374cb)
    g->ebx = loc_18;
    g->esi = loc_20;
    g->edi = loc_24;
    g->ebp = loc_1c;
    g->edx = edx;
    return eax;
L_10137399: ;
    COW_AT(10137399)
    if (cf || zf) goto L_101373a4;
    COW_AT(1013739b)
    if (edx - 2u >= eax)
    {
        edx = edx - 2u;
        goto L_101373a4;
    }
    goto L_101373a2;
L_1013740f: ;
    COW_AT(1013740f)
    wr32(self + 0x68u, ebx);
    goto L_10137412;
L_1013742b: ;
    COW_AT(1013742b)
    if ((uint8_t)eax == 2u) goto L_10137433;
    COW_AT(1013742f)
    if ((uint8_t)eax != 1u) goto L_1013743e;
L_10137433: ;
    COW_AT(10137433)
    wr8(edi + 0x44u, 3u);
    goto L_10137437;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10137270(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10137284u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101372b7u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101372beu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101372d0u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101372dau:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1013731fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10137330u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10137348u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x14u;
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1013734cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x14u;
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10137359u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x14u;
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1013735eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x14u;
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10137366u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10137372u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x24u;
        g->ecx = 4u;
        g->ebp = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10137376u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x24u;
        g->ecx = 4u;
        g->ebp = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10137390u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10137397u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10137399u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1013739bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101373a2u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101373a4u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101373afu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101373e9u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101373edu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10137405u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x14u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1013740du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x14u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1013740fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x14u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10137412u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1013741du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10137421u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10137425u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1013742bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1013742fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10137433u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10137437u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1013743eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10137447u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1013744eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10137464u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1013747eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x14u;
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10137485u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x14u;
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1013748fu:
    {
        uint32_t cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x24u;
        g->eax = self + 0x68u;
        g->ebp = self + 0x14u;
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10137493u:
    {
        uint32_t cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x24u;
        g->eax = self + 0x68u;
        g->ebp = self + 0x14u;
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1013749bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101374b3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101374c4u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101374cbu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10137270(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10137270(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
