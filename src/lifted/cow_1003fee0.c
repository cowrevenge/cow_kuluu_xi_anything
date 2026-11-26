/* f_0x1003fee0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1003fee0(Guest* g)
{
    double d11;
    double d33;
    double d34;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t t1;
    uint32_t t10;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 76u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1003fef2u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x30u); goto E_1003fef2;
    case 0x1003ff04u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_1003ff04;
    case 0x1003ff0eu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_1003ff0e;
    case 0x1003ff15u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_1003ff15;
    case 0x1003ff23u: eax = g->eax; ecx = g->ecx; self = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_1003ff23;
    case 0x1003ff2au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1003ff2a;
    case 0x1003ff37u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_1003ff37;
    case 0x1003ff48u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_1003ff48;
    case 0x1003ff5au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_1003ff5a;
    case 0x1003ff5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_1003ff5c;
    case 0x1003ff63u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1003ff63;
    case 0x1003ff85u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1003ff85;
    case 0x1003ff94u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1003ff94;
    case 0x1003ffa1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1003ffa1;
    case 0x1003ffabu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1003ffab;
    case 0x1003ffb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1003ffb2;
    case 0x1003ffbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1003ffbc;
    case 0x1003ffc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1003ffc3;
    case 0x1003ffcdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1003ffcd;
    case 0x1003ffd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1003ffd4;
    case 0x1003ffdeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1003ffde;
    case 0x1003ffe5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1003ffe5;
    case 0x1003ffefu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1003ffef;
    case 0x1003fff6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1003fff6;
    case 0x10040002u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10040002;
    case 0x10040004u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10040004;
    case 0x10040006u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10040006;
    case 0x10040017u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_10040017;
    case 0x1004001eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004001e;
    case 0x10040033u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10040033;
    case 0x1004003bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004003b;
    case 0x10040040u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10040040;
    case 0x10040058u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10040058;
    case 0x1004005fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1004005f;
    case 0x10040065u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10040065;
    case 0x10040067u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10040067;
    case 0x1004006fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1004006f;
    case 0x1004007cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1004007c;
    case 0x10040083u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10040083;
    case 0x100400a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_100400a3;
    case 0x100400aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_100400ae;
    case 0x100400b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_100400b6;
    case 0x100400bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_100400bb;
    case 0x100400edu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_100400ed;
    case 0x100400f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_100400f2;
    case 0x100400fau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_100400fa;
    case 0x100400ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_100400ff;
    case 0x10040107u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_10040107;
    case 0x1004010cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_1004010c;
    case 0x10040113u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_10040113;
    case 0x10040118u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_10040118;
    case 0x10040130u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10040130;
    case 0x10040138u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_10040138;
    case 0x1004013fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1004013f;
    case 0x10040146u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10040146;
    case 0x1004014du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1004014d;
    case 0x10040153u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10040153;
    case 0x10040162u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10040162;
    case 0x1004016au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1004016a;
    case 0x10040171u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10040171;
    case 0x10040175u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10040175;
    case 0x10040192u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10040192;
    case 0x10040197u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10040197;
    case 0x1004019eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1004019e;
    case 0x100401a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100401a5;
    case 0x100401acu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100401ac;
    case 0x100401b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_100401b5;
    default: break;
    }
#endif

    COW_AT(1003fee0)
    wr32(sp0 - 0x30u, in_ebx);
    t1 = rd16(self + 0x32u);
    if ((t1 & 0x8080u) != 0u)
    {
        eax = in_eax;
        edx = in_edx;
        ebp = in_ebp;
        esi = in_esi;
        edi = in_edi;
        loc_30 = in_ebx;
    }
    else
    {
    COW_AT(1003fef2)
        wr32(sp0 - 0x34u, in_ebp);
        t2 = (in_ebp & 0xffff0000u) | rd16(self + 0x30u);
        wr32(sp0 - 0x38u, in_esi);
        wr32(sp0 - 0x3cu, in_edi);
        if ((t2 & 0xfu) == 6u)
        {
            eax = t2 & 0xfu;
            ebp = t2;
            goto L_1003ff0e;
        }
        eax = t2 & 0xfu;
        ebp = t2;
    COW_AT(1003ff04)
        if ((uint16_t)eax != 5u)
        {
            edx = in_edx;
            loc_30 = in_ebx;
            loc_34 = in_ebp;
            loc_38 = in_esi;
            loc_3c = in_edi;
            goto L_10040017;
        }
L_1003ff0e: ;
    COW_AT(1003ff0e)
        if (rd8(self + 0x34u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x34u);
    COW_AT(1003ff5a)
            edx = in_edx;
            ebp = 0u;
            loc_30 = in_ebx;
            loc_34 = in_ebp;
            loc_38 = in_esi;
            loc_3c = in_edi;
L_1003ff5c: ;
    COW_AT(1003ff5c)
            g->esp = sp0 - 0x3cu;
            COW_RET(0x1003ff63u);
            t5 = cow_call_regs(g, COW_IMG(0x1003fd70u), eax, self, edx, 1, 0);
            eax = t5;
    COW_AT(1003ff63)
            esi = eax + ebp;
            edi = sp0 - 0x24u;
            ecx = 9u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wr32(sp0 - 0x40u, sp0 - 0x18u);
            g->eax = rd32(rd32(COW_IMG(0x1047cf7cu)));
            g->edx = sp0 - 0x18u;
            t6 = rd32(rd32(COW_IMG(0x1047cf7cu)));
            t7 = rd32(COW_IMG(0x1047cf7cu));
            g->esp = sp0 - 0x3cu;
            COW_RET(0x1003ff85u);
            t8 = cow_thiscall(g, rd32(t6 + 0x94u), t7, 1, sp0 - 0x18u);
            t9 = g->ecx;
            t10 = g->edx;
            d11 = cow_take_float(g);
            eax = t8;
            ecx = t9;
            edx = t10;
            x0 = d11;
    COW_AT(1003ff85)
            if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329990u)), 1u) & 0x4100u) == 0u)
            {
                eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329990u)), 1u) & 0x4100u;
                goto L_10040004;
            }
            eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329990u)), 1u) & 0x4100u;
    COW_AT(1003ff94)
            if (x0 < (double)rdf32(COW_IMG(0x1032a378u)))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a378u)), 0u);
                goto L_10040006;
            }
    COW_AT(1003ffa1)
            t12 = rd32(sp0 - 0x24u);
            wr32(sp0 - 0x40u, t12);
            g->eax = t12;
            g->edx = edx;
            g->esp = sp0 - 0x3cu;
            COW_RET(0x1003ffabu);
            t13 = cow_cdecl(g, COW_IMG(0x1006ca20u), 1, t12);
            t14 = g->edx;
            eax = t13;
            edx = t14;
    COW_AT(1003ffab)
            if ((uint8_t)eax == 0u) goto L_10040006;
    COW_AT(1003ffb2)
            t15 = rd32(sp0 - 0x20u);
            wr32(sp0 - 0x40u, t15);
            g->eax = eax;
            g->ecx = t15;
            g->edx = edx;
            g->esp = sp0 - 0x3cu;
            COW_RET(0x1003ffbcu);
            t16 = cow_cdecl(g, COW_IMG(0x1006ca20u), 1, t15);
            t17 = g->ecx;
            t18 = g->edx;
            eax = t16;
            ecx = t17;
            edx = t18;
    COW_AT(1003ffbc)
            if ((uint8_t)eax == 0u) goto L_10040006;
    COW_AT(1003ffc3)
            t19 = rd32(sp0 - 0x1cu);
            wr32(sp0 - 0x40u, t19);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = t19;
            g->esp = sp0 - 0x3cu;
            COW_RET(0x1003ffcdu);
            t20 = cow_cdecl(g, COW_IMG(0x1006ca20u), 1, t19);
            t21 = g->ecx;
            t22 = g->edx;
            eax = t20;
            ecx = t21;
            edx = t22;
    COW_AT(1003ffcd)
            if ((uint8_t)eax == 0u) goto L_10040006;
    COW_AT(1003ffd4)
            t23 = rd32(sp0 - 8u);
            wr32(sp0 - 0x40u, t23);
            g->eax = t23;
            g->edx = edx;
            g->esp = sp0 - 0x3cu;
            COW_RET(0x1003ffdeu);
            t24 = cow_cdecl(g, COW_IMG(0x1006ca20u), 1, t23);
            t25 = g->edx;
            eax = t24;
            edx = t25;
    COW_AT(1003ffde)
            if ((uint8_t)eax == 0u) goto L_10040006;
    COW_AT(1003ffe5)
            t26 = rd32(sp0 - 4u);
            wr32(sp0 - 0x40u, t26);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x3cu;
            COW_RET(0x1003ffefu);
            t27 = cow_cdecl(g, COW_IMG(0x1006ca20u), 1, t26);
            t28 = g->edx;
            eax = t27;
            edx = t28;
    COW_AT(1003ffef)
            if ((uint8_t)eax == 0u) goto L_10040006;
    COW_AT(1003fff6)
            if ((int32_t)(ebp + 0x24u) < 108)
            {
                ebp = ebp + 0x24u;
                loc_30 = rd32(sp0 - 0x30u);
                loc_34 = rd32(sp0 - 0x34u);
                loc_38 = rd32(sp0 - 0x38u);
                loc_3c = rd32(sp0 - 0x3cu);
                goto L_1003ff5c;
            }
    COW_AT(10040002)
            loc_30 = rd32(sp0 - 0x30u);
            loc_34 = rd32(sp0 - 0x34u);
            loc_38 = rd32(sp0 - 0x38u);
            loc_3c = rd32(sp0 - 0x3cu);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x34u);
    COW_AT(1003ff15)
            if ((int32_t)(uint8_t)eax <= 0)
            {
                edi = 0u;
                loc_30 = in_ebx;
                loc_34 = in_ebp;
                loc_38 = in_esi;
                loc_3c = in_edi;
            }
            else
            {
                esi = (uint8_t)eax;
    COW_AT(1003ff23)
                g->eax = eax;
                g->edx = 0u;
                g->esp = sp0 - 0x3cu;
                COW_RET(0x1003ff2au);
                t3 = cow_thiscall(g, COW_IMG(0x1003fce0u), self, 0);
                t4 = g->edx;
                eax = t3;
                edx = t4;
                edi = 0u;
L_1003ff2a: ;
    COW_AT(1003ff2a)
                if ((int32_t)(edx + 1u) < (int32_t)esi)
                {
                    edi = edi + rd16(eax + edx * 2u);
                    edx = edx + 1u;
                    goto L_1003ff2a;
                }
                edi = edi + rd16(eax + edx * 2u);
                loc_30 = rd32(sp0 - 0x30u);
                loc_34 = rd32(sp0 - 0x34u);
                loc_38 = rd32(sp0 - 0x38u);
                loc_3c = rd32(sp0 - 0x3cu);
            }
    COW_AT(1003ff37)
            if ((int32_t)edi <= (int32_t)(rd16(self + 0x36u) * 3u))
            {
                eax = rd16(self + 0x36u);
                edx = rd16(self + 0x36u) * 3u;
            }
            else
            {
                eax = rd16(self + 0x36u);
                edx = rd16(self + 0x36u) * 3u;
    COW_AT(1003ff48)
                wr16(self + 0x30u, (ebp & 0xfff7u) | 7u);
                loc_30 = rd32(sp0 - 0x30u);
                loc_34 = rd32(sp0 - 0x34u);
                loc_38 = rd32(sp0 - 0x38u);
                loc_3c = rd32(sp0 - 0x3cu);
            }
        }
L_10040017: ;
    COW_AT(10040017)
        g->esp = sp0 - 0x3cu;
        COW_RET(0x1004001eu);
        t30 = cow_call_regs(g, COW_IMG(0x1003fda0u), eax, self, edx, 1, 0);
        t31 = g->ecx;
        t32 = g->edx;
        d33 = cow_take_float(g);
        eax = t30;
        ecx = t31;
        edx = t32;
        x0 = d33;
    COW_AT(1004001e)
        d34 = fr(g, x0 + (double)rdf32(COW_IMG(0x1032961cu)));
        if ((cow_fsw(g, d34, (double)rdf32(COW_IMG(0x1032ad18u)), 1u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d34, (double)rdf32(COW_IMG(0x1032ad18u)), 1u) & 0x4100u;
            x0 = d34;
        }
        else
        {
            eax = cow_fsw(g, d34, (double)rdf32(COW_IMG(0x1032ad18u)), 1u) & 0x4100u;
            x0 = d34;
    COW_AT(10040033)
            x0 = (double)rdf32(COW_IMG(0x1032ad18u));
        }
    COW_AT(1004003b)
        g->ecx = ecx;
        g->edx = edx;
        fpush(g, x0);
        g->esp = sp0 - 0x3cu;
        COW_RET(0x10040040u);
        t35 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t36 = g->ecx;
        t37 = g->edx;
        eax = t35;
        ecx = t36;
        edx = t37;
    COW_AT(10040040)
        wr16(self + 0x30u, (uint16_t)((rd8(self + 0x30u) & 0xfu) ^ eax << 4u));
        g->esp = sp0 - 0x3cu;
        COW_RET(0x10040058u);
        t38 = cow_call_regs(g, COW_IMG(0x1003fcf0u), eax << 4u, self, edx, 1, 0);
        t39 = g->ecx;
        t40 = g->edx;
        eax = t38;
        ecx = t39;
        edx = t40;
    COW_AT(10040058)
        if (rd8(self + 0x34u) != 0u)
        {
            ecx = (ecx & 0xffffff00u) | rd8(self + 0x34u);
    COW_AT(1004005f)
            if ((uint8_t)ecx != 0u)
            {
    COW_AT(10040065)
                esi = 0u;
                edi = eax;
L_10040067: ;
    COW_AT(10040067)
                wr32(sp0 - 0x40u, self);
                g->ebx = self;
                g->eax = eax;
                g->esp = sp0 - 0x3cu;
                COW_RET(0x1004006fu);
                t41 = cow_thiscall(g, COW_IMG(0x10075520u), edi, 1, self);
                eax = t41;
    COW_AT(1004006f)
                if ((int32_t)(esi + 1u) < (int32_t)rd8(self + 0x34u))
                {
                    edx = rd8(self + 0x34u);
                    esi = esi + 1u;
                    edi = edi + 0x10u;
                    goto L_10040067;
                }
                edx = rd8(self + 0x34u);
            }
        }
    COW_AT(1004007c)
        g->esp = sp0 - 0x3cu;
        COW_RET(0x10040083u);
        t42 = cow_call_regs(g, COW_IMG(0x1003fd70u), eax, self, edx, 1, 0);
        t43 = g->ecx;
        t44 = g->edx;
        eax = t42;
        ecx = t43;
        edx = t44;
    COW_AT(10040083)
        wr32(sp0 - 0x2cu, eax);
        t45 = rd16(self + 0x36u) * 3u;
        wr32(sp0 - 0x28u, t45);
        if (rd32(COW_IMG(0x10631f24u)) == 0u)
        {
            esi = eax;
            eax = rd32(COW_IMG(0x10631f24u));
            edi = t45;
        }
        else
        {
            esi = eax;
            edi = t45;
            loc_2c = eax;
            eax = rd32(COW_IMG(0x10631f24u));
            loc_28 = t45;
    COW_AT(100400a3)
            if (rd32(eax + 0x54u) == 0u)
            {
                ecx = rd32(eax + 0x54u);
            }
            else
            {
                ecx = rd32(eax + 0x54u);
    COW_AT(100400ae)
                if ((int32_t)edi > 0)
                {
    COW_AT(100400b6)
                    ebp = edi;
                    esi = esi + 0x18u;
L_100400bb: ;
    COW_AT(100400bb)
                    if ((uint8_t)rd32(esi) * 2u <= 0xffu)
                    {
                        eax = rd32(esi) >> 0x17u & 0x1feu;
                        ecx = (uint8_t)rd32(esi) * 2u;
                        edx = rd32(esi) >> 0xfu & 0x1feu;
                        edi = rd32(esi) >> 7u & 0x1feu;
                    }
                    else
                    {
                        eax = rd32(esi) >> 0x17u & 0x1feu;
                        edx = rd32(esi) >> 0xfu & 0x1feu;
                        edi = rd32(esi) >> 7u & 0x1feu;
    COW_AT(100400ed)
                        ecx = 0xffu;
                    }
    COW_AT(100400f2)
                    if (edi > 0xffu)
                    {
    COW_AT(100400fa)
                        edi = 0xffu;
                    }
    COW_AT(100400ff)
                    if (edx > 0xffu)
                    {
    COW_AT(10040107)
                        edx = 0xffu;
                    }
    COW_AT(1004010c)
                    if (eax > 0xffu)
                    {
    COW_AT(10040113)
                        eax = 0xffu;
                    }
    COW_AT(10040118)
                    t46 = ((eax << 8u | edx) << 8u | edi) << 8u | ecx;
                    wr32(esi, t46);
                    if (ebp != 1u)
                    {
                        ebp = ebp - 1u;
                        esi = esi + 0x24u;
                        loc_2c = rd32(sp0 - 0x2cu);
                        loc_28 = rd32(sp0 - 0x28u);
                        goto L_100400bb;
                    }
                    eax = t46;
    COW_AT(10040130)
                    esi = rd32(sp0 - 0x2cu);
                    edi = rd32(sp0 - 0x28u);
                }
            }
        }
    COW_AT(10040138)
        wr32(sp0 - 0x40u, 0x48u);
        g->eax = eax;
        g->esp = sp0 - 0x3cu;
        COW_RET(0x1004013fu);
        t47 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 1, 0x48u);
        t48 = g->edx;
        eax = t47;
        edx = t48;
    COW_AT(1004013f)
        if (eax != 0u)
        {
    COW_AT(10040146)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x3cu;
            COW_RET(0x1004014du);
            t49 = cow_thiscall(g, COW_IMG(0x10043df0u), eax, 0);
            t50 = g->edx;
            eax = t49;
            edx = t50;
    COW_AT(1004014d)
            if (eax != 0u)
            {
                ebp = eax;
    COW_AT(10040153)
                wr32(sp0 - 0x40u, 0u);
                wr32(sp0 - 0x44u, 0x152u);
                wr32(sp0 - 0x48u, edi);
                g->ebp = ebp;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x3cu;
                COW_RET(0x10040162u);
                t51 = cow_thiscall(g, COW_IMG(0x10043e50u), ebp, 3, edi, 0x152u, 0u);
                t52 = g->edx;
                eax = t51;
                edx = t52;
    COW_AT(10040162)
                wr32(sp0 - 0x40u, edi);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x3cu;
                COW_RET(0x1004016au);
                t53 = cow_thiscall(g, COW_IMG(0x10044010u), ebp, 1, edi);
                t54 = g->edx;
                eax = t53;
                edx = t54;
    COW_AT(1004016a)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x3cu;
                COW_RET(0x10040171u);
                t55 = cow_thiscall(g, COW_IMG(0x10044130u), ebp, 0);
                t56 = g->edx;
                eax = t55;
                edx = t56;
    COW_AT(10040171)
                if (eax == 0u)
                {
    COW_AT(10040197)
                    g->esp = sp0 - 0x3cu;
                    COW_RET(0x1004019eu);
                    t60 = cow_call_regs(g, COW_IMG(0x1003fcf0u), eax, self, edx, 1, 0);
                    t61 = g->edx;
                    eax = t60;
                    edx = t61;
    COW_AT(1004019e)
                    wr32(eax + 4u, 0u);
                }
                else
                {
    COW_AT(10040175)
                    t57 = edi;
                    edi = eax;
                    ecx = t57 * 0x24u >> 2u;
                    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    ecx = t57 * 0x24u & 3u;
                    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                    g->esp = sp0 - 0x3cu;
                    COW_RET(0x10040192u);
                    t58 = cow_call_regs(g, COW_IMG(0x1003fcf0u), t57 * 0x24u, self, edx, 1, 0);
                    t59 = g->edx;
                    eax = t58;
                    edx = t59;
    COW_AT(10040192)
                    wr32(eax + 4u, ebp);
                }
    COW_AT(100401a5)
                g->eax = eax;
                g->esp = sp0 - 0x3cu;
                COW_RET(0x100401acu);
                t62 = cow_fastcall(g, COW_IMG(0x100441a0u), ebp, edx, 0);
                t63 = g->edx;
                eax = t62;
                edx = t63;
            }
        }
    COW_AT(100401ac)
        t64 = rd16(self + 0x32u);
        wr16(self + 0x32u, (uint16_t)(t64 | 0x8080u));
        ebp = rd32(sp0 - 0x34u);
        esi = rd32(sp0 - 0x38u);
        edi = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
    }
    COW_AT(100401b5)
    g->ebx = loc_30;
    g->esi = esi;
    g->edi = edi;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
L_10040004: ;
    COW_AT(10040004)
L_10040006: ;
    COW_AT(10040006)
    t29 = rd16(self + 0x30u);
    wr16(self + 0x30u, (t29 & 0xfff7u) | 7u);
    edx = (t29 & 0xfff7u) | 7u;
    loc_30 = rd32(sp0 - 0x30u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_38 = rd32(sp0 - 0x38u);
    loc_3c = rd32(sp0 - 0x3cu);
    goto L_10040017;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1003fee0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1003fef2u:
    {
        uint32_t eax;
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
        self = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1003ff04u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1003ff0eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1003ff15u:
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
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1003ff23u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->edx = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1003ff2au:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1003ff37u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1003ff48u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1003ff5au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1003ff5cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1003ff63u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1003ff85u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x40u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003ff94u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x40u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003ffa1u:
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
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x40u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003ffabu:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1003ffb2u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1003ffbcu:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1003ffc3u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1003ffcdu:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1003ffd4u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1003ffdeu:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1003ffe5u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1003ffefu:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1003fff6u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10040002u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10040004u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x40u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10040006u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10040017u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1004001eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10040033u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1004003bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10040040u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10040058u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1004005fu:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10040065u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10040067u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1004006fu:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1004007cu:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10040083u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x100400a3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x100400aeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x100400b6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x100400bbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x100400edu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x100400f2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x100400fau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x100400ffu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10040107u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1004010cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10040113u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10040118u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10040130u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10040138u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1004013fu:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x10040146u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1004014du:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10040153u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10040162u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1004016au:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10040171u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10040175u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10040192u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10040197u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1004019eu:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x100401a5u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x100401acu:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x100401b5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1003fee0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1003fee0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
