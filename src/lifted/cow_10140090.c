/* f_0x10140090 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10140090(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101400a1u: eax = g->eax; self = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101400a1;
    case 0x101400abu: eax = g->eax; self = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101400ab;
    case 0x101400bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101400bd;
    case 0x101400c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101400c1;
    case 0x101400d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101400d0;
    case 0x101400d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101400d9;
    case 0x101400eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101400ee;
    case 0x101400f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101400f7;
    case 0x1014013au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1014013a;
    case 0x1014016fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1014016f;
    case 0x10140178u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10140178;
    case 0x101401e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101401e4;
    case 0x101401eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101401ee;
    case 0x101401f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101401f7;
    case 0x10140203u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10140203;
    case 0x1014020cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1014020c;
    case 0x10140218u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10140218;
    case 0x1014024du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1014024d;
    default: break;
    }
#endif

    COW_AT(10140090)
    if (rd16(COW_IMG(0x10485f7au)) == 0u)
    {
        eax = (in_eax & 0xffff0000u) | rd16(COW_IMG(0x10485f7au));
        edi = 0u;
    }
    else
    {
        eax = (in_eax & 0xffff0000u) | rd16(COW_IMG(0x10485f7au));
    COW_AT(101400a1)
        edi = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)eax * 4u);
        eax = (uint32_t)(int16_t)eax;
    }
    COW_AT(101400ab)
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x10087070u), eax, g->ecx, g->edx, 1, 1, 0u);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        goto L_1014024d;
    }
    eax = t1;
    edx = t2;
    COW_AT(101400bd)
    if (edi == 0u) goto L_101400d9;
    COW_AT(101400c1)
    if (rd32(edi + 0x170u) == 2u) goto L_1014024d;
    edi = rd32(edi + 0x170u);
    COW_AT(101400d0)
    if (edi == 3u) goto L_1014024d;
L_101400d9: ;
    COW_AT(101400d9)
    g->edi = edi;
    g->eax = eax;
    g->edx = edx;
    t3 = rd32(self + 8u);
    g->esp = sp0 - 8u;
    t4 = cow_thiscall(g, COW_IMG(0x101192b0u), t3, 2, 0xcu, 1u);
    t5 = g->ecx;
    t6 = g->edx;
    g->ecx = t5;
    g->edx = t6;
    t7 = cow_stdcall(g, COW_IMG(0x100f0c50u), 0);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        goto L_1014013a;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    COW_AT(101400ee)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t10 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint8_t)t10 != 0u)
    {
        eax = t10;
        ecx = t11;
        edx = t12;
        goto L_1014013a;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    COW_AT(101400f7)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t13 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 9u);
    t14 = g->edx;
    g->edi = edi;
    g->edx = t14;
    t15 = cow_thiscall(g, COW_IMG(0x1011ade0u), rd32(self + 8u), 2, 0xcu, t13);
    t16 = g->edx;
    g->edx = t16;
    t17 = rd32(self + 8u);
    t18 = cow_thiscall(g, COW_IMG(0x10118b60u), t17, 2, 5u, 0xcu);
    t19 = g->ecx;
    t20 = g->edx;
    g->edx = t20;
    t21 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x2au);
    t22 = g->edx;
    g->edi = edi;
    g->edx = t22;
    t23 = rd32(self + 8u);
    t24 = cow_thiscall(g, COW_IMG(0x1011adb0u), t23, 2, 0xcu, t21);
    t25 = g->ecx;
    t26 = g->edx;
    wr32(self + 0x14u, 1u);
    eax = t24;
    ecx = t25;
    edx = t26;
L_1014016f: ;
    COW_AT(1014016f)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t39 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t40 = g->ecx;
    t41 = g->edx;
    if ((uint8_t)t39 == 0u)
    {
        eax = t39;
        edx = t41;
        goto L_101401e4;
    }
    eax = t39;
    ecx = t40;
    edx = t41;
    COW_AT(10140178)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t42 = cow_stdcall(g, COW_IMG(0x10140070u), 0);
    t43 = g->edx;
    g->edi = edi;
    g->edx = t43;
    t44 = rd32(self + 8u);
    t45 = cow_thiscall(g, COW_IMG(0x1011ae50u), t44, 2, 2u, t42);
    t46 = g->ecx;
    t47 = g->edx;
    g->edx = t47;
    t48 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x2bcu);
    t49 = g->edx;
    g->edi = edi;
    g->edx = t49;
    t50 = rd32(self + 8u);
    t51 = cow_thiscall(g, COW_IMG(0x1011adb0u), t50, 2, 2u, t48);
    t52 = g->ecx;
    t53 = g->edx;
    g->edx = t53;
    t54 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 0xa5u);
    t55 = g->edx;
    g->edi = edi;
    g->edx = t55;
    t56 = cow_thiscall(g, COW_IMG(0x1011ade0u), rd32(self + 8u), 2, 2u, t54);
    t57 = g->edx;
    g->edx = t57;
    t58 = rd32(self + 8u);
    t59 = cow_thiscall(g, COW_IMG(0x10118b60u), t58, 2, 5u, 6u);
    t60 = g->ecx;
    t61 = g->edx;
    g->edx = t61;
    t62 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x2b5u);
    t63 = g->edx;
    g->edi = edi;
    g->edx = t63;
    t64 = cow_thiscall(g, COW_IMG(0x1011adb0u), rd32(self + 8u), 2, 5u, t62);
    t65 = g->edx;
    eax = t64;
    edx = t65;
L_101401f7: ;
    COW_AT(101401f7)
    g->eax = eax;
    g->edx = edx;
    t69 = rd32(self + 8u);
    g->esp = sp0 - 8u;
    t70 = cow_thiscall(g, COW_IMG(0x10118b60u), t69, 2, 5u, 0xau);
    t71 = g->ecx;
    t72 = g->edx;
    eax = t70;
    ecx = t71;
    edx = t72;
L_10140203: ;
    COW_AT(10140203)
    g->edx = edx;
    g->esp = sp0 - 8u;
    t73 = cow_call_regs(g, COW_IMG(0x10201f00u), eax, ecx, g->edx, 1, 0);
    t74 = g->edx;
    if ((uint8_t)t73 == 0u)
    {
        eax = t73;
        edx = t74;
    }
    else
    {
        eax = t73;
        edx = t74;
    COW_AT(1014020c)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t75 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 6u);
        t76 = g->edx;
        eax = t75;
        edx = t76;
    }
    COW_AT(10140218)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t77 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0x10u, 0xfu);
    t78 = g->edx;
    g->edx = t78;
    t79 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0xfu, 0xeu);
    t80 = g->edx;
    g->edx = t80;
    t81 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0xfu, 0xdu);
    t82 = g->edx;
    t83 = rd32(self + 8u);
    wr8(t83 + 0x86u, 0u);
    g->esp = sp0;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t82;
    return cow_tailcall(g, COW_IMG(0x10037ef0u), t81, t83, t82);
L_1014013a: ;
    COW_AT(1014013a)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t27 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x28u);
    t28 = g->edx;
    g->edi = edi;
    g->edx = t28;
    t29 = rd32(self + 8u);
    t30 = cow_thiscall(g, COW_IMG(0x1011adb0u), t29, 2, 0xcu, t27);
    t31 = g->ecx;
    t32 = g->edx;
    g->edx = t32;
    t33 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 8u);
    t34 = g->edx;
    g->edi = edi;
    g->edx = t34;
    t35 = rd32(self + 8u);
    t36 = cow_thiscall(g, COW_IMG(0x1011ade0u), t35, 2, 0xcu, t33);
    t37 = g->ecx;
    t38 = g->edx;
    wr32(self + 0x14u, 0u);
    eax = t36;
    ecx = t37;
    edx = t38;
    goto L_1014016f;
L_101401e4: ;
    COW_AT(101401e4)
    if (rd32(COW_IMG(0x106634acu)) == 0u)
    {
        ecx = rd32(COW_IMG(0x106634acu));
        goto L_10140203;
    }
    ecx = rd32(COW_IMG(0x106634acu));
    COW_AT(101401ee)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t66 = cow_thiscall(g, COW_IMG(0x101e15c0u), ecx, 0);
    t67 = g->ecx;
    t68 = g->edx;
    if ((uint8_t)t66 == 0u)
    {
        eax = t66;
        ecx = t67;
        edx = t68;
        goto L_10140203;
    }
    eax = t66;
    edx = t68;
    goto L_101401f7;
L_1014024d: ;
    COW_AT(1014024d)
    t84 = rd32(self + 8u);
    g->edx = t84;
    g->esp = sp0 - 8u;
    t85 = cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, t84, 1u);
    t86 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t86;
    return t85;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10140090(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101400a1u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101400abu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101400bdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101400c1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101400d0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101400d9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101400eeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101400f7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1014013au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1014016fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10140178u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101401e4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101401eeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101401f7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10140203u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1014020cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10140218u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1014024du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10140090(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10140090(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
