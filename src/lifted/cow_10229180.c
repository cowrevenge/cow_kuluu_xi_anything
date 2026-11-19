/* f_0x10229180 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
uint32_t cow_fn_10229180(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_b8;
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
    uint32_t t87;
    uint32_t t88;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 248u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102293d0u: eax = g->eax; edx = g->edx; loc_b8 = rd32(sp0 - 0xb8u); in_edi = rd32(sp0 - 0xb4u); in_esi = rd32(sp0 - 0xb0u); in_ebx = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xacu); g->edi = rd32(sp0 - 0xb4u); g->esi = rd32(sp0 - 0xb0u); goto E_102293d0;
    case 0x102293d4u: eax = g->eax; edx = g->edx; loc_b8 = rd32(sp0 - 0xb8u); in_edi = rd32(sp0 - 0xb4u); in_esi = rd32(sp0 - 0xb0u); in_ebx = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xacu); g->edi = rd32(sp0 - 0xb4u); g->esi = rd32(sp0 - 0xb0u); goto E_102293d4;
    case 0x102293d6u: eax = g->eax; edx = g->edx; loc_b8 = rd32(sp0 - 0xb8u); in_edi = rd32(sp0 - 0xb4u); in_esi = rd32(sp0 - 0xb0u); in_ebx = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xacu); g->edi = rd32(sp0 - 0xb4u); g->esi = rd32(sp0 - 0xb0u); goto E_102293d6;
    default: break;
    }
#endif

    COW_AT(10229180)
    wr32(sp0 - 0xacu, in_ebx);
    wr32(sp0 - 0xb0u, in_esi);
    wr32(sp0 - 0xb4u, in_edi);
    wr32(sp0 - 0xb8u, 0x51u);
    wr32(sp0 - 0xbcu, 9u);
    wr32(sp0 - 0xa8u, 1u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xb4u;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x51u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0xc0u, 0x52u);
    wr32(sp0 - 0xc4u, 0xeu);
    wr32(sp0 - 0xa4u, t1);
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0xbcu;
    t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x52u);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0xc8u, 0x52u);
    wr32(sp0 - 0xccu, 9u);
    wr32(sp0 - 0xa0u, t4);
    wr32(sp0 - 0x9cu, 2u);
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0xc4u;
    t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x52u);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0xd0u, 0x53u);
    wr32(sp0 - 0xd4u, 0xeu);
    wr32(sp0 - 0x98u, t7);
    g->ecx = t8;
    g->edx = t9;
    g->esp = sp0 - 0xccu;
    t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x53u);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0xd8u, 0x53u);
    wr32(sp0 - 0xdcu, 9u);
    wr32(sp0 - 0x94u, t10);
    wr32(sp0 - 0x90u, 4u);
    g->ecx = t11;
    g->edx = t12;
    g->esp = sp0 - 0xd4u;
    t13 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x53u);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0xe0u, 0x54u);
    wr32(sp0 - 0xe4u, 0xeu);
    wr32(sp0 - 0x8cu, t13);
    g->ecx = t14;
    g->edx = t15;
    g->esp = sp0 - 0xdcu;
    t16 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x54u);
    t17 = g->ecx;
    t18 = g->edx;
    wr32(sp0 - 0xe8u, 0x54u);
    wr32(sp0 - 0xecu, 9u);
    wr32(sp0 - 0x88u, t16);
    wr32(sp0 - 0x84u, 8u);
    g->ecx = t17;
    g->edx = t18;
    g->esp = sp0 - 0xe4u;
    t19 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x54u);
    t20 = g->ecx;
    t21 = g->edx;
    wr32(sp0 - 0xf0u, 0x55u);
    wr32(sp0 - 0xf4u, 0xeu);
    wr32(sp0 - 0x80u, t19);
    g->ecx = t20;
    g->edx = t21;
    g->esp = sp0 - 0xecu;
    t22 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x55u);
    t23 = g->ecx;
    t24 = g->edx;
    wr32(sp0 - 0x7cu, t22);
    wr32(sp0 - 0x78u, 0x10u);
    wr32(sp0 - 0xb8u, 0x55u);
    wr32(sp0 - 0xbcu, 9u);
    g->ecx = t23;
    g->edx = t24;
    g->esp = sp0 - 0xb4u;
    t25 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x55u);
    t26 = g->ecx;
    t27 = g->edx;
    wr32(sp0 - 0xc0u, 0x56u);
    wr32(sp0 - 0xc4u, 0xeu);
    wr32(sp0 - 0x74u, t25);
    g->ecx = t26;
    g->edx = t27;
    g->esp = sp0 - 0xbcu;
    t28 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x56u);
    t29 = g->ecx;
    t30 = g->edx;
    wr32(sp0 - 0xc8u, 0x56u);
    wr32(sp0 - 0xccu, 9u);
    wr32(sp0 - 0x70u, t28);
    wr32(sp0 - 0x6cu, 0x20u);
    g->ecx = t29;
    g->edx = t30;
    g->esp = sp0 - 0xc4u;
    t31 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x56u);
    t32 = g->ecx;
    t33 = g->edx;
    wr32(sp0 - 0xd0u, 0x57u);
    wr32(sp0 - 0xd4u, 0xeu);
    wr32(sp0 - 0x68u, t31);
    g->ecx = t32;
    g->edx = t33;
    g->esp = sp0 - 0xccu;
    t34 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x57u);
    t35 = g->ecx;
    t36 = g->edx;
    wr32(sp0 - 0xd8u, 0x57u);
    wr32(sp0 - 0xdcu, 9u);
    wr32(sp0 - 0x64u, t34);
    wr32(sp0 - 0x60u, 0x40u);
    g->ecx = t35;
    g->edx = t36;
    g->esp = sp0 - 0xd4u;
    t37 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x57u);
    t38 = g->ecx;
    t39 = g->edx;
    wr32(sp0 - 0xe0u, 0x58u);
    wr32(sp0 - 0xe4u, 0xeu);
    wr32(sp0 - 0x5cu, t37);
    g->ecx = t38;
    g->edx = t39;
    g->esp = sp0 - 0xdcu;
    t40 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x58u);
    t41 = g->ecx;
    t42 = g->edx;
    wr32(sp0 - 0xe8u, 0x58u);
    wr32(sp0 - 0xecu, 9u);
    wr32(sp0 - 0x58u, t40);
    wr32(sp0 - 0x54u, 0x80u);
    g->ecx = t41;
    g->edx = t42;
    g->esp = sp0 - 0xe4u;
    t43 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x58u);
    t44 = g->ecx;
    t45 = g->edx;
    wr32(sp0 - 0xf0u, 0x59u);
    wr32(sp0 - 0xf4u, 0xeu);
    wr32(sp0 - 0x50u, t43);
    g->ecx = t44;
    g->edx = t45;
    g->esp = sp0 - 0xecu;
    t46 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x59u);
    t47 = g->ecx;
    t48 = g->edx;
    wr32(sp0 - 0x4cu, t46);
    wr32(sp0 - 0x48u, 0x100u);
    wr32(sp0 - 0xb8u, 0x59u);
    wr32(sp0 - 0xbcu, 9u);
    g->ecx = t47;
    g->edx = t48;
    g->esp = sp0 - 0xb4u;
    t49 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x59u);
    t50 = g->ecx;
    t51 = g->edx;
    wr32(sp0 - 0xc0u, 0x5au);
    wr32(sp0 - 0xc4u, 0xeu);
    wr32(sp0 - 0x44u, t49);
    g->ecx = t50;
    g->edx = t51;
    g->esp = sp0 - 0xbcu;
    t52 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x5au);
    t53 = g->ecx;
    t54 = g->edx;
    wr32(sp0 - 0xc8u, 0x5au);
    wr32(sp0 - 0xccu, 9u);
    wr32(sp0 - 0x40u, t52);
    wr32(sp0 - 0x3cu, 0x200u);
    g->ecx = t53;
    g->edx = t54;
    g->esp = sp0 - 0xc4u;
    t55 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x5au);
    t56 = g->ecx;
    t57 = g->edx;
    wr32(sp0 - 0xd0u, 0x5bu);
    wr32(sp0 - 0xd4u, 0xeu);
    wr32(sp0 - 0x38u, t55);
    g->ecx = t56;
    g->edx = t57;
    g->esp = sp0 - 0xccu;
    t58 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x5bu);
    t59 = g->ecx;
    t60 = g->edx;
    wr32(sp0 - 0xd8u, 0x5bu);
    wr32(sp0 - 0xdcu, 9u);
    wr32(sp0 - 0x34u, t58);
    wr32(sp0 - 0x30u, 0x400u);
    g->ecx = t59;
    g->edx = t60;
    g->esp = sp0 - 0xd4u;
    t61 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x5bu);
    t62 = g->ecx;
    t63 = g->edx;
    wr32(sp0 - 0xe0u, 0x5cu);
    wr32(sp0 - 0xe4u, 0xeu);
    wr32(sp0 - 0x2cu, t61);
    g->ecx = t62;
    g->edx = t63;
    g->esp = sp0 - 0xdcu;
    t64 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x5cu);
    t65 = g->ecx;
    t66 = g->edx;
    wr32(sp0 - 0xe8u, 0x5cu);
    wr32(sp0 - 0xecu, 9u);
    wr32(sp0 - 0x28u, t64);
    wr32(sp0 - 0x24u, 0x800u);
    g->ecx = t65;
    g->edx = t66;
    g->esp = sp0 - 0xe4u;
    t67 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x5cu);
    t68 = g->ecx;
    t69 = g->edx;
    wr32(sp0 - 0xf0u, 0x5du);
    wr32(sp0 - 0xf4u, 0xeu);
    wr32(sp0 - 0x20u, t67);
    g->ecx = t68;
    g->edx = t69;
    g->esp = sp0 - 0xecu;
    t70 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x5du);
    t71 = g->ecx;
    t72 = g->edx;
    wr32(sp0 - 0x1cu, t70);
    wr32(sp0 - 0x18u, 0x1000u);
    wr32(sp0 - 0xb8u, 0x5du);
    wr32(sp0 - 0xbcu, 9u);
    g->ecx = t71;
    g->edx = t72;
    g->esp = sp0 - 0xb4u;
    t73 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x5du);
    t74 = g->ecx;
    t75 = g->edx;
    wr32(sp0 - 0xc0u, 0x5eu);
    wr32(sp0 - 0xc4u, 0xeu);
    wr32(sp0 - 0x14u, t73);
    g->ecx = t74;
    g->edx = t75;
    g->esp = sp0 - 0xbcu;
    t76 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x5eu);
    t77 = g->ecx;
    t78 = g->edx;
    wr32(sp0 - 0xc8u, 0x5eu);
    wr32(sp0 - 0xccu, 9u);
    wr32(sp0 - 0x10u, t76);
    wr32(sp0 - 0xcu, 0x2000u);
    g->ecx = t77;
    g->edx = t78;
    g->esp = sp0 - 0xc4u;
    t79 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x5eu);
    t80 = g->ecx;
    t81 = g->edx;
    wr32(sp0 - 0xd0u, 0x5fu);
    wr32(sp0 - 0xd4u, 0xeu);
    wr32(sp0 - 8u, t79);
    g->esp = sp0 - 0xccu;
    t82 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x5fu);
    wr32(sp0 - 4u, t82);
    if ((rd32(arg5 * 0xcu + sp0 - 0xa8u) & rd32(arg1 + 0x64u)) == 0u)
    {
        eax = rd32(arg5 * 0xcu + sp0 - 0xa8u);
        edx = rd32(arg1 + 0x64u);
    COW_AT(102293d4)
        wr32(sp0 - 0xb8u, 0x59u);
        loc_b8 = 0x59u;
    }
    else
    {
        eax = rd32(arg5 * 0xcu + sp0 - 0xa8u);
        edx = rd32(arg1 + 0x64u);
    COW_AT(102293d0)
        wr32(sp0 - 0xb8u, 0x58u);
        loc_b8 = 0x58u;
    }
    COW_AT(102293d6)
    wr32(sp0 - 0xbcu, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xb4u;
    t83 = cow_cdecl(g, COW_IMG(0x10220cf0u), 2, 0u, loc_b8);
    t84 = g->edx;
    wr32(sp0 - 0xb8u, 0u);
    wr32(sp0 - 0xbcu, 0u);
    wr32(sp0 - 0xc0u, 0x80808080u);
    wr32(sp0 - 0xc4u, arg4);
    wr32(sp0 - 0xc8u, arg3 + 4u);
    cow_thiscall(g, COW_IMG(0x1011fb60u), t83, 5, arg3 + 4u, arg4, 0x80808080u, 0u, 0u);
    t85 = g->ecx;
    wr32(sp0 - 0xb8u, arg6);
    wr32(sp0 - 0xbcu, 0u);
    t86 = rd32(arg5 * 0xcu + sp0 - 0xa4u);
    wr32(sp0 - 0xc0u, t86);
    wr32(sp0 - 0xc4u, arg4);
    wr32(sp0 - 0xc8u, arg3 + 0x1cu);
    g->eax = t86;
    g->edx = arg6;
    g->esp = sp0 - 0x9cu;
    t87 = cow_cdecl(g, COW_IMG(0x10129f00u), 11, arg3 + 0x1cu, arg4, t86, 0u, arg6, in_edi, in_esi, in_ebx, 1u, rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u));
    t88 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t88;
    return t87;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10229180(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102293d0u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_b8;
        eax = g->eax;
        edx = g->edx;
        loc_b8 = rd32(sp0 - 0xb8u);
        in_edi = rd32(sp0 - 0xb4u);
        in_esi = rd32(sp0 - 0xb0u);
        in_ebx = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xb4u;
        g->ecx = arg1;
        g->esi = arg5 * 0xcu + sp0 - 0xa8u;
        wr32(sp0 - 0xa8u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x102293d4u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_b8;
        eax = g->eax;
        edx = g->edx;
        loc_b8 = rd32(sp0 - 0xb8u);
        in_edi = rd32(sp0 - 0xb4u);
        in_esi = rd32(sp0 - 0xb0u);
        in_ebx = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xb4u;
        g->ecx = arg1;
        g->esi = arg5 * 0xcu + sp0 - 0xa8u;
        wr32(sp0 - 0xa8u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x102293d6u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_b8;
        eax = g->eax;
        edx = g->edx;
        loc_b8 = rd32(sp0 - 0xb8u);
        in_edi = rd32(sp0 - 0xb4u);
        in_esi = rd32(sp0 - 0xb0u);
        in_ebx = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xb8u;
        g->ecx = arg1;
        g->esi = arg5 * 0xcu + sp0 - 0xa8u;
        wr32(sp0 - 0xa8u, 1u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10229180(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10229180(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
