/* f_0x100d6940 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=7 */
void cow_fn_100d6940(Guest* g)
{
    double d30;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_4;
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
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg7 = rd32(sp0 + 0x1cu);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 44u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100d6954u: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100d6954;
    case 0x100d696cu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100d696c;
    case 0x100d697au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d697a;
    case 0x100d6982u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d6982;
    case 0x100d698du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d698d;
    case 0x100d6990u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d6990;
    case 0x100d6993u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d6993;
    case 0x100d699bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d699b;
    case 0x100d69a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d69a3;
    case 0x100d69abu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d69ab;
    case 0x100d69b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d69b1;
    case 0x100d69c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d69c3;
    case 0x100d69d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d69d1;
    case 0x100d69d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d69d8;
    case 0x100d69e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d69e6;
    case 0x100d69f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d69f4;
    case 0x100d69fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d69fb;
    case 0x100d6a09u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d6a09;
    case 0x100d6a17u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d6a17;
    case 0x100d6a1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d6a1c;
    case 0x100d6a3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_100d6a3b;
    case 0x100d6a48u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d6a48;
    case 0x100d6a56u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d6a56;
    case 0x100d6a64u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100d6a64;
    case 0x100d6a87u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_100d6a87;
    case 0x100d6aa1u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100d6aa1;
    case 0x100d6aabu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100d6aab;
    case 0x100d6ae0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100d6ae0;
    case 0x100d6ae7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100d6ae7;
    case 0x100d6af3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100d6af3;
    case 0x100d6affu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100d6aff;
    case 0x100d6b0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100d6b0b;
    case 0x100d6b17u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100d6b17;
    case 0x100d6b23u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100d6b23;
    case 0x100d6b2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100d6b2f;
    case 0x100d6b3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100d6b3b;
    case 0x100d6b45u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100d6b45;
    case 0x100d6b5bu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100d6b5b;
    case 0x100d6b71u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; goto E_100d6b71;
    case 0x100d6b81u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; goto E_100d6b81;
    case 0x100d6ba0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); goto E_100d6ba0;
    case 0x100d6ba9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; goto E_100d6ba9;
    case 0x100d6bb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; goto E_100d6bb9;
    case 0x100d6bc9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; goto E_100d6bc9;
    case 0x100d6be8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); goto E_100d6be8;
    case 0x100d6bf1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; goto E_100d6bf1;
    case 0x100d6c01u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; goto E_100d6c01;
    case 0x100d6c11u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; goto E_100d6c11;
    case 0x100d6c2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); goto E_100d6c2c;
    case 0x100d6c32u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; goto E_100d6c32;
    case 0x100d6c42u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; goto E_100d6c42;
    case 0x100d6c52u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; goto E_100d6c52;
    case 0x100d6c6au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_100d6c6a;
    case 0x100d6c74u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_100d6c74;
    case 0x100d6c8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_100d6c8e;
    case 0x100d6c97u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_100d6c97;
    case 0x100d6ca7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_100d6ca7;
    case 0x100d6cacu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_100d6cac;
    case 0x100d6cb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_100d6cb8;
    case 0x100d6cbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_100d6cbc;
    case 0x100d6cd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_100d6cd8;
    case 0x100d6cdeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_100d6cde;
    case 0x100d6cebu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_100d6ceb;
    case 0x100d6cf4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_100d6cf4;
    default: break;
    }
#endif

    COW_AT(100d6940)
    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_ebp);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if (rd32(sp0 + 0x10u) == 0u)
    {
        ebp = 0u;
        loc_4 = in_ebx;
        loc_8 = in_ebp;
        loc_c = in_esi;
        loc_10 = in_edi;
        goto L_100d6cf4;
    }
    ecx = rd32(sp0 + 0x10u);
    COW_AT(100d6954)
    if (rd8(self + 0xf8u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0xf8u);
        esi = rd32(sp0 + 8u) & arg3;
        goto L_100d6aa1;
    }
    esi = rd32(sp0 + 8u) & arg3;
    COW_AT(100d696c)
    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall(g, rd32(t1 + 0x330u), self, 0);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        edx = t3;
    COW_AT(100d6982)
        if (rd32(self + 0x598u) == 2u)
        {
            eax = rd32(self + 0x598u) - 2u;
    COW_AT(100d69ab)
            esi = esi | 0x720000u;
        }
        else
        {
            eax = rd32(self + 0x598u) - 2u;
    COW_AT(100d698d)
            if (eax == 1u)
            {
                eax = eax - 1u;
    COW_AT(100d69a3)
                esi = esi | 0x620000u;
            }
            else
            {
                eax = eax - 1u;
    COW_AT(100d6990)
                if (eax == 1u)
                {
                    eax = eax - 1u;
    COW_AT(100d699b)
                    esi = esi | 0x6c0000u;
                }
                else
                {
                    eax = eax - 1u;
    COW_AT(100d6993)
                    esi = esi | 0x660000u;
                }
            }
        }
    }
    else
    {
        eax = t2;
        edx = t3;
    COW_AT(100d697a)
        esi = esi | 0x660000u;
    }
    COW_AT(100d69b1)
    t4 = rd32(sp0 + 0x10u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t5 = cow_thiscall(g, COW_IMG(0x1018cec0u), t4, 0);
    t6 = g->edx;
    if (rd16(t5 + 4u) != 1u)
    {
        eax = t5;
        edx = t6;
        ebp = t4;
        goto L_100d69d8;
    }
    eax = t5;
    edx = t6;
    ebp = t4;
    COW_AT(100d69c3)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t7 = cow_thiscall(g, COW_IMG(0x1018cec0u), ebp, 0);
    t8 = g->edx;
    if (rd16(t7 + 6u) != 1u)
    {
        eax = t7;
        edx = t8;
        goto L_100d69d8;
    }
    COW_AT(100d69d1)
    edx = esi | 0x62u;
L_100d6a1c: ;
    COW_AT(100d6a1c)
    wr32(sp0 - 0x14u, arg7);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, arg3);
    wr32(sp0 - 0x20u, edx & arg3);
    wr32(sp0 - 0x24u, 7u);
    wr32(sp0 - 0x28u, sp0 + 0x18u);
    g->eax = sp0 + 0x18u;
    g->esp = sp0 - 0x10u;
    t17 = cow_thiscall(g, COW_IMG(0x100ce480u), self, 6, sp0 + 0x18u, 7u, edx & arg3, arg3, 0u, arg7);
    if (rd32(t17) == 0u) goto L_100d6a87;
    ebp = rd32(t17);
    COW_AT(100d6a3b)
    t18 = rd32(sp0 - 0xcu);
    t19 = rd32(sp0 - 0x10u);
    wr32(arg1, ebp);
    g->ebx = rd32(sp0 - 4u);
    g->esi = t18;
    g->edi = t19;
    g->ebp = rd32(sp0 - 8u);
    return;
L_100d69d8: ;
    COW_AT(100d69d8)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t9 = cow_thiscall(g, COW_IMG(0x1018cec0u), ebp, 0);
    t10 = g->edx;
    if (rd16(t9 + 4u) != 1u)
    {
        eax = t9;
        edx = t10;
        goto L_100d69fb;
    }
    eax = t9;
    edx = t10;
    COW_AT(100d69e6)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t11 = cow_thiscall(g, COW_IMG(0x1018cec0u), ebp, 0);
    t12 = g->edx;
    if (rd16(t11 + 6u) != 2u)
    {
        eax = t11;
        edx = t12;
        goto L_100d69fb;
    }
    COW_AT(100d69f4)
    edx = esi | 0x63u;
    goto L_100d6a1c;
L_100d69fb: ;
    COW_AT(100d69fb)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t13 = cow_thiscall(g, COW_IMG(0x1018cec0u), ebp, 0);
    t14 = g->edx;
    if (rd16(t13 + 4u) != 1u)
    {
        eax = t13;
        edx = t14;
        goto L_100d6a48;
    }
    eax = t13;
    edx = t14;
    COW_AT(100d6a09)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t15 = cow_thiscall(g, COW_IMG(0x1018cec0u), ebp, 0);
    t16 = g->edx;
    if (rd16(t15 + 6u) != 3u)
    {
        eax = t15;
        edx = t16;
        goto L_100d6a48;
    }
    COW_AT(100d6a17)
    edx = esi | 0x64u;
    goto L_100d6a1c;
L_100d6a48: ;
    COW_AT(100d6a48)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t20 = cow_thiscall(g, COW_IMG(0x1018cec0u), ebp, 0);
    t21 = g->edx;
    if (rd16(t20 + 4u) != 1u) goto L_100d6a87;
    eax = t20;
    edx = t21;
    COW_AT(100d6a56)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t22 = cow_thiscall(g, COW_IMG(0x1018cec0u), ebp, 0);
    t23 = g->edx;
    if (rd16(t22 + 6u) != 4u) goto L_100d6a87;
    eax = t22;
    edx = t23;
    COW_AT(100d6a64)
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0xffffffffu);
    wr32(sp0 - 0x20u, 0x3530736cu);
    wr32(sp0 - 0x24u, 7u);
    wr32(sp0 - 0x28u, sp0 + 0x18u);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t24 = cow_thiscall(g, COW_IMG(0x100ce480u), self, 6, sp0 + 0x18u, 7u, 0x3530736cu, 0xffffffffu, 0u, 1u);
    if (rd32(t24) != 0u)
    {
        ebp = rd32(t24);
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        goto L_100d6cf4;
    }
L_100d6a87: ;
    COW_AT(100d6a87)
    wr32(sp0 - 0x14u, arg7);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, arg3);
    t25 = (esi | 0x61u) & arg3;
    wr32(sp0 - 0x20u, t25);
    wr32(sp0 - 0x24u, 7u);
    wr32(sp0 - 0x28u, sp0 + 0x18u);
    eax = sp0 + 0x18u;
    edx = arg7;
    loc_14 = arg7;
    loc_1c = arg3;
    loc_20 = t25;
L_100d6ceb: ;
    COW_AT(100d6ceb)
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t74 = cow_thiscall(g, COW_IMG(0x100ce480u), self, 6, sp0 + 0x18u, 7u, loc_20, loc_1c, 0u, loc_14);
    ebp = rd32(t74);
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
L_100d6cf4: ;
    COW_AT(100d6cf4)
    wr32(arg1, ebp);
    g->ebx = loc_4;
    g->esi = loc_c;
    g->edi = loc_10;
    g->ebp = loc_8;
    return;
L_100d6aa1: ;
    COW_AT(100d6aa1)
    if (rd32(sp0 + 0x18u) == 0u) goto L_100d6b5b;
    COW_AT(100d6aab)
    g->eax = eax;
    g->edx = rd32(self);
    t26 = rd32(self);
    g->esp = sp0 - 0x10u;
    t27 = cow_thiscall(g, rd32(t26 + 0x1c0u), self, 0);
    t28 = g->edx;
    t29 = rd32(arg5);
    d30 = fr(g, (double)rdf32(t27 + 4u) - (double)rdf32(COW_IMG(0x10330274u)));
    wrf32(sp0 + 0x10u, (float)d30);
    g->eax = t29;
    g->edx = t28;
    t31 = cow_thiscall(g, rd32(t29 + 0x1bcu), arg5, 0);
    t32 = g->edx;
    wr32(sp0 - 0x14u, t31);
    t33 = rd32(sp0 + 0x10u);
    wr32(sp0 - 0x18u, t33);
    t34 = cow_call_regs(g, COW_IMG(0x100a8490u), t31, self, t32, 0, 2, t33, t31);
    if (t34 > 7u) goto L_100d6b45;
    eax = t34;
    COW_AT(100d6ae0)
    t35 = rd32(COW_IMG(0x100d6d04u) + eax * 4u);
    switch (t35 - RD)
    {
    case 0x100d6ae7u: goto L_100d6ae7;
    case 0x100d6af3u: goto L_100d6af3;
    case 0x100d6affu: goto L_100d6aff;
    case 0x100d6b0bu: goto L_100d6b0b;
    case 0x100d6b17u: goto L_100d6b17;
    case 0x100d6b23u: goto L_100d6b23;
    case 0x100d6b2fu: goto L_100d6b2f;
    case 0x100d6b3bu: goto L_100d6b3b;
    default: rt_fatal(g, COW_IMG(0x100d6ae0u), "switch");
    }
    return;
L_100d6ae7: ;
    COW_AT(100d6ae7)
    esi = rd32(sp0 + 0x18u) | 0x6e6e0000u;
L_100d6b45: ;
    COW_AT(100d6b45)
    wr32(sp0 - 0x14u, arg7);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0xffffffffu);
    wr32(sp0 - 0x20u, esi);
    wr32(sp0 - 0x24u, 7u);
    wr32(sp0 - 0x28u, sp0 + 0x18u);
    eax = sp0 + 0x18u;
    edx = arg7;
    loc_14 = arg7;
    loc_1c = 0xffffffffu;
    loc_20 = esi;
    goto L_100d6ceb;
L_100d6af3: ;
    COW_AT(100d6af3)
    esi = rd32(sp0 + 0x18u) | 0x656e0000u;
    goto L_100d6b45;
L_100d6aff: ;
    COW_AT(100d6aff)
    esi = rd32(sp0 + 0x18u) | 0x65650000u;
    goto L_100d6b45;
L_100d6b0b: ;
    COW_AT(100d6b0b)
    esi = rd32(sp0 + 0x18u) | 0x73650000u;
    goto L_100d6b45;
L_100d6b17: ;
    COW_AT(100d6b17)
    esi = rd32(sp0 + 0x18u) | 0x73730000u;
    goto L_100d6b45;
L_100d6b23: ;
    COW_AT(100d6b23)
    esi = rd32(sp0 + 0x18u) | 0x77730000u;
    goto L_100d6b45;
L_100d6b2f: ;
    COW_AT(100d6b2f)
    esi = rd32(sp0 + 0x18u) | 0x77770000u;
    goto L_100d6b45;
L_100d6b3b: ;
    COW_AT(100d6b3b)
    esi = rd32(sp0 + 0x18u) | 0x6e770000u;
    goto L_100d6b45;
L_100d6b5b: ;
    COW_AT(100d6b5b)
    wr32(sp0 + 8u, 0u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t36 = cow_thiscall(g, COW_IMG(0x1018cec0u), ecx, 0);
    t37 = g->edx;
    if (rd16(t36 + 4u) != 1u)
    {
        eax = t36;
        edx = t37;
        esi = esi | 0x690000u;
        goto L_100d6ba9;
    }
    eax = t36;
    edx = t37;
    esi = esi | 0x690000u;
    COW_AT(100d6b71)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t38 = cow_thiscall(g, COW_IMG(0x1018cec0u), rd32(sp0 + 0x10u), 0);
    t39 = g->edx;
    if (rd16(t38 + 6u) != 1u)
    {
        eax = t38;
        edx = t39;
        goto L_100d6ba9;
    }
    edx = t39;
    COW_AT(100d6b81)
    wr32(sp0 - 0x14u, arg3);
    t40 = (esi & 0xffffff00u) | (uint8_t)(esi | 0x62u);
    wr32(sp0 - 0x18u, t40);
    wr32(sp0 - 0x1cu, 7u);
    wr32(sp0 + 0x10u, t40);
    g->eax = t40;
    g->esp = sp0 - 0x10u;
    t41 = cow_fastcall(g, COW_IMG(0x100ce780u), self, edx, 3, 7u, t40, arg3);
    t42 = g->ecx;
    t43 = g->edx;
    wr32(sp0 + 0x18u, t41);
    if (t41 == 0u)
    {
        eax = t41;
        edx = t43;
        goto L_100d6c74;
    }
    ecx = t42;
    COW_AT(100d6ba0)
    esi = rd32(sp0 + 0x10u);
    edi = arg3;
L_100d6c8e: ;
    COW_AT(100d6c8e)
    if ((int32_t)rd32(sp0 + 0x18u) <= 1)
    {
    COW_AT(100d6cb8)
        edx = rd32(sp0 + 8u);
    }
    else
    {
        eax = rd32(sp0 + 0x18u);
    COW_AT(100d6c97)
        if (((rd32(self + 0x7c4u) ^ esi) & 0xff000000u) != 0u)
        {
            edx = rd32(self + 0x7c4u) ^ esi;
        }
        else
        {
            edx = rd32(self + 0x7c4u) ^ esi;
    COW_AT(100d6ca7)
            wr32(sp0 + 0x18u, eax - 1u);
            eax = eax - 1u;
        }
    COW_AT(100d6cac)
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t70 = cow_fastcall(g, COW_IMG(0x103149e0u), ecx, edx, 0);
        t71 = cow_divs(g, t70, rd32(sp0 + 0x18u));
        t72 = cow_mods(g, t70, rd32(sp0 + 0x18u));
        edx = t72;
    }
    COW_AT(100d6cbc)
    wr32(sp0 - 0x14u, arg7);
    wr32(sp0 - 0x18u, edx);
    wr32(sp0 - 0x1cu, edi);
    wr32(sp0 - 0x20u, esi);
    wr32(sp0 - 0x24u, 7u);
    wr32(sp0 - 0x28u, sp0 + 0x18u);
    g->eax = arg7;
    g->esp = sp0 - 0x10u;
    t73 = cow_thiscall(g, COW_IMG(0x100ce480u), self, 6, sp0 + 0x18u, 7u, esi, edi, edx, arg7);
    if (rd32(t73) == 0u)
    {
        eax = t73;
        goto L_100d6cde;
    }
    eax = t73;
    ebp = rd32(t73);
    COW_AT(100d6cd8)
    if (rd32(ebp) != 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        goto L_100d6cf4;
    }
L_100d6cde: ;
    COW_AT(100d6cde)
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, edi);
    wr32(sp0 - 0x20u, esi);
    wr32(sp0 - 0x24u, 7u);
    wr32(sp0 - 0x28u, sp0 + 0x18u);
    edx = sp0 + 0x18u;
    loc_14 = 1u;
    loc_1c = edi;
    loc_20 = esi;
    goto L_100d6ceb;
L_100d6ba9: ;
    COW_AT(100d6ba9)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t44 = cow_thiscall(g, COW_IMG(0x1018cec0u), rd32(sp0 + 0x10u), 0);
    t45 = g->edx;
    if (rd16(t44 + 4u) != 1u)
    {
        eax = t44;
        edx = t45;
        goto L_100d6bf1;
    }
    eax = t44;
    edx = t45;
    COW_AT(100d6bb9)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t46 = cow_thiscall(g, COW_IMG(0x1018cec0u), rd32(sp0 + 0x10u), 0);
    t47 = g->edx;
    if (rd16(t46 + 6u) != 2u)
    {
        eax = t46;
        edx = t47;
        goto L_100d6bf1;
    }
    edx = t47;
    COW_AT(100d6bc9)
    wr32(sp0 - 0x14u, arg3);
    t48 = (esi & 0xffffff00u) | (uint8_t)(esi | 0x63u);
    wr32(sp0 - 0x18u, t48);
    wr32(sp0 - 0x1cu, 7u);
    wr32(sp0 + 0x10u, t48);
    g->eax = t48;
    g->esp = sp0 - 0x10u;
    t49 = cow_fastcall(g, COW_IMG(0x100ce780u), self, edx, 3, 7u, t48, arg3);
    t50 = g->ecx;
    t51 = g->edx;
    wr32(sp0 + 0x18u, t49);
    if (t49 == 0u)
    {
        eax = t49;
        edx = t51;
        goto L_100d6c74;
    }
    ecx = t50;
    COW_AT(100d6be8)
    esi = rd32(sp0 + 0x10u);
    edi = arg3;
    goto L_100d6c8e;
L_100d6bf1: ;
    COW_AT(100d6bf1)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t52 = cow_thiscall(g, COW_IMG(0x1018cec0u), rd32(sp0 + 0x10u), 0);
    t53 = g->edx;
    if (rd16(t52 + 4u) != 1u)
    {
        eax = t52;
        edx = t53;
        goto L_100d6c32;
    }
    eax = t52;
    edx = t53;
    COW_AT(100d6c01)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t54 = cow_thiscall(g, COW_IMG(0x1018cec0u), rd32(sp0 + 0x10u), 0);
    t55 = g->edx;
    if (rd16(t54 + 6u) != 3u)
    {
        eax = t54;
        edx = t55;
        goto L_100d6c32;
    }
    edx = t55;
    COW_AT(100d6c11)
    wr32(sp0 - 0x14u, arg3);
    t56 = (esi & 0xffffff00u) | (uint8_t)(esi | 0x64u);
    wr32(sp0 - 0x18u, t56);
    wr32(sp0 - 0x1cu, 7u);
    wr32(sp0 + 0x10u, t56);
    g->eax = t56;
    g->esp = sp0 - 0x10u;
    t57 = cow_fastcall(g, COW_IMG(0x100ce780u), self, edx, 3, 7u, t56, arg3);
    t58 = g->ecx;
    t59 = g->edx;
    wr32(sp0 + 0x18u, t57);
    if (t57 == 0u)
    {
        eax = t57;
        edx = t59;
        goto L_100d6c74;
    }
    ecx = t58;
    COW_AT(100d6c2c)
    esi = rd32(sp0 + 0x10u);
    edi = arg3;
    goto L_100d6c8e;
L_100d6c32: ;
    COW_AT(100d6c32)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t60 = cow_thiscall(g, COW_IMG(0x1018cec0u), rd32(sp0 + 0x10u), 0);
    t61 = g->edx;
    if (rd16(t60 + 4u) != 1u)
    {
        eax = t60;
        edx = t61;
        goto L_100d6c74;
    }
    eax = t60;
    edx = t61;
    COW_AT(100d6c42)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t62 = cow_thiscall(g, COW_IMG(0x1018cec0u), rd32(sp0 + 0x10u), 0);
    t63 = g->edx;
    if (rd16(t62 + 6u) != 4u)
    {
        eax = t62;
        edx = t63;
        goto L_100d6c74;
    }
    eax = t62;
    edx = t63;
    COW_AT(100d6c52)
    wr32(sp0 - 0x14u, 0xffffffffu);
    wr32(sp0 - 0x18u, 0x3530736cu);
    wr32(sp0 - 0x1cu, 7u);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t64 = cow_fastcall(g, COW_IMG(0x100ce780u), self, edx, 3, 7u, 0x3530736cu, 0xffffffffu);
    t65 = g->ecx;
    t66 = g->edx;
    wr32(sp0 + 0x18u, t64);
    if (t64 == 0u)
    {
        eax = t64;
        edx = t66;
        goto L_100d6c74;
    }
    ecx = t65;
    COW_AT(100d6c6a)
    esi = 0x3530736cu;
    edi = 0xffffffffu;
    goto L_100d6c8e;
L_100d6c74: ;
    COW_AT(100d6c74)
    wr32(sp0 - 0x14u, arg3);
    t67 = (esi | 0x61u) & arg3;
    wr32(sp0 - 0x18u, t67);
    wr32(sp0 - 0x1cu, 7u);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t68 = cow_fastcall(g, COW_IMG(0x100ce780u), self, edx, 3, 7u, t67, arg3);
    t69 = g->ecx;
    wr32(sp0 + 0x18u, t68);
    if (t68 == 0u)
    {
        ebp = 0u;
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        goto L_100d6cf4;
    }
    ecx = t69;
    esi = esi | 0x61u;
    edi = arg3;
    goto L_100d6c8e;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100d6940(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100d6954u:
    {
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100d696cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d697au:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d6982u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d698du:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d6990u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d6993u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d699bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d69a3u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d69abu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d69b1u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d69c3u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d69d1u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d69d8u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d69e6u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d69f4u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d69fbu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d6a09u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d6a17u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d6a1cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d6a3bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x28u, sp0 + 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100d6a48u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d6a56u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d6a64u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d6a87u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d6aa1u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d6aabu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100d6ae0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100d6ae7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100d6af3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100d6affu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100d6b0bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100d6b17u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100d6b23u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100d6b2fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100d6b3bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100d6b45u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100d6b5bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d6b71u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d6b81u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d6ba0u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x10u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d6ba9u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d6bb9u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d6bc9u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d6be8u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x10u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d6bf1u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d6c01u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d6c11u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d6c2cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x10u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d6c32u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d6c42u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d6c52u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d6c6au:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d6c74u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100d6c8eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100d6c97u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100d6ca7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100d6cacu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100d6cb8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100d6cbcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100d6cd8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x28u, sp0 + 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100d6cdeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x28u, sp0 + 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100d6cebu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x28u, sp0 + 0x18u);
        wr32(sp0 - 0x24u, 7u);
        wr32(sp0 - 0x18u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100d6cf4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100d6940(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100d6940(g);
    g->esp = sp0;
    rt_return(g, g->eax, 28u);
}
/* COW_ADAPTER END */
