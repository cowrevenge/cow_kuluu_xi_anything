/* f_0x1010cc40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1010cc40(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18c;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 440u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1010cc58u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1a4u); in_esi = rd32(sp0 - 0x1a0u); in_ebp = rd32(sp0 - 0x19cu); in_ebx = rd32(sp0 - 0x198u); g->ebp = rd32(sp0 - 0x19cu); g->ebx = rd32(sp0 - 0x198u); g->edi = rd32(sp0 - 0x1a4u); g->esi = rd32(sp0 - 0x1a0u); goto E_1010cc58;
    case 0x1010cc65u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1010cc65;
    case 0x1010cc89u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_18c = rd32(sp0 - 0x18cu); goto E_1010cc89;
    case 0x1010cc97u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_18c = rd32(sp0 - 0x18cu); goto E_1010cc97;
    case 0x1010ccb5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1010ccb5;
    case 0x1010ccedu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1010cced;
    case 0x1010ccf1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1010ccf1;
    case 0x1010ccf3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1010ccf3;
    case 0x1010cd00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1010cd00;
    case 0x1010cd37u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010cd37;
    case 0x1010cd44u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010cd44;
    case 0x1010cd53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010cd53;
    case 0x1010cd60u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010cd60;
    case 0x1010cd6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1010cd6f;
    case 0x1010cd74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1010cd74;
    case 0x1010cd85u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1010cd85;
    case 0x1010cda1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1010cda1;
    case 0x1010cda5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1010cda5;
    case 0x1010ce00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1010ce00;
    case 0x1010ce0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_18c = rd32(sp0 - 0x18cu); goto E_1010ce0d;
    case 0x1010ce17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_18c = rd32(sp0 - 0x18cu); goto E_1010ce17;
    case 0x1010ce47u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1010ce47;
    case 0x1010ce73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1010ce73;
    case 0x1010ce88u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1010ce88;
    case 0x1010ce98u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1010ce98;
    case 0x1010ceafu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1010ceaf;
    case 0x1010ceb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1010ceb1;
    case 0x1010cebbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1010cebb;
    case 0x1010ceecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18c = rd32(sp0 - 0x18cu); goto E_1010ceec;
    case 0x1010cef8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18c = rd32(sp0 - 0x18cu); goto E_1010cef8;
    case 0x1010cf05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1010cf05;
    default: break;
    }
#endif

    COW_AT(1010cc40)
    wr32(sp0 - 0x198u, in_ebx);
    wr32(sp0 - 0x19cu, in_ebp);
    wr32(sp0 - 0x1a0u, in_esi);
    wr32(sp0 - 0x1a4u, in_edi);
    eax = in_eax;
    edx = in_edx;
    ebx = 0x20u;
    edi = sp0 - 0x100u;
L_1010cc58: ;
    COW_AT(1010cc58)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1a4u;
    t1 = cow_thiscall(g, COW_IMG(0x10109110u), edi, 0);
    t2 = g->edx;
    if (ebx != 1u)
    {
        eax = t1;
        edx = t2;
        ebx = ebx - 1u;
        edi = edi + 8u;
        goto L_1010cc58;
    }
    edx = t2;
    ebx = ebx - 1u;
    COW_AT(1010cc65)
    wr32(sp0 - 0x1a8u, 0x23u);
    wr32(sp0 - 0x1acu, 0x20u);
    wr32(sp0 - 0x1b0u, sp0 - 0x180u);
    g->ebx = ebx;
    g->eax = sp0 - 0x180u;
    g->edx = edx;
    g->esp = sp0 - 0x1a4u;
    t3 = cow_thiscall(g, COW_IMG(0x10109af0u), arg1, 3, sp0 - 0x180u, 0x20u, 0x23u);
    t4 = g->edx;
    wr32(sp0 - 0x18cu, t3);
    if ((uint16_t)t3 == 0u)
    {
        eax = t3;
        edx = t4;
        goto L_1010ceec;
    }
    eax = t3;
    edx = t4;
    ebp = t3;
    loc_18c = t3;
    COW_AT(1010cc89)
    if (rd16(self + 0x81au) == 0u) goto L_1010ce0d;
    COW_AT(1010cc97)
    t5 = rd32(sp0 - 0x180u);
    wr32(sp0 - 0x1a8u, t5);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1a4u;
    t6 = cow_thiscall(g, COW_IMG(0x10109120u), sp0 - 0x194u, 1, t5);
    t7 = g->edx;
    wr32(sp0 - 0x1a8u, COW_IMG(0x1036bf28u));
    g->ebx = ebx;
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x10109570u), t6, 1, COW_IMG(0x1036bf28u));
    t9 = g->edx;
    if (t8 != 0u)
    {
        eax = t8;
        edx = t9;
        goto L_1010ccf1;
    }
    COW_AT(1010ccb5)
    t10 = rd32(sp0 - 0x17cu);
    wr32(sp0 - 0x1a8u, t10);
    g->eax = t10;
    g->edx = rd16(self + 0x81au);
    t11 = rd16(self + 0x81au);
    g->esp = sp0 - 0x1a4u;
    t12 = cow_thiscall(g, COW_IMG(0x10109120u), sp0 - 0x188u, 1, t10);
    t13 = g->edx;
    t14 = self + t11 * 8u + 0x854u;
    wr32(sp0 - 0x1a8u, t14);
    g->ebx = ebx;
    g->edx = t13;
    t15 = cow_thiscall(g, COW_IMG(0x101095d0u), t12, 1, t14);
    t16 = g->edx;
    g->edx = t16;
    t17 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x188u, 0);
    t18 = g->edx;
    if (t15 != 0u)
    {
        eax = t17;
        edx = t18;
        ebx = (ebx & 0xffffff00u) | t15 == 0u;
        goto L_1010ccf1;
    }
    eax = t17;
    edx = t18;
    ebx = (ebx & 0xffffff00u) | t15 == 0u;
    COW_AT(1010cced)
    ebx = (ebx & 0xffffff00u) | 1u;
L_1010ccf3: ;
    COW_AT(1010ccf3)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1a4u;
    t19 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x194u, 0);
    t20 = g->edx;
    if ((uint8_t)ebx == 0u)
    {
        edx = t20;
        goto L_1010cd6f;
    }
    eax = t19;
    COW_AT(1010cd00)
    wr16(self + 0x81au, (uint16_t)(rd16(self + 0x81au) - 1u));
    t21 = rd32(self + rd16(self + 0x81au) * 4u + 0x81cu);
    g->eax = t21;
    g->edx = rd32(t21);
    t22 = rd32(t21);
    g->esp = sp0 - 0x1a4u;
    t23 = cow_thiscall(g, rd32(t22 + 8u), t21, 0);
    t24 = g->edx;
    if (rd16(self + 0x81au) == 0u)
    {
        eax = t23;
        edx = t24;
        esi = sp0;
        edi = 0x20u;
        goto L_1010cd53;
    }
    eax = t23;
    edx = t24;
    esi = sp0;
    edi = 0x20u;
L_1010cd37: ;
    COW_AT(1010cd37)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1a4u;
    t25 = cow_thiscall(g, COW_IMG(0x101090a0u), esi - 8u, 0);
    t26 = g->edx;
    if (edi != 1u)
    {
        eax = t25;
        edx = t26;
        esi = esi - 8u;
        edi = edi - 1u;
        goto L_1010cd37;
    }
    eax = t25;
    COW_AT(1010cd44)
    g->ebx = rd32(sp0 - 0x198u);
    g->esi = rd32(sp0 - 0x1a0u);
    g->edi = rd32(sp0 - 0x1a4u);
    g->ebp = rd32(sp0 - 0x19cu);
    return (eax & 0xffffff00u) | 1u;
L_1010ccf1: ;
    COW_AT(1010ccf1)
    ebx = ebx & 0xffffff00u;
    goto L_1010ccf3;
L_1010cd53: ;
    COW_AT(1010cd53)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1a4u;
    t27 = cow_thiscall(g, COW_IMG(0x101090a0u), esi - 8u, 0);
    t28 = g->edx;
    if (edi != 1u)
    {
        eax = t27;
        edx = t28;
        esi = esi - 8u;
        edi = edi - 1u;
        goto L_1010cd53;
    }
    eax = t27;
    COW_AT(1010cd60)
    g->ebx = rd32(sp0 - 0x198u);
    g->esi = rd32(sp0 - 0x1a0u);
    g->edi = rd32(sp0 - 0x1a4u);
    g->ebp = rd32(sp0 - 0x19cu);
    return eax & 0xffffff00u;
L_1010cd6f: ;
    COW_AT(1010cd6f)
    if ((uint16_t)ebp != 0u)
    {
    COW_AT(1010cd74)
        ebx = sp0 - 0x180u;
        ebp = (uint16_t)ebp;
        edi = sp0 - 0x100u;
L_1010cd85: ;
    COW_AT(1010cd85)
        wr32(sp0 - 0x1a8u, rd32(ebx));
        g->edx = edx;
        t29 = rd32(ebx);
        g->esp = sp0 - 0x1a4u;
        t30 = cow_call_regs(g, COW_IMG(0x101092c0u), t29, edi, g->edx, 0, 1, t29);
        t31 = g->edx;
        wr32(sp0 - 0x1a8u, 0u);
        g->ebx = ebx;
        cow_fastcall(g, COW_IMG(0x10109e50u), edi, t31, 1, 0u);
        t32 = g->edx;
        if (ebp != 1u)
        {
            edx = t32;
            ebx = ebx + 4u;
            ebp = ebp - 1u;
            edi = edi + 8u;
            goto L_1010cd85;
        }
    COW_AT(1010cda1)
        ebp = rd32(sp0 - 0x18cu);
    }
    COW_AT(1010cda5)
    t33 = self + rd16(self + 0x81au) * 8u + 0x85cu;
    wr32(sp0 - 0x1a8u, t33);
    wr32(sp0 - 0x1acu, ebp);
    wr32(sp0 - 0x1b0u, sp0 - 0x100u);
    t34 = (sp0 - 0x100u & 0xffffff00u) | rd8(self + 0x808u);
    wr32(sp0 - 0x1b4u, t34);
    g->eax = t34;
    g->esp = sp0 - 0x1a4u;
    t35 = cow_thiscall(g, rd32(rd32(rd32(self + rd16(self + 0x81au) * 4u + 0x818u)) + 4u), rd32(self + rd16(self + 0x81au) * 4u + 0x818u), 4, t34, sp0 - 0x100u, ebp, t33);
    wr32(self + rd16(self + 0x81au) * 4u + 0x81cu, t35);
    t36 = (t35 & 0xffff0000u) | rd16(self + 0x81au);
    if (rd32(self + (uint16_t)t36 * 4u + 0x81cu) == 0u)
    {
        eax = t36;
        edx = (uint16_t)t36;
    }
    else
    {
        eax = t36;
        edx = (uint16_t)t36;
    COW_AT(1010ce00)
        wr16(self + 0x81au, (uint16_t)(eax + 1u));
        eax = eax + 1u;
    }
L_1010ceec: ;
    COW_AT(1010ceec)
    esi = sp0;
    edi = 0x20u;
L_1010cef8: ;
    COW_AT(1010cef8)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1a4u;
    t68 = cow_thiscall(g, COW_IMG(0x101090a0u), esi - 8u, 0);
    t69 = g->edx;
    if (edi != 1u)
    {
        eax = t68;
        edx = t69;
        esi = esi - 8u;
        edi = edi - 1u;
        goto L_1010cef8;
    }
    eax = t68;
    COW_AT(1010cf05)
    g->ebx = rd32(sp0 - 0x198u);
    g->esi = rd32(sp0 - 0x1a0u);
    g->edi = rd32(sp0 - 0x1a4u);
    g->ebp = rd32(sp0 - 0x19cu);
    return (eax & 0xffffff00u) | 1u;
L_1010ce0d: ;
    COW_AT(1010ce0d)
    if ((uint16_t)ebp > 2u)
    {
    COW_AT(1010ce17)
        t37 = rd32(sp0 - 0x180u);
        wr32(sp0 - 0x1a8u, t37);
        g->eax = t37;
        g->edx = edx;
        g->esp = sp0 - 0x1a4u;
        t38 = cow_thiscall(g, COW_IMG(0x10109120u), sp0 - 0x194u, 1, t37);
        t39 = g->edx;
        wr32(sp0 - 0x1a8u, COW_IMG(0x1036bf24u));
        g->ebx = ebx;
        g->edx = t39;
        t40 = cow_thiscall(g, COW_IMG(0x10109570u), t38, 1, COW_IMG(0x1036bf24u));
        t41 = g->edx;
        g->edx = t41;
        t42 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x194u, 0);
        t43 = g->edx;
        if (t40 != 0u)
        {
            eax = t42;
            edx = t43;
        }
        else
        {
            eax = t42;
            edx = t43;
            ebx = (ebx & 0xffffff00u) | t40 == 0u;
    COW_AT(1010ce47)
            t44 = rd32(sp0 - 0x17cu);
            wr32(sp0 - 0x1a8u, t44);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x1a4u;
            t45 = cow_thiscall(g, COW_IMG(0x10109120u), sp0 - 0x194u, 1, t44);
            t46 = g->edx;
            wr32(sp0 - 0x1a8u, COW_IMG(0x1036bf1cu));
            g->ebx = ebx;
            g->edx = t46;
            t47 = cow_thiscall(g, COW_IMG(0x10109570u), t45, 1, COW_IMG(0x1036bf1cu));
            t48 = g->edx;
            g->edx = t48;
            t49 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x194u, 0);
            t50 = g->ecx;
            t51 = g->edx;
            if (t47 != 0u)
            {
                eax = t49;
                edx = t51;
            }
            else
            {
                ecx = t50;
    COW_AT(1010ce73)
                t52 = rd8(rd32(sp0 - 0x178u));
                wr32(sp0 - 0x1a8u, t52);
                g->eax = rd32(sp0 - 0x178u);
                g->edx = t52;
                t53 = rd32(sp0 - 0x178u);
                g->esp = sp0 - 0x1a4u;
                t54 = cow_thiscall_cdecl(g, COW_IMG(0x1031479cu), ecx, 1, t52);
                t55 = g->ecx;
                t56 = g->edx;
                if (t54 == 0u)
                {
                    eax = t54;
                    edx = t56;
                }
                else
                {
                    eax = t54;
                    ecx = t55;
                    edx = t56;
    COW_AT(1010ce88)
                    wr32(sp0 - 0x1a8u, 0x70u);
                    g->eax = eax;
                    g->esp = sp0 - 0x1a4u;
                    t57 = cow_call_regs(g, COW_IMG(0x101085e0u), g->eax, g->ecx, edx, 1, 1, 0x70u);
                    t58 = g->edx;
                    if (t57 == 0u)
                    {
                        edx = t58;
    COW_AT(1010ceaf)
                        eax = 0u;
                    }
                    else
                    {
                        eax = t57;
                        edx = t58;
                        edi = t57;
    COW_AT(1010ce98)
                        t59 = rd32(sp0 - 0x178u);
                        wr32(sp0 - 0x1a8u, t59);
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x1a4u;
                        t60 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), t59, 1, t59);
                        t61 = g->edx;
                        wr32(sp0 - 0x1a8u, t60);
                        g->edx = t61;
                        t62 = cow_thiscall(g, COW_IMG(0x1010b150u), edi, 1, t60);
                        t63 = g->edx;
                        eax = t62;
                        edx = t63;
                    }
    COW_AT(1010ceb1)
                    wr32(self + 0x80cu, eax);
                    if (eax != 0u)
                    {
    COW_AT(1010cebb)
                        t64 = rd16(self + 0x81au);
                        wr32(self + t64 * 4u + 0x81cu, eax);
                        t65 = rd32(sp0 - 0x17cu);
                        wr32(sp0 - 0x1a8u, t65);
                        g->edx = t64;
                        g->esp = sp0 - 0x1a4u;
                        t66 = cow_call_regs(g, COW_IMG(0x101092c0u), t65, self + rd16(self + 0x81au) * 8u + 0x85cu, g->edx, 0, 1, t65);
                        t67 = g->edx;
                        wr16(self + 0x81au, (uint16_t)(rd16(self + 0x81au) + 1u));
                        eax = t66;
                        edx = t67;
                    }
                }
            }
        }
    }
    goto L_1010ceec;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1010cc40(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1010cc58u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
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
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1a4u);
        in_esi = rd32(sp0 - 0x1a0u);
        in_ebp = rd32(sp0 - 0x19cu);
        in_ebx = rd32(sp0 - 0x198u);
        g->esp = sp0 - 0x1a4u;
        (void)sp0;
        return 1;
    }
    case 0x1010cc65u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1a4u;
        (void)sp0;
        return 1;
    }
    case 0x1010cc89u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_18c = rd32(sp0 - 0x18cu);
        g->esp = sp0 - 0x1a4u;
        wr32(sp0 - 0x1b0u, sp0 - 0x180u);
        (void)sp0;
        return 1;
    }
    case 0x1010cc97u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_18c = rd32(sp0 - 0x18cu);
        g->esp = sp0 - 0x1a4u;
        wr32(sp0 - 0x1b0u, sp0 - 0x180u);
        (void)sp0;
        return 1;
    }
    case 0x1010ccb5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1a4u;
        wr32(sp0 - 0x1b0u, sp0 - 0x180u);
        (void)sp0;
        return 1;
    }
    case 0x1010ccedu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1a4u;
        wr32(sp0 - 0x1b0u, sp0 - 0x180u);
        (void)sp0;
        return 1;
    }
    case 0x1010ccf1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1a4u;
        wr32(sp0 - 0x1b0u, sp0 - 0x180u);
        (void)sp0;
        return 1;
    }
    case 0x1010ccf3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1a4u;
        wr32(sp0 - 0x1b0u, sp0 - 0x180u);
        (void)sp0;
        return 1;
    }
    case 0x1010cd00u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1a4u;
        wr32(sp0 - 0x1b0u, sp0 - 0x180u);
        (void)sp0;
        return 1;
    }
    case 0x1010cd37u:
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
        g->esp = sp0 - 0x1a4u;
        wr32(sp0 - 0x1b0u, sp0 - 0x180u);
        (void)sp0;
        return 1;
    }
    case 0x1010cd44u:
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
        g->esp = sp0 - 0x1a4u;
        wr32(sp0 - 0x1b0u, sp0 - 0x180u);
        (void)sp0;
        return 1;
    }
    case 0x1010cd53u:
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
        g->esp = sp0 - 0x1a4u;
        wr32(sp0 - 0x1b0u, sp0 - 0x180u);
        (void)sp0;
        return 1;
    }
    case 0x1010cd60u:
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
        g->esp = sp0 - 0x1a4u;
        wr32(sp0 - 0x1b0u, sp0 - 0x180u);
        (void)sp0;
        return 1;
    }
    case 0x1010cd6fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1a4u;
        wr32(sp0 - 0x1b0u, sp0 - 0x180u);
        (void)sp0;
        return 1;
    }
    case 0x1010cd74u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1a4u;
        wr32(sp0 - 0x1b0u, sp0 - 0x180u);
        (void)sp0;
        return 1;
    }
    case 0x1010cd85u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1a4u;
        wr32(sp0 - 0x1b0u, sp0 - 0x180u);
        (void)sp0;
        return 1;
    }
    case 0x1010cda1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1a4u;
        wr32(sp0 - 0x1b0u, sp0 - 0x180u);
        (void)sp0;
        return 1;
    }
    case 0x1010cda5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1a4u;
        wr32(sp0 - 0x1b0u, sp0 - 0x180u);
        (void)sp0;
        return 1;
    }
    case 0x1010ce00u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1a4u;
        wr32(sp0 - 0x1b0u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1010ce0du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_18c = rd32(sp0 - 0x18cu);
        g->esp = sp0 - 0x1a4u;
        wr32(sp0 - 0x1b0u, sp0 - 0x180u);
        (void)sp0;
        return 1;
    }
    case 0x1010ce17u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_18c = rd32(sp0 - 0x18cu);
        g->esp = sp0 - 0x1a4u;
        wr32(sp0 - 0x1b0u, sp0 - 0x180u);
        (void)sp0;
        return 1;
    }
    case 0x1010ce47u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1a4u;
        wr32(sp0 - 0x1b0u, sp0 - 0x180u);
        (void)sp0;
        return 1;
    }
    case 0x1010ce73u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1a4u;
        wr32(sp0 - 0x1b0u, sp0 - 0x180u);
        (void)sp0;
        return 1;
    }
    case 0x1010ce88u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1a4u;
        wr32(sp0 - 0x1b0u, sp0 - 0x180u);
        (void)sp0;
        return 1;
    }
    case 0x1010ce98u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1a4u;
        wr32(sp0 - 0x1b0u, sp0 - 0x180u);
        (void)sp0;
        return 1;
    }
    case 0x1010ceafu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1a4u;
        wr32(sp0 - 0x1b0u, sp0 - 0x180u);
        (void)sp0;
        return 1;
    }
    case 0x1010ceb1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1a4u;
        wr32(sp0 - 0x1b0u, sp0 - 0x180u);
        (void)sp0;
        return 1;
    }
    case 0x1010cebbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1a4u;
        wr32(sp0 - 0x1b0u, sp0 - 0x180u);
        (void)sp0;
        return 1;
    }
    case 0x1010ceecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18c = rd32(sp0 - 0x18cu);
        g->esp = sp0 - 0x1a4u;
        (void)sp0;
        return 1;
    }
    case 0x1010cef8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18c = rd32(sp0 - 0x18cu);
        g->esp = sp0 - 0x1a4u;
        (void)sp0;
        return 1;
    }
    case 0x1010cf05u:
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
        g->esp = sp0 - 0x1a4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1010cc40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1010cc40(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
