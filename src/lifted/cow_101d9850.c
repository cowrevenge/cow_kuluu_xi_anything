/* f_0x101d9850 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_101d9850(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_88;
    uint32_t loc_8c;
    uint32_t loc_90;
    uint32_t loc_94;
    uint32_t loc_98;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 168u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101d9866u: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x94u); in_esi = rd32(sp0 - 0x90u); in_ebp = rd32(sp0 - 0x8cu); g->ebp = rd32(sp0 - 0x8cu); g->edi = rd32(sp0 - 0x94u); g->esi = rd32(sp0 - 0x90u); goto E_101d9866;
    case 0x101d986du: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x94u); in_esi = rd32(sp0 - 0x90u); in_ebp = rd32(sp0 - 0x8cu); g->ebp = rd32(sp0 - 0x8cu); g->edi = rd32(sp0 - 0x94u); g->esi = rd32(sp0 - 0x90u); goto E_101d986d;
    case 0x101d9885u: self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x94u); in_esi = rd32(sp0 - 0x90u); in_ebp = rd32(sp0 - 0x8cu); g->ebp = rd32(sp0 - 0x8cu); g->edi = rd32(sp0 - 0x94u); g->esi = rd32(sp0 - 0x90u); goto E_101d9885;
    case 0x101d9892u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_101d9892;
    case 0x101d98c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_101d98c6;
    case 0x101d98d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_101d98d2;
    case 0x101d98d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_101d98d6;
    case 0x101d98d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_101d98d8;
    case 0x101d98ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_101d98eb;
    case 0x101d98ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_101d98ff;
    case 0x101d9906u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_101d9906;
    case 0x101d990au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_101d990a;
    case 0x101d9914u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_101d9914;
    case 0x101d991au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_101d991a;
    case 0x101d991eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_101d991e;
    case 0x101d994eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_98 = rd32(sp0 - 0x98u); goto E_101d994e;
    case 0x101d995cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_98 = rd32(sp0 - 0x98u); goto E_101d995c;
    case 0x101d995eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_98 = rd32(sp0 - 0x98u); goto E_101d995e;
    case 0x101d997bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; loc_98 = rd32(sp0 - 0x98u); goto E_101d997b;
    case 0x101d99a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_101d99a2;
    case 0x101d99bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_98 = rd32(sp0 - 0x98u); goto E_101d99bc;
    case 0x101d9a05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); goto E_101d9a05;
    default: break;
    }
#endif

    COW_AT(101d9850)
    wr32(sp0 - 0x88u, in_ebx);
    wr32(sp0 - 0x8cu, in_ebp);
    wr32(sp0 - 0x90u, in_esi);
    wr32(sp0 - 0x94u, in_edi);
    if ((uint32_t)(int16_t)arg1 == 5u) goto L_101d9885;
    COW_AT(101d9866)
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        edx = in_edx;
        loc_88 = in_ebx;
        loc_8c = in_ebp;
        loc_90 = in_esi;
        loc_94 = in_edi;
        goto L_101d9a05;
    }
    COW_AT(101d986d)
    g->eax = (uint32_t)(int16_t)arg1 - 6u;
    g->edx = in_edx;
    g->esp = sp0 - 0x94u;
    t1 = cow_thiscall(g, COW_IMG(0x101f2600u), rd32(COW_IMG(0x10663740u)), 0);
    t2 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t2;
    return t1;
L_101d9885: ;
    COW_AT(101d9885)
    g->edx = in_edx;
    g->esp = sp0 - 0x94u;
    t3 = cow_call_regs(g, COW_IMG(0x1020a410u), (uint32_t)(int16_t)arg1 - 5u, g->ecx, g->edx, 1, 0);
    t4 = g->edx;
    if ((uint8_t)t3 != 0u)
    {
        eax = t3;
        edx = t4;
        loc_88 = in_ebx;
        loc_8c = in_ebp;
        loc_90 = in_esi;
        loc_94 = in_edi;
        goto L_101d9a05;
    }
    edx = t4;
    COW_AT(101d9892)
    wr32(sp0 - 0x98u, rd16(arg4));
    g->eax = rd16(arg4);
    g->edx = edx;
    t5 = rd16(arg4);
    t6 = rd32(COW_IMG(0x10621808u));
    g->esp = sp0 - 0x94u;
    t7 = cow_thiscall(g, COW_IMG(0x1015bc40u), t6, 1, t5);
    t8 = g->ecx;
    t9 = g->edx;
    t10 = rd16(t7 + 0xcu);
    t11 = rd8(t7 + 0x1b3u);
    wr8(t7 + 0x1b3u, (uint8_t)(t11 + 1u));
    if ((uint16_t)t10 <= 1u)
    {
        eax = (t7 & 0xffff0000u) | t10;
        ecx = (t8 & 0xffffff00u) | (uint8_t)(t11 + 1u);
        edx = t9;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)(t11 + 1u);
        esi = t7;
        goto L_101d98d6;
    }
    eax = (t7 & 0xffff0000u) | t10;
    ecx = (t8 & 0xffffff00u) | (uint8_t)(t11 + 1u);
    ebx = (in_ebx & 0xffffff00u) | (uint8_t)(t11 + 1u);
    esi = t7;
    COW_AT(101d98c6)
    if ((uint16_t)eax != rd32(arg4 + 4u))
    {
        eax = (uint16_t)eax;
        edx = rd32(arg4 + 4u);
        goto L_101d98d6;
    }
    eax = (uint16_t)eax;
    edx = rd32(arg4 + 4u);
    COW_AT(101d98d2)
    ebx = (ebx & 0xffffff00u) | 1u;
L_101d98d8: ;
    COW_AT(101d98d8)
    t12 = rd8(esi + 0x2du);
    wr8(sp0 - 0x84u, (uint8_t)ebx);
    wr8(esi + 0x1b3u, (uint8_t)((uint8_t)ecx - 1u));
    if ((uint8_t)t12 == 0u)
    {
        eax = (eax & 0xffffff00u) | t12;
        ecx = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)ecx - 1u);
        goto L_101d990a;
    }
    eax = (eax & 0xffffff00u) | t12;
    COW_AT(101d98eb)
    wr32(sp0 - 0x98u, arg4 + 0x10u);
    t13 = (edx & 0xffff0000u) | rd16(arg4);
    wr32(sp0 - 0x9cu, t13);
    g->eax = eax;
    g->ecx = arg4 + 0x10u;
    g->edx = t13;
    g->esp = sp0 - 0x94u;
    t14 = cow_cdecl(g, COW_IMG(0x100feb80u), 2, t13, arg4 + 0x10u);
    t15 = g->ecx;
    t16 = g->edx;
    if ((uint8_t)t14 != 0u)
    {
        eax = t14;
        ecx = t15;
        edx = t16;
        goto L_101d9906;
    }
    eax = t14;
    edx = t16;
    COW_AT(101d98ff)
    wr32(sp0 - 0x98u, 0xb0u);
    loc_98 = 0xb0u;
L_101d995e: ;
    COW_AT(101d995e)
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    t29 = rd32(COW_IMG(0x10578158u));
    g->esp = sp0 - 0x94u;
    t30 = cow_thiscall(g, COW_IMG(0x10129e30u), t29, 1, loc_98);
    t31 = g->ecx;
    t32 = g->edx;
    g->edx = t32;
    t33 = cow_thiscall(g, COW_IMG(0x10037c50u), t31, 0);
    t34 = g->edx;
    g->ebx = rd32(sp0 - 0x88u);
    g->esi = rd32(sp0 - 0x90u);
    g->edi = rd32(sp0 - 0x94u);
    g->ebp = rd32(sp0 - 0x8cu);
    g->edx = t34;
    return t33;
L_101d98d6: ;
    COW_AT(101d98d6)
    ebx = ebx & 0xffffff00u;
    goto L_101d98d8;
L_101d9906: ;
    COW_AT(101d9906)
    ebx = (ebx & 0xffffff00u) | rd8(sp0 - 0x84u);
L_101d990a: ;
    COW_AT(101d990a)
    if (rd16(esi + 0xcu) <= 1u)
    {
        eax = (eax & 0xffff0000u) | rd16(esi + 0xcu);
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(esi + 0xcu);
    COW_AT(101d9914)
        if (rd32(arg4 + 4u) != 1u)
        {
    COW_AT(101d991a)
            if ((uint8_t)ebx == 0u)
            {
    COW_AT(101d991e)
                wr32(sp0 - 0x98u, (uint16_t)eax);
                wr32(sp0 - 0x9cu, 0x1bu);
                wr32(sp0 - 0xa0u, 0xau);
                g->eax = (uint16_t)eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x98u;
                t17 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x1bu);
                t18 = g->ecx;
                t19 = g->edx;
                wr32(sp0 - 0x9cu, t17);
                wr32(sp0 - 0xa0u, sp0 - 0x80u);
                g->ebx = ebx;
                g->eax = sp0 - 0x80u;
                g->edx = t19;
                g->esp = sp0 - 0x8cu;
                t20 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, t17, rd32(sp0 - 0x98u), rd32(sp0 - 0x94u), rd32(sp0 - 0x90u));
                t21 = g->edx;
                wr32(sp0 - 0x98u, sp0 - 0x80u);
                g->ebx = ebx;
                g->edx = t21;
                t22 = rd32(COW_IMG(0x10578158u));
                g->esp = sp0 - 0x94u;
                t23 = cow_thiscall(g, COW_IMG(0x10129eb0u), t22, 1, sp0 - 0x80u);
                t24 = g->ecx;
                t25 = g->edx;
                eax = t23;
                ecx = t24;
                edx = t25;
            }
        }
    }
    COW_AT(101d994e)
    wr32(sp0 - 0x98u, 1u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x94u;
    t26 = cow_call_regs(g, COW_IMG(0x101d75d0u), g->eax, g->ecx, edx, 1, 1, 1u);
    t27 = g->ecx;
    t28 = g->edx;
    if ((int32_t)t26 >= 0)
    {
        ecx = t27;
        edx = t28;
        goto L_101d997b;
    }
    eax = t26;
    edx = t28;
    COW_AT(101d995c)
    wr32(sp0 - 0x98u, 0x6du);
    loc_98 = 0x6du;
    goto L_101d995e;
L_101d997b: ;
    COW_AT(101d997b)
    t35 = (edx & 0xffffff00u) | rd8(esi + 0xcu);
    wr32(sp0 - 0x98u, t35);
    t36 = rd32(sp0 - 0x84u);
    wr32(sp0 - 0x9cu, t36);
    t37 = (ecx & 0xffff0000u) | rd16(arg4);
    wr32(sp0 - 0xa0u, t37);
    g->ecx = self;
    g->esp = sp0 - 0x94u;
    cow_call_regs(g, COW_IMG(0x101d9770u), g->eax, g->ecx, t35, 0, 3, t37, t36, t35);
    t38 = g->ecx;
    t39 = g->edx;
    wr8(self + 4u, 1u);
    t40 = rd8(arg4 + 2u);
    wr8(self + 5u, (uint8_t)t40);
    if (rd32(COW_IMG(0x105781f8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x105781f8u));
        edx = (t39 & 0xffffff00u) | t40;
    }
    else
    {
        eax = rd32(COW_IMG(0x105781f8u));
        ecx = t38;
        edx = (t39 & 0xffffff00u) | t40;
    COW_AT(101d99a2)
        wr32(sp0 - 0x98u, 2u);
        wr32(sp0 - 0x9cu, 0x37u);
        wr32(sp0 - 0xa0u, 0xeu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x98u;
        t41 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x37u);
        t42 = g->edx;
        wr32(sp0 - 0x9cu, t41);
        g->edx = t42;
        g->esp = sp0 - 0x94u;
        t43 = cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, t41, 2u);
        t44 = g->edx;
        eax = t43;
        edx = t44;
    }
    COW_AT(101d99bc)
    wr32(sp0 - 0x98u, 0u);
    wr32(sp0 - 0x9cu, 1u);
    wr32(sp0 - 0xa0u, COW_IMG(0x1036f718u));
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x94u;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1036f718u), 1u, 0u);
    t45 = g->edx;
    wr32(sp0 - 0x98u, arg4);
    wr32(sp0 - 0x9cu, COW_IMG(0x101d9a20u));
    wr32(sp0 - 0xa0u, 0x3b9ac9ffu);
    wr32(sp0 - 0xa4u, 0u);
    t46 = (uint8_t)ebx == 0u;
    t47 = rd32(COW_IMG(0x1057824cu));
    wr32(COW_IMG(0x10663464u), t46);
    g->ebx = ebx;
    g->eax = t46;
    g->edx = t45;
    t48 = cow_thiscall(g, COW_IMG(0x10140d90u), t47, 4, 0u, 0x3b9ac9ffu, COW_IMG(0x101d9a20u), arg4);
    t49 = g->edx;
    t50 = rd32(COW_IMG(0x1057824cu));
    wr32(t50 + 0x34u, COW_IMG(0x101d97b0u));
    g->edx = t49;
    t51 = cow_thiscall(g, COW_IMG(0x10037b90u), t50, 0);
    t52 = g->edx;
    eax = t51;
    edx = t52;
    loc_88 = rd32(sp0 - 0x88u);
    loc_8c = rd32(sp0 - 0x8cu);
    loc_90 = rd32(sp0 - 0x90u);
    loc_94 = rd32(sp0 - 0x94u);
L_101d9a05: ;
    COW_AT(101d9a05)
    g->ebx = loc_88;
    g->esi = loc_90;
    g->edi = loc_94;
    g->ebp = loc_8c;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101d9850(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101d9866u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x94u);
        in_esi = rd32(sp0 - 0x90u);
        in_ebp = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x94u;
        g->eax = (uint32_t)(int16_t)arg1 - 5u;
        wr32(sp0 - 0x88u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101d986du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x94u);
        in_esi = rd32(sp0 - 0x90u);
        in_ebp = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x94u;
        g->eax = (uint32_t)(int16_t)arg1 - 6u;
        wr32(sp0 - 0x88u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101d9885u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x94u);
        in_esi = rd32(sp0 - 0x90u);
        in_ebp = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x94u;
        g->eax = (uint32_t)(int16_t)arg1 - 5u;
        g->ebp = self;
        wr32(sp0 - 0x88u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101d9892u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x94u;
        (void)sp0;
        return 1;
    }
    case 0x101d98c6u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x94u;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101d98d2u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x94u;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101d98d6u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x94u;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101d98d8u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x94u;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101d98ebu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x94u;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101d98ffu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x94u;
        (void)sp0;
        return 1;
    }
    case 0x101d9906u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x94u;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101d990au:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x94u;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101d9914u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x94u;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101d991au:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x94u;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101d991eu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x94u;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101d994eu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_98;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x94u;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101d995cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_98;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x94u;
        (void)sp0;
        return 1;
    }
    case 0x101d995eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_98;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x101d997bu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_98;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x94u;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101d99a2u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x94u;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101d99bcu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_98;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x94u;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101d9a05u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_8c;
        uint32_t loc_90;
        uint32_t loc_94;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x94u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101d9850(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101d9850(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
