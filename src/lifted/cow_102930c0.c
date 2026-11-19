/* f_0x102930c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102930c0(Guest* g)
{
    double d37;
    double d41;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
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
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
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
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 112u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102930d2u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_102930d2;
    case 0x102930fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_102930fb;
    case 0x1029316bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029316b;
    case 0x1029317cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029317c;
    case 0x1029318cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_1029318c;
    case 0x102931e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_102931e3;
    case 0x102931f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_102931f9;
    case 0x10293200u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10293200;
    case 0x10293216u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10293216;
    case 0x1029321du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1029321d;
    case 0x10293233u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10293233;
    case 0x10293295u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10293295;
    case 0x102932afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102932af;
    case 0x102932b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102932b9;
    case 0x102932bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102932bd;
    case 0x102932c3u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102932c3;
    case 0x102932d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102932d1;
    case 0x102932e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102932e6;
    case 0x102932eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102932ea;
    case 0x10293305u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10293305;
    case 0x1029330eu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029330e;
    case 0x10293314u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); goto E_10293314;
    case 0x10293325u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10293325;
    case 0x1029332du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029332d;
    case 0x10293335u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_10293335;
    case 0x10293362u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10293362;
    case 0x10293371u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_10293371;
    case 0x10293381u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10293381;
    case 0x10293419u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_10293419;
    case 0x1029341eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_1029341e;
    case 0x10293455u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10293455;
    case 0x10293469u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10293469;
    case 0x1029348eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029348e;
    case 0x10293493u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10293493;
    case 0x1029349au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029349a;
    case 0x1029349fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1029349f;
    case 0x102934a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102934a6;
    case 0x102934b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102934b0;
    case 0x102934b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102934b5;
    case 0x102934c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102934c4;
    default: break;
    }
#endif

    COW_AT(102930c0)
    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_ebp);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    if (rd32(rd32(sp0 + 4u) + 0x34u) == 0u)
    {
        esi = rd32(sp0 + 4u);
        goto L_102930fb;
    }
    eax = rd32(rd32(sp0 + 4u) + 0x34u);
    COW_AT(102930d2)
    wr32(sp0 - 0x2cu, 0x495u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bb254u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b27fcu));
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x2cu;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b27fcu), COW_IMG(0x103bb254u));
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x38u, COW_IMG(0x103bb4b4u));
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb4b4u), COW_IMG(0x103b27fcu));
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
L_102930fb: ;
    COW_AT(102930fb)
    t4 = rd32(esi + 0x4cu);
    wr32(sp0 - 0x2cu, t4);
    t5 = rd32(esi + 0x1cu);
    wr32(sp0 - 0x30u, t5);
    t6 = rd32(esi + 0x24u);
    wr32(sp0 - 0x34u, t6);
    t7 = rd32(esi + 0x2cu);
    wr32(sp0 - 0x38u, t7);
    g->eax = t7;
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x28u;
    t8 = cow_cdecl(g, COW_IMG(0x1027d300u), 4, t7, t6, t5, t4);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x3cu, 0x4a5u);
    wr32(sp0 - 0x40u, COW_IMG(0x103bb254u));
    t11 = rd32(esi + 0x1cu);
    wr32(sp0 - 0x10u, t11);
    t12 = rd32(esi + 0x24u) * 4u;
    wr32(sp0 - 0x44u, t12);
    wr32(sp0 - 0x48u, 1u);
    g->ecx = t9;
    g->edx = t10;
    t13 = rd32(esi + 0x24u);
    g->esp = sp0 - 0x24u;
    t14 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, t12, COW_IMG(0x103bb254u), 0x4a5u, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), in_edi);
    t15 = g->ecx;
    t16 = g->edx;
    wr32(sp0 - 0x4cu, 0x4a6u);
    wr32(sp0 - 0x50u, COW_IMG(0x103bb254u));
    wr32(sp0 - 0x54u, t12);
    wr32(sp0 - 0x58u, 1u);
    wr32(sp0 - 4u, t14);
    g->ecx = t15;
    g->edx = t16;
    g->esp = sp0 - 0x34u;
    t17 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, t12, COW_IMG(0x103bb254u), 0x4a6u, 1u, rd32(sp0 - 0x44u), COW_IMG(0x103bb254u), 0x4a5u, rd32(sp0 - 0x38u));
    t18 = g->ecx;
    t19 = g->edx;
    wr32(sp0 - 0x5cu, 0x4abu);
    wr32(sp0 - 0x60u, COW_IMG(0x103bb254u));
    wr32(sp0 - 0x64u, 4u);
    wr32(sp0 - 0x68u, t11);
    wr32(sp0 - 8u, t17);
    g->ecx = t18;
    g->edx = t19;
    g->esp = sp0 - 0x54u;
    t20 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t11, 4u, COW_IMG(0x103bb254u), 0x4abu, 1u);
    t21 = g->ecx;
    t22 = g->edx;
    wr32(esi + 0x34u, t20);
    if ((int32_t)t11 <= 0)
    {
        ecx = t21;
        ebp = t13;
        edi = t11;
        goto L_1029317c;
    }
    eax = t20;
    ecx = t21;
    edx = t22;
    ebx = 0u;
    ebp = t13;
    edi = t11;
L_1029316b: ;
    COW_AT(1029316b)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t23 = cow_stdcall(g, COW_IMG(0x10293ed0u), 0);
    t24 = g->edx;
    t25 = rd32(esi + 0x34u);
    wr32(ebx * 4u + t25, t23);
    if ((int32_t)(ebx + 1u) < (int32_t)edi)
    {
        eax = t23;
        ecx = t25;
        edx = t24;
        ebx = ebx + 1u;
        goto L_1029316b;
    }
    ecx = t25;
L_1029317c: ;
    COW_AT(1029317c)
    wr32(sp0 - 0x18u, 0u);
    if ((int32_t)edi > 0)
    {
        loc_18 = 0u;
        goto L_102932bd;
    }
L_1029318c: ;
    COW_AT(1029318c)
    wr32(sp0 - 0x2cu, 0x4efu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bb254u));
    t69 = rd32(sp0 - 8u);
    wr32(sp0 - 0x34u, t69);
    t70 = rd32(arg2 + rd32(esi + 0x1cu) * 4u);
    wr32(esi + 0x30u, t70);
    g->eax = t69;
    g->edx = t70;
    g->esp = sp0 - 0x28u;
    t71 = cow_cdecl(g, COW_IMG(0x10276110u), 3, t69, COW_IMG(0x103bb254u), 0x4efu);
    t72 = g->edx;
    wr32(sp0 - 0x38u, 0x4f0u);
    wr32(sp0 - 0x3cu, COW_IMG(0x103bb254u));
    t73 = rd32(sp0 - 4u);
    wr32(sp0 - 0x40u, t73);
    g->ecx = t73;
    g->esp = sp0 - 0x34u;
    t74 = cow_cdecl(g, COW_IMG(0x10276110u), 3, t73, COW_IMG(0x103bb254u), 0x4f0u);
    t75 = g->ecx;
    wr32(sp0 - 0x44u, 0x4f1u);
    wr32(sp0 - 0x48u, COW_IMG(0x103bb254u));
    t76 = rd32(esi + 0x2cu);
    wr32(sp0 - 0x4cu, t76);
    g->ecx = t75;
    g->edx = t76;
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, t76, COW_IMG(0x103bb254u), 0x4f1u);
    t77 = g->ecx;
    t78 = g->edx;
    t79 = rd32(esi + 0x38u);
    wr32(esi + 0x2cu, 0u);
    if (t79 == 0u)
    {
        ecx = t77;
        edx = t78;
    }
    else
    {
        eax = t79;
        ecx = t77;
        edx = t78;
    COW_AT(102931e3)
        wr32(sp0 - 0x2cu, 0x4f9u);
        wr32(sp0 - 0x30u, COW_IMG(0x103bb254u));
        wr32(sp0 - 0x34u, eax);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103bb254u), 0x4f9u);
        t80 = g->ecx;
        t81 = g->edx;
        wr32(esi + 0x38u, 0u);
        ecx = t80;
        edx = t81;
    }
    COW_AT(102931f9)
    if (rd32(esi + 0x3cu) != 0u)
    {
        eax = rd32(esi + 0x3cu);
    COW_AT(10293200)
        wr32(sp0 - 0x2cu, 0x4fau);
        wr32(sp0 - 0x30u, COW_IMG(0x103bb254u));
        wr32(sp0 - 0x34u, eax);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103bb254u), 0x4fau);
        t82 = g->ecx;
        t83 = g->edx;
        wr32(esi + 0x3cu, 0u);
        ecx = t82;
        edx = t83;
    }
    COW_AT(10293216)
    if (rd32(esi + 0x40u) != 0u)
    {
        eax = rd32(esi + 0x40u);
    COW_AT(1029321d)
        wr32(sp0 - 0x2cu, 0x4fbu);
        wr32(sp0 - 0x30u, COW_IMG(0x103bb254u));
        wr32(sp0 - 0x34u, eax);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103bb254u), 0x4fbu);
        t84 = g->ecx;
        t85 = g->edx;
        wr32(esi + 0x40u, 0u);
        ecx = t84;
        edx = t85;
    }
    COW_AT(10293233)
    wr32(sp0 - 0x2cu, 0x4fdu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bb254u));
    wr32(sp0 - 0x34u, 4u);
    t86 = rd32(esi + 0x1cu);
    wr32(sp0 - 0x38u, t86);
    g->eax = t86;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t87 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t86, 4u, COW_IMG(0x103bb254u), 0x4fdu, rd32(sp0 - 0x28u));
    t88 = g->edx;
    wr32(sp0 - 0x3cu, 0x4feu);
    wr32(sp0 - 0x40u, COW_IMG(0x103bb254u));
    wr32(sp0 - 0x44u, 4u);
    t89 = rd32(esi + 0x1cu);
    wr32(sp0 - 0x48u, t89);
    wr32(esi + 0x38u, t87);
    g->ecx = t89;
    g->esp = sp0 - 0x34u;
    t90 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t89, 4u, COW_IMG(0x103bb254u), 0x4feu, rd32(sp0 - 0x38u));
    t91 = g->ecx;
    wr32(sp0 - 0x4cu, 0x4ffu);
    wr32(sp0 - 0x50u, COW_IMG(0x103bb254u));
    wr32(sp0 - 0x54u, 4u);
    t92 = rd32(esi + 0x1cu);
    wr32(sp0 - 0x58u, t92);
    wr32(esi + 0x3cu, t90);
    g->esp = sp0 - 0x44u;
    t93 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t92, 4u, COW_IMG(0x103bb254u), 0x4ffu, rd32(sp0 - 0x48u));
    wr32(esi + 0x40u, t93);
    t94 = rd32(esi + 0x1cu) * 4u;
    t95 = rd32(esi + 0x1cu);
    wr32(esi + 0x44u, t94);
    if ((int32_t)t95 <= 0) goto L_102934c4;
    ecx = 0u;
L_10293295: ;
    COW_AT(10293295)
    t96 = rd32(rd32(ecx * 4u + rd32(esi + 0x34u)));
    t97 = rd32(ecx * 4u + rd32(esi + 0x34u));
    wr32(ecx * 4u + rd32(esi + 0x38u), t96);
    if (rd32(t97 + 0xcu) != 2u)
    {
        eax = rd32(t97 + 0xcu);
        edx = t97;
    COW_AT(1029348e)
        if (eax != 4u)
        {
    COW_AT(1029349a)
            if (eax != 8u)
            {
    COW_AT(102934a6)
                if (eax == 0x10u)
                {
                    eax = COW_IMG(0x102935e0u);
                }
                else
                {
    COW_AT(102934b0)
                    eax = COW_IMG(0x102934d0u);
                }
            }
            else
            {
    COW_AT(1029349f)
                eax = COW_IMG(0x102935b0u);
            }
        }
        else
        {
    COW_AT(10293493)
            eax = COW_IMG(0x10293560u);
        }
    }
    else
    {
        edx = t97;
    COW_AT(102932af)
        eax = COW_IMG(0x102934e0u);
    }
    COW_AT(102934b5)
    wr32(edx + 0x14u, eax);
    if ((int32_t)(ecx + 1u) < (int32_t)rd32(esi + 0x1cu))
    {
        ecx = ecx + 1u;
        goto L_10293295;
    }
L_102934c4: ;
    COW_AT(102934c4)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    return;
L_102932b9: ;
    COW_AT(102932b9)
    edi = rd32(sp0 - 0x10u);
L_102932bd: ;
    COW_AT(102932bd)
    if ((int32_t)ebp > 0)
    {
    COW_AT(102932c3)
        eax = 0u;
        ecx = loc_18 << 2u;
        edx = edi * 4u;
L_102932d1: ;
    COW_AT(102932d1)
        t26 = rd32(ecx + rd32(esi + 0x2cu));
        wr32(eax * 4u + rd32(sp0 - 8u), t26);
        if ((int32_t)(eax + 1u) < (int32_t)ebp)
        {
            eax = eax + 1u;
            ecx = ecx + edx;
            goto L_102932d1;
        }
        ecx = ecx + edx;
    COW_AT(102932e6)
        edi = rd32(sp0 - 0x10u);
    }
    COW_AT(102932ea)
    wr32(sp0 - 0x2cu, ebp);
    t27 = rd32(sp0 - 8u);
    wr32(sp0 - 0x30u, t27);
    t28 = rd32(sp0 - 4u);
    wr32(sp0 - 0x34u, t28);
    g->ecx = ecx;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x10293900u), 3, t28, t27, ebp);
    t29 = g->ecx;
    if (arg2 == 0u)
    {
        ecx = t29;
    COW_AT(1029330e)
        x0 = rdf64(COW_IMG(0x10340b78u));
    }
    else
    {
    COW_AT(10293305)
        ecx = rd32(sp0 - 0x18u);
        x0 = (double)rdf32(arg2 + rd32(sp0 - 0x18u) * 4u);
    }
    COW_AT(10293314)
    wrf32(sp0 + 4u, (float)x0);
    if (!(x0 < (double)rdf32(COW_IMG(0x1032a42cu))))
    {
        eax = (arg2 & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a42cu)), 0u);
    }
    else
    {
        eax = (arg2 & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a42cu)), 0u);
    COW_AT(10293325)
        wr32(sp0 + 4u, 0x38d1b717u);
    }
    COW_AT(1029332d)
    wr32(sp0 - 0xcu, 0x14u);
    loc_c = 0x14u;
L_10293335: ;
    COW_AT(10293335)
    t30 = rd32(sp0 + 4u);
    wr32(sp0 - 0x2cu, t30);
    wr32(sp0 - 0x30u, ebp);
    wr32(sp0 - 0x34u, sp0 - 8u);
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10293930u), 5, sp0 - 8u, ebp, t30, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    t31 = g->edx;
    wr32(sp0 - 0x38u, sp0 - 0x14u);
    wr32(sp0 - 0x3cu, t30);
    wr32(sp0 - 0x40u, ebp);
    t32 = rd32(sp0 - 4u);
    wr32(sp0 - 0x44u, t32);
    g->ecx = t32;
    g->edx = t31;
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x10293860u), 4, t32, ebp, t30, sp0 - 0x14u);
    t33 = g->ecx;
    t34 = g->edx;
    if ((int32_t)rd32(sp0 - 0x14u) < 32)
    {
        eax = rd32(sp0 - 0x14u);
        ecx = t33;
        edx = t34;
        goto L_10293381;
    }
    ecx = t33;
    edx = t34;
    ebx = t30;
    COW_AT(10293362)
    t35 = rd32(sp0 - 0xcu) - 1u;
    t36 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0xcu, t35);
    if (t36 == 1u)
    {
        eax = t35;
        goto L_1029341e;
    }
    eax = t35;
    loc_c = t35;
    COW_AT(10293371)
    d37 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x103313a0u)));
    wrf32(sp0 + 4u, (float)d37);
    goto L_10293335;
L_10293381: ;
    COW_AT(10293381)
    wr32(sp0 - 0x2cu, ebp);
    wr32(sp0 - 0x30u, eax);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t52 = cow_cdecl(g, COW_IMG(0x102936e0u), 2, eax, ebp);
    t53 = g->ecx;
    t54 = g->edx;
    wr32(sp0 - 0x34u, 0x4dbu);
    wr32(sp0 - 0x38u, COW_IMG(0x103bb254u));
    wr32(sp0 - 0x3cu, 1u);
    wr32(sp0 - 0x40u, t52);
    wr32(sp0 - 0xcu, t52);
    g->esp = sp0 - 0x2cu;
    t55 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t52, 1u, COW_IMG(0x103bb254u), 0x4dbu, rd32(sp0 - 0x30u));
    edi = t55;
    eax = 0u;
    ecx = t52 >> 2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t52 & 3u;
    while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    t56 = rd32(sp0 + 4u);
    wr32(sp0 - 0x44u, t56);
    wr32(sp0 - 0x48u, ebp - 1u);
    t57 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x4cu, t57);
    t58 = rd32(sp0 - 4u);
    wr32(sp0 - 0x50u, t58);
    wr32(sp0 - 0x54u, t55);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x10293720u), 4, t55, t58, t57, ebp - 1u);
    wr32(sp0 - 0x58u, t56);
    t59 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x5cu, t59);
    t60 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x60u, t60);
    wr32(sp0 - 0x64u, t55);
    t61 = rd32(rd32(sp0 - 8u));
    wr32(sp0 - 0x68u, t61);
    t62 = rd32(rd32(esi + 0x34u) + rd32(sp0 - 0x18u) * 4u);
    wr32(sp0 - 0x6cu, t62);
    g->eax = t61;
    g->ecx = rd32(esi + 0x34u);
    g->edx = t62;
    t63 = rd32(esi + 0x34u);
    t64 = rd32(sp0 - 0x18u);
    g->esp = sp0 - 0x54u;
    t65 = cow_cdecl(g, COW_IMG(0x10293620u), 6, t62, t61, t55, t60, t59, t56);
    t66 = g->ecx;
    t67 = g->edx;
    wr32(sp0 - 0x2cu, 0x4ecu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bb254u));
    wr32(sp0 - 0x34u, t55);
    g->ecx = t66;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, t55, COW_IMG(0x103bb254u), 0x4ecu);
    t68 = g->ecx;
    wr32(sp0 - 0x18u, t64 + 1u);
    if ((int32_t)(t64 + 1u) < (int32_t)rd32(sp0 - 0x10u))
    {
        ecx = t68;
        loc_18 = t64 + 1u;
        goto L_102932b9;
    }
    COW_AT(10293419)
    goto L_1029318c;
L_1029341e: ;
    COW_AT(1029341e)
    wr32(sp0 - 0x2cu, 0x4cbu);
    wr32(sp0 - 0x30u, COW_IMG(0x103bb254u));
    wr32(sp0 - 0x34u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t38 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bb254u));
    t39 = g->ecx;
    t40 = g->edx;
    d41 = (double)rdf32(sp0 + 4u);
    wrf64(sp0 - 0x30u, d41);
    wr32(sp0 - 0x34u, COW_IMG(0x103bb480u));
    g->ebx = ebx;
    g->ecx = t39;
    g->edx = t40;
    t42 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb480u), cow_dlo(d41));
    t43 = g->ecx;
    t44 = g->edx;
    wr32(sp0 - 0x38u, COW_IMG(0x103bb460u));
    g->ebx = ebx;
    g->edx = t44;
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb460u), COW_IMG(0x103bb480u));
    t45 = g->edx;
    edx = t45;
    ebx = 0u;
L_10293455: ;
    COW_AT(10293455)
    t46 = ebx * 4u + rd32(esi + 0x34u);
    wr32(sp0 - 0x2cu, t46);
    g->eax = rd32(esi + 0x34u);
    g->ecx = t46;
    g->edx = edx;
    t47 = rd32(esi + 0x34u);
    g->esp = sp0 - 0x20u;
    t48 = cow_cdecl(g, COW_IMG(0x10292720u), 3, t46, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    t49 = g->ecx;
    t50 = g->edx;
    if ((int32_t)(ebx + 1u) < (int32_t)edi)
    {
        edx = t50;
        ebx = ebx + 1u;
        goto L_10293455;
    }
    eax = t48;
    ecx = t49;
    COW_AT(10293469)
    wr32(sp0 - 0x2cu, 0x4d0u);
    wr32(sp0 - 0x30u, COW_IMG(0x103bb254u));
    t51 = rd32(esi + 0x34u);
    wr32(sp0 - 0x34u, t51);
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, t51, COW_IMG(0x103bb254u), 0x4d0u);
    wr32(esi + 0x34u, 0u);
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102930c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102930d2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x1cu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102930fbu:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029316bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029317cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029318cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x102931e3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102931f9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10293200u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10293216u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1029321du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10293233u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10293295u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x102932afu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x102932b9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x102932bdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x102932c3u:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x28u;
        g->eax = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102932d1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x102932e6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x102932eau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10293305u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1029330eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10293314u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->esp = sp0 - 0x28u;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10293325u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029332du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10293335u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10293362u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x38u, sp0 - 0x14u);
        wr32(sp0 - 0x34u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10293371u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x38u, sp0 - 0x14u);
        wr32(sp0 - 0x34u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10293381u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x38u, sp0 - 0x14u);
        wr32(sp0 - 0x34u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10293419u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029341eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x38u, sp0 - 0x14u);
        wr32(sp0 - 0x34u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10293455u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10293469u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029348eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10293493u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029349au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1029349fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x102934a6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x102934b0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x102934b5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x102934c4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102930c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102930c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
