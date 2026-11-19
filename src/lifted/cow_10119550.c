/* f_0x10119550 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10119550(Guest* g)
{
    double d13;
    double d26;
    double d31;
    double d40;
    double d44;
    double d45;
    double d49;
    double d50;
    double d54;
    double d8;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_24;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t5;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
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
    uint32_t t7;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 68u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10119566u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10119566;
    case 0x10119575u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10119575;
    case 0x1011958du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_1011958d;
    case 0x101195dau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_101195da;
    case 0x10119602u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10119602;
    case 0x10119606u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10119606;
    case 0x10119653u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10119653;
    case 0x1011966cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); goto E_1011966c;
    case 0x10119680u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10119680;
    case 0x10119684u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10119684;
    case 0x101196bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101196bd;
    case 0x101196dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); goto E_101196df;
    case 0x10119707u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); goto E_10119707;
    case 0x1011970cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); goto E_1011970c;
    case 0x10119727u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10119727;
    case 0x10119734u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10119734;
    case 0x10119737u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10119737;
    case 0x1011973du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1011973d;
    case 0x10119741u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); goto E_10119741;
    case 0x10119749u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); goto E_10119749;
    case 0x1011974cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); goto E_1011974c;
    case 0x1011974fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); goto E_1011974f;
    case 0x10119756u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); goto E_10119756;
    case 0x1011975fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); goto E_1011975f;
    case 0x10119764u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); goto E_10119764;
    case 0x10119773u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); x0 = ST(0); goto E_10119773;
    case 0x10119785u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); goto E_10119785;
    case 0x1011978eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); goto E_1011978e;
    case 0x10119799u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); goto E_10119799;
    case 0x1011979cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); goto E_1011979c;
    case 0x101197a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); goto E_101197a6;
    case 0x101197afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); goto E_101197af;
    case 0x101197c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); goto E_101197c4;
    case 0x101197c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); goto E_101197c8;
    case 0x101197d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); goto E_101197d3;
    case 0x101197d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); goto E_101197d8;
    case 0x101197ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); goto E_101197eb;
    case 0x10119819u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); goto E_10119819;
    case 0x1011982bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); goto E_1011982b;
    case 0x10119832u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); goto E_10119832;
    case 0x1011983fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); goto E_1011983f;
    case 0x1011985du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); goto E_1011985d;
    default: break;
    }
#endif

    COW_AT(10119550)
    wr32(sp0 - 0x2cu, in_ebx);
    wr32(sp0 - 0x30u, in_ebp);
    wr32(sp0 - 0x34u, in_esi);
    wr32(sp0 - 0x38u, in_edi);
    if (rd32(self + 0x30u) == 0u)
    {
        eax = rd32(self + 0x30u);
        loc_2c = in_ebx;
        loc_30 = in_ebp;
        loc_34 = in_esi;
        loc_38 = in_edi;
    }
    else
    {
        eax = rd32(self + 0x30u);
    COW_AT(10119566)
        if (rd32(self + 4u) != 0u) goto L_10119602;
    COW_AT(10119575)
        t1 = rd32(eax);
        t2 = rd16(rd32(eax) + 0xau);
        wr16(self + 0x22u, (uint16_t)t2);
        t3 = rd32(eax);
        t4 = rd16(rd32(eax) + 0xcu);
        wr16(self + 0x24u, (uint16_t)t4);
        if ((uint8_t)arg1 == 0u)
        {
            eax = t3;
            ecx = (t1 & 0xffff0000u) | t4;
            edx = (in_edx & 0xffff0000u) | t2;
        }
        else
        {
    COW_AT(1011958d)
            wr32(sp0 - 0x3cu, sp0 - 0x28u);
            wr32(sp0 - 0x40u, sp0 + 4u);
            g->eax = sp0 + 4u;
            g->esp = sp0 - 0x38u;
            t5 = cow_thiscall(g, COW_IMG(0x101601d0u), COW_IMG(0x10621838u), 2, sp0 + 4u, sp0 - 0x28u);
            t6 = (uint32_t)(int16_t)rd16(rd32(rd32(self + 0x30u)) + 0xau);
            wr32(sp0 - 0x24u, t6);
            g->edx = t6;
            t7 = rd32(self + 0x30u);
            d8 = fr(g, (double)(int32_t)t6 * (double)rdf32(sp0 + 4u));
            fpush(g, d8);
            t9 = cow_call_regs(g, COW_IMG(0x10311c6cu), t5, g->ecx, g->edx, 1, 0);
            t10 = g->edx;
            wr16(self + 0x22u, (uint16_t)t9);
            t11 = (uint32_t)(int16_t)rd16(rd32(t7) + 0xcu);
            wr32(sp0 - 0x24u, t11);
            g->ecx = t11;
            g->edx = t10;
            t12 = rd32(t7);
            d13 = fr(g, (double)(int32_t)t11 * (double)rdf32(sp0 - 0x28u));
            fpush(g, d13);
            t14 = cow_call_regs(g, COW_IMG(0x10311c6cu), t12, g->ecx, g->edx, 1, 0);
            t15 = g->ecx;
            t16 = g->edx;
            wr16(self + 0x24u, (uint16_t)t14);
            eax = t14;
            ecx = t15;
            edx = t16;
        }
    COW_AT(101195da)
        wr32(sp0 - 0x3cu, 0xcu);
        g->eax = eax;
        g->esp = sp0 - 0x30u;
        t17 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0xcu, in_edi, in_esi);
        wr32(self + 4u, t17);
        if (t17 == 0u)
        {
            eax = t17;
            loc_2c = in_ebx;
            loc_30 = in_ebp;
            loc_34 = in_esi;
            loc_38 = in_edi;
            goto L_1011985d;
        }
        eax = t17;
    COW_AT(101195ef)
        t18 = (uint32_t)(int16_t)rd16(self + 0x24u);
        wr32(sp0 - 0x3cu, t18);
        t19 = (uint32_t)(int16_t)rd16(self + 0x22u);
        wr32(sp0 - 0x40u, t19);
        g->eax = eax;
        g->edx = t18;
        g->esp = sp0 - 0x38u;
        t20 = cow_thiscall(g, COW_IMG(0x10234a90u), eax, 2, t19, t18);
        t21 = g->ecx;
        t22 = g->edx;
        eax = t20;
        ecx = t21;
        edx = t22;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_38 = rd32(sp0 - 0x38u);
L_10119666: ;
    COW_AT(10119666)
        if ((int16_t)rd16(self + 0x26u) <= 0)
        {
    COW_AT(101196d0)
            wr32(self + 0x10u, 0x3f800000u);
            wr32(self + 0x14u, 0x3f800000u);
            if ((uint8_t)arg1 != 0u)
            {
    COW_AT(101196df)
                wr32(sp0 - 0x3cu, sp0 - 0x28u);
                wr32(sp0 - 0x40u, sp0 + 4u);
                g->eax = sp0 + 4u;
                g->edx = sp0 - 0x28u;
                g->esp = sp0 - 0x38u;
                t46 = cow_thiscall(g, COW_IMG(0x101601d0u), COW_IMG(0x10621838u), 2, sp0 + 4u, sp0 - 0x28u);
                t47 = g->ecx;
                t48 = g->edx;
                d49 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(self + 0x10u));
                wrf32(self + 0x10u, (float)d49);
                d50 = fr(g, (double)rdf32(sp0 - 0x28u) * (double)rdf32(self + 0x14u));
                wrf32(self + 0x14u, (float)d50);
                eax = t46;
                ecx = t47;
                edx = t48;
                loc_2c = rd32(sp0 - 0x2cu);
                loc_30 = rd32(sp0 - 0x30u);
                loc_34 = rd32(sp0 - 0x34u);
                loc_38 = rd32(sp0 - 0x38u);
            }
    COW_AT(10119707)
            if ((int32_t)rd32(self + 0x48u) > 0)
            {
    COW_AT(1011970c)
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x38u;
                t51 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
                t52 = g->ecx;
                t53 = g->edx;
                d54 = cow_take_float(g);
                fpush(g, d54);
                t55 = cow_call_regs(g, COW_IMG(0x10311c6cu), t51, g->ecx, g->edx, 1, 0);
                t56 = rd32(self + 0x48u) - (uint32_t)(int16_t)t55;
                wr32(self + 0x48u, t56);
                if ((int32_t)t56 > 0)
                {
                    loc_2c = rd32(sp0 - 0x2cu);
                    loc_30 = rd32(sp0 - 0x30u);
                    loc_34 = rd32(sp0 - 0x34u);
                    loc_38 = rd32(sp0 - 0x38u);
                }
                else
                {
    COW_AT(10119727)
                    wr32(self + 0x48u, 0u);
                    if (rd8(self + 0x44u) == 2u)
                    {
    COW_AT(1011973d)
                        wr8(self + 0x44u, 1u);
                        loc_2c = rd32(sp0 - 0x2cu);
                        loc_30 = rd32(sp0 - 0x30u);
                        loc_34 = rd32(sp0 - 0x34u);
                        loc_38 = rd32(sp0 - 0x38u);
                    }
                    else
                    {
                        eax = rd8(self + 0x44u) - 2u;
    COW_AT(10119734)
                        if (eax != 1u)
                        {
                            loc_2c = rd32(sp0 - 0x2cu);
                            loc_30 = rd32(sp0 - 0x30u);
                            loc_34 = rd32(sp0 - 0x34u);
                            loc_38 = rd32(sp0 - 0x38u);
                        }
                        else
                        {
    COW_AT(10119737)
                            wr8(self + 0x44u, 0u);
                            loc_2c = rd32(sp0 - 0x2cu);
                            loc_30 = rd32(sp0 - 0x30u);
                            loc_34 = rd32(sp0 - 0x34u);
                            loc_38 = rd32(sp0 - 0x38u);
                        }
                    }
                }
            }
    COW_AT(10119741)
            if (rd8(self + 0x44u) == 1u)
            {
    COW_AT(10119799)
                wr32(self + 0xcu, 0u);
            }
            else
            {
                eax = rd8(self + 0x44u) - 1u;
    COW_AT(10119749)
                if (eax == 1u)
                {
                    eax = eax - 1u;
                    goto L_1011978e;
                }
                eax = eax - 1u;
    COW_AT(1011974c)
                if (eax == 1u)
                {
                    eax = eax - 1u;
                    goto L_10119764;
                }
                eax = eax - 1u;
    COW_AT(1011974f)
                if (rd8(self + 0x4cu) == 0u)
                {
    COW_AT(1011975f)
                    wr32(self + 0xcu, 0x3f800000u);
                }
                else
                {
    COW_AT(10119756)
                    wr32(self + 0xcu, 0x3f147ae1u);
                }
            }
        }
        else
        {
    COW_AT(1011966c)
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t37 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
            t38 = g->ecx;
            t39 = g->edx;
            d40 = cow_take_float(g);
            fpush(g, d40);
            t41 = cow_call_regs(g, COW_IMG(0x10311c6cu), t37, g->ecx, g->edx, 1, 0);
            wr16(self + 0x26u, (uint16_t)(rd16(self + 0x26u) - (uint16_t)t41));
            if ((int16_t)rd16(self + 0x26u) < 0)
            {
    COW_AT(10119680)
                wr16(self + 0x26u, 0u);
            }
    COW_AT(10119684)
            t42 = rd32(COW_IMG(0x1036c190u)) - (uint32_t)(int16_t)rd16(self + 0x26u);
            wr32(sp0 - 0x24u, t42);
            t43 = rd16(self + 0x26u);
            d44 = fr(g, (double)(int32_t)t42 / (double)(int32_t)rd32(COW_IMG(0x1036c190u)));
            wrf32(self + 0xcu, (float)d44);
            wrf32(self + 0x14u, (float)d44);
            wrf32(self + 0x10u, (float)d44);
            d45 = (double)rdf32(self + 0xcu);
            if ((cow_fsw(g, d45, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u) != 0u)
            {
                loc_2c = rd32(sp0 - 0x2cu);
                loc_30 = rd32(sp0 - 0x30u);
                loc_34 = rd32(sp0 - 0x34u);
                loc_38 = rd32(sp0 - 0x38u);
            }
            else
            {
    COW_AT(101196bd)
                wr32(self + 0xcu, 0x3f800000u);
                wr32(self + 0x14u, 0x3f800000u);
                wr32(self + 0x10u, 0x3f800000u);
                loc_2c = rd32(sp0 - 0x2cu);
                loc_30 = rd32(sp0 - 0x30u);
                loc_34 = rd32(sp0 - 0x34u);
                loc_38 = rd32(sp0 - 0x38u);
            }
        }
L_1011979c: ;
    COW_AT(1011979c)
        if (rd32(self + 0x38u) != rd32(self + 0x34u))
        {
            eax = rd32(self + 0x34u);
            ecx = rd32(self + 0x38u);
            goto L_101197af;
        }
        eax = rd32(self + 0x34u);
        ecx = rd32(self + 0x38u);
    COW_AT(101197a6)
        if (rd32(self + 8u) != 0u) goto L_1011985d;
L_101197af: ;
    COW_AT(101197af)
        wr32(self + 0x38u, eax);
        if (rd8(rd32(rd32(self + 0x30u)) + 0x14u) == 0u)
        {
            eax = rd32(self + 0x30u);
        }
        else
        {
            eax = rd32(self + 0x30u);
            ecx = (ecx & 0xffffff00u) | rd8(rd32(rd32(self + 0x30u)) + 0x14u);
            edx = rd32(rd32(self + 0x30u));
    COW_AT(101197c4)
            wr32(sp0 - 0x24u, 0u);
            ebx = 0u;
            loc_24 = 0u;
L_101197c8: ;
    COW_AT(101197c8)
            if (loc_24 + rd32(eax + 4u) == 0u) goto L_1011983f;
            edi = loc_24 + rd32(eax + 4u);
    COW_AT(101197d3)
            if (rd16(edi) == 0u) goto L_101197eb;
    COW_AT(101197d8)
            t57 = rd32(self + 0x34u);
            wr32(sp0 - 0x3cu, t57);
            g->eax = t57;
            g->esp = sp0 - 0x38u;
            t58 = cow_cdecl(g, COW_IMG(0x10119870u), 1, t57);
            if ((uint32_t)(int16_t)rd16(edi) != t58)
            {
                loc_24 = rd32(sp0 - 0x24u);
                loc_2c = rd32(sp0 - 0x2cu);
                loc_30 = rd32(sp0 - 0x30u);
                loc_34 = rd32(sp0 - 0x34u);
                loc_38 = rd32(sp0 - 0x38u);
                goto L_1011983f;
            }
            loc_24 = rd32(sp0 - 0x24u);
            loc_2c = rd32(sp0 - 0x2cu);
            loc_30 = rd32(sp0 - 0x30u);
            loc_34 = rd32(sp0 - 0x34u);
            loc_38 = rd32(sp0 - 0x38u);
L_101197eb: ;
    COW_AT(101197eb)
            t59 = rd16(edi + 2u);
            wr8(sp0 - 0x10u, 0u);
            t60 = rd32(edi + 4u);
            wr32(sp0 - 0x20u, t60);
            t61 = rd32(edi + 8u);
            wr32(sp0 - 0x1cu, t61);
            t62 = rd32(edi + 0xcu);
            wr32(sp0 - 0x18u, t62);
            t63 = rd32(edi + 0x10u);
            wr32(sp0 - 0x14u, t63);
            if (rd32(edi + 0x18u) != 0u)
            {
                eax = rd32(edi + 0x18u);
                ebp = t59;
            }
            else
            {
                eax = rd32(edi + 0x18u);
                ebp = t59;
    COW_AT(10119819)
                wr32(sp0 - 0x3cu, sp0 - 0x20u);
                g->eax = eax;
                g->esp = sp0 - 0x38u;
                t64 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, sp0 - 0x20u);
                wr32(edi + 0x18u, t64);
                eax = t64;
                loc_24 = rd32(sp0 - 0x24u);
                loc_2c = rd32(sp0 - 0x2cu);
                loc_30 = rd32(sp0 - 0x30u);
                loc_34 = rd32(sp0 - 0x34u);
                loc_38 = rd32(sp0 - 0x38u);
            }
    COW_AT(1011982b)
            if (rd32(edi + 0x18u) == 0u) goto L_1011985d;
            edi = rd32(edi + 0x18u);
    COW_AT(10119832)
            t65 = rd32(rd32(edi) + (uint32_t)(int16_t)ebp * 4u);
            wr32(self + 8u, t65);
L_1011983f: ;
    COW_AT(1011983f)
            wr32(sp0 - 0x24u, loc_24 + 0x1cu);
            if ((int32_t)(ebx + 1u) < (int32_t)rd8(rd32(rd32(self + 0x30u)) + 0x14u))
            {
                eax = rd32(self + 0x30u);
                ecx = rd32(rd32(self + 0x30u));
                edx = rd8(rd32(rd32(self + 0x30u)) + 0x14u);
                ebx = ebx + 1u;
                loc_24 = loc_24 + 0x1cu;
                goto L_101197c8;
            }
            eax = rd32(self + 0x30u);
        }
    }
L_1011985d: ;
    COW_AT(1011985d)
    g->ebx = loc_2c;
    g->esi = loc_34;
    g->edi = loc_38;
    g->ebp = loc_30;
    return eax;
L_10119602: ;
    COW_AT(10119602)
    if ((uint8_t)arg1 != 0u)
    {
    COW_AT(10119606)
        wr32(sp0 - 0x3cu, sp0 - 0x28u);
        wr32(sp0 - 0x40u, sp0 + 4u);
        g->eax = sp0 + 4u;
        g->esp = sp0 - 0x38u;
        t23 = cow_thiscall(g, COW_IMG(0x101601d0u), COW_IMG(0x10621838u), 2, sp0 + 4u, sp0 - 0x28u);
        t24 = (uint32_t)(int16_t)rd16(rd32(rd32(self + 0x30u)) + 0xau);
        wr32(sp0 - 0x24u, t24);
        g->edx = t24;
        t25 = rd32(self + 0x30u);
        d26 = fr(g, (double)(int32_t)t24 * (double)rdf32(sp0 + 4u));
        fpush(g, d26);
        t27 = cow_call_regs(g, COW_IMG(0x10311c6cu), t23, g->ecx, g->edx, 1, 0);
        t28 = g->edx;
        wr16(self + 0x22u, (uint16_t)t27);
        t29 = (uint32_t)(int16_t)rd16(rd32(t25) + 0xcu);
        wr32(sp0 - 0x24u, t29);
        t30 = rd32(t25);
        d31 = fr(g, (double)(int32_t)t29 * (double)rdf32(sp0 - 0x28u));
        fpush(g, d31);
        t32 = cow_call_regs(g, COW_IMG(0x10311c6cu), t30, g->ecx, g->edx, 1, 0);
        wr16(self + 0x24u, (uint16_t)t32);
    }
    COW_AT(10119653)
    t33 = (uint32_t)(int16_t)rd16(self + 0x22u);
    t34 = rd32(self + 4u);
    wr32(t34, t33);
    t35 = (uint32_t)(int16_t)rd16(self + 0x24u);
    t36 = rd32(self + 4u);
    wr32(t36 + 4u, t35);
    eax = t34;
    ecx = t35;
    edx = t36;
    loc_2c = in_ebx;
    loc_30 = in_ebp;
    loc_34 = in_esi;
    loc_38 = in_edi;
    goto L_10119666;
L_10119764: ;
    COW_AT(10119764)
    x0 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, (double)(int32_t)rd32(self + 0x48u) * (double)rdf32(COW_IMG(0x1032a3e0u))));
L_10119773: ;
    COW_AT(10119773)
    wrf32(self + 0xcu, (float)x0);
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u) == 0u)
    {
    COW_AT(10119785)
        wr32(self + 0xcu, 0x3f666666u);
    }
    goto L_1011979c;
L_1011978e: ;
    COW_AT(1011978e)
    x0 = fr(g, (double)(int32_t)rd32(self + 0x48u) * (double)rdf32(COW_IMG(0x1032a3e0u)));
    goto L_10119773;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10119550(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10119566u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x38u;
        g->ebp = 0u;
        wr32(sp0 - 0x2cu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10119575u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x38u;
        g->ebx = (in_ebx & 0xffffff00u) | (uint8_t)arg1;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1011958du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x38u;
        g->ebx = (in_ebx & 0xffffff00u) | (uint8_t)arg1;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101195dau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x38u;
        g->ebx = (in_ebx & 0xffffff00u) | (uint8_t)arg1;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10119602u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x38u;
        g->ebx = (in_ebx & 0xffffff00u) | (uint8_t)arg1;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10119606u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x38u;
        g->ebx = (in_ebx & 0xffffff00u) | (uint8_t)arg1;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10119653u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x38u;
        g->ebx = (in_ebx & 0xffffff00u) | (uint8_t)arg1;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1011966cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x38u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10119680u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10119684u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101196bdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x38u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101196dfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x38u;
        g->ebp = 0u;
        g->edi = 0x3f800000u;
        (void)sp0;
        return 1;
    }
    case 0x10119707u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x38u;
        g->ebp = 0u;
        g->edi = 0x3f800000u;
        (void)sp0;
        return 1;
    }
    case 0x1011970cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x38u;
        g->ebp = 0u;
        g->edi = 0x3f800000u;
        (void)sp0;
        return 1;
    }
    case 0x10119727u:
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
        self = g->esi;
        g->esp = sp0 - 0x38u;
        g->ebp = 0u;
        g->edi = 0x3f800000u;
        (void)sp0;
        return 1;
    }
    case 0x10119734u:
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
        self = g->esi;
        g->esp = sp0 - 0x38u;
        g->ebp = 0u;
        g->edi = 0x3f800000u;
        (void)sp0;
        return 1;
    }
    case 0x10119737u:
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
        self = g->esi;
        g->esp = sp0 - 0x38u;
        g->ebp = 0u;
        g->edi = 0x3f800000u;
        (void)sp0;
        return 1;
    }
    case 0x1011973du:
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
        self = g->esi;
        g->esp = sp0 - 0x38u;
        g->ebp = 0u;
        g->edi = 0x3f800000u;
        (void)sp0;
        return 1;
    }
    case 0x10119741u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x38u;
        g->ebp = 0u;
        g->edi = 0x3f800000u;
        (void)sp0;
        return 1;
    }
    case 0x10119749u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x38u;
        g->ebp = 0u;
        g->edi = 0x3f800000u;
        (void)sp0;
        return 1;
    }
    case 0x1011974cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x38u;
        g->ebp = 0u;
        g->edi = 0x3f800000u;
        (void)sp0;
        return 1;
    }
    case 0x1011974fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x38u;
        g->ebp = 0u;
        g->edi = 0x3f800000u;
        (void)sp0;
        return 1;
    }
    case 0x10119756u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x38u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1011975fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x38u;
        g->ebp = 0u;
        g->edi = 0x3f800000u;
        (void)sp0;
        return 1;
    }
    case 0x10119764u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x38u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10119773u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        x0 = ST(0);
        g->esp = sp0 - 0x38u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10119785u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x38u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1011978eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x38u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10119799u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x38u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1011979cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x38u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101197a6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x38u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101197afu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x38u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101197c4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x38u;
        g->ebx = 0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101197c8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x38u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101197d3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x38u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101197d8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x38u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101197ebu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x38u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10119819u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1011982bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x10119832u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1011983fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x38u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1011985du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     101195ef: holds in_ebx, which no location here says
     10119666: holds in_ebx, which no location here says
     101196d0: holds in_ebx, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10119550(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10119550(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
