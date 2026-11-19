/* f_0x101d62b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101d62b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_84;
    uint32_t loc_90;
    uint32_t loc_94;
    uint32_t loc_98;
    uint32_t loc_9c;
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
    cow_frame(g, sp0, 192u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101d631eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x98u); in_ebp = rd32(sp0 - 0x94u); in_ebx = rd32(sp0 - 0x90u); g->ebp = rd32(sp0 - 0x94u); g->ebx = rd32(sp0 - 0x90u); g->esi = rd32(sp0 - 0x98u); goto E_101d631e;
    case 0x101d632au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x98u); in_ebp = rd32(sp0 - 0x94u); in_ebx = rd32(sp0 - 0x90u); g->ebp = rd32(sp0 - 0x94u); g->ebx = rd32(sp0 - 0x90u); g->esi = rd32(sp0 - 0x98u); goto E_101d632a;
    case 0x101d6332u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_84 = rd32(sp0 - 0x84u); goto E_101d6332;
    case 0x101d634du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101d634d;
    case 0x101d636eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101d636e;
    case 0x101d6375u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101d6375;
    case 0x101d638au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101d638a;
    case 0x101d639au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101d639a;
    case 0x101d639fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101d639f;
    case 0x101d63a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101d63a4;
    case 0x101d63a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101d63a8;
    case 0x101d63c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101d63c4;
    case 0x101d63f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101d63f3;
    case 0x101d640du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_84 = rd32(sp0 - 0x84u); goto E_101d640d;
    case 0x101d6418u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x98u); in_ebp = rd32(sp0 - 0x94u); in_ebx = rd32(sp0 - 0x90u); g->ebp = rd32(sp0 - 0x94u); g->ebx = rd32(sp0 - 0x90u); g->esi = rd32(sp0 - 0x98u); goto E_101d6418;
    case 0x101d6474u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = g->edi; goto E_101d6474;
    case 0x101d6479u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = g->edi; goto E_101d6479;
    case 0x101d6531u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); goto E_101d6531;
    default: break;
    }
#endif

    COW_AT(101d62b0)
    wr32(sp0 - 0x90u, in_ebx);
    wr32(sp0 - 0x94u, in_ebp);
    wr32(sp0 - 0x98u, in_esi);
    wr32(sp0 - 0x9cu, in_edi);
    wr16(sp0 - 0x8cu, 0u);
    wr16(sp0 - 0x8au, 0u);
    wr16(sp0 - 0x88u, 0u);
    wr16(sp0 - 0x86u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x9cu;
    t1 = cow_stdcall(g, COW_IMG(0x101cc0a0u), 0);
    t2 = g->edx;
    wr32(sp0 - 0xa0u, sp0 - 0x8cu);
    g->edx = t2;
    t3 = rd32(self + 8u);
    t4 = cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0x8cu, t3, g->edx, 0, 1, sp0 - 0x8cu);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0xa0u, 0x80808080u);
    wr32(sp0 - 0xa4u, 0u);
    wr32(sp0 - 0xa8u, 0x45u);
    wr32(sp0 - 0xacu, 9u);
    g->esp = sp0 - 0xa4u;
    t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x45u);
    wr32(sp0 - 0xa8u, t7);
    t8 = (uint32_t)(int16_t)rd16(sp0 - 0x8au) + 3u;
    wr32(sp0 - 0xacu, t8);
    t9 = (uint32_t)(int16_t)rd16(sp0 - 0x8cu) + 3u;
    wr32(sp0 - 0xb0u, t9);
    g->edx = t9;
    g->esp = sp0 - 0x84u;
    t10 = cow_cdecl(g, COW_IMG(0x10129f00u), 11, t9, t8, t7, 0u, 0x80808080u, in_edi, in_esi, in_ebp, in_ebx, rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u));
    t11 = g->edx;
    if (rd8(self + 0x18u) == 0u)
    {
        edx = t11;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)t1;
        goto L_101d6418;
    }
    edx = t11;
    COW_AT(101d631e)
    if (rd16(rd32(self + 0x1cu)) == 0u)
    {
        eax = rd32(self + 0x1cu);
        loc_90 = in_ebx;
        loc_94 = in_ebp;
        loc_98 = in_esi;
        loc_9c = in_edi;
        goto L_101d6531;
    }
    eax = rd32(self + 0x1cu);
    COW_AT(101d632a)
    wr32(sp0 - 0x84u, 1u);
    ebp = 0u;
    edi = in_edi;
    loc_90 = in_ebx;
    loc_94 = in_ebp;
    loc_98 = in_esi;
    loc_9c = in_edi;
    loc_84 = 1u;
L_101d6332: ;
    COW_AT(101d6332)
    t12 = rd16(eax + ebp);
    wr32(sp0 - 0xa0u, t12);
    wr32(sp0 - 0xa4u, 0x14u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x9cu;
    t13 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x14u, t12);
    t14 = g->edx;
    if (t13 == 0u)
    {
        edx = t14;
    }
    else
    {
        ebx = t13;
    COW_AT(101d634d)
        wr32(sp0 - 0xa0u, 1u);
        wr32(sp0 - 0xa4u, 1u);
        t15 = rd32(sp0 - 0x84u);
        wr32(sp0 - 0xa8u, t15);
        wr32(sp0 - 0xacu, sp0 - 0x8cu);
        g->ebx = ebx;
        g->edi = edi;
        g->edx = t15;
        g->esp = sp0 - 0x9cu;
        cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 0x8cu, t15, 1u, 1u);
        t16 = g->edx;
        if (rd16(ebp + rd32(self + 0x1cu)) == 0x118u)
        {
            edx = t16;
    COW_AT(101d6375)
            t17 = (-(rd8(self + 0x19u) != 0u) & 0x406040u) - 0x7fbfdfc0u;
            edx = t17;
            edi = t17;
        }
        else
        {
            edx = t16;
    COW_AT(101d636e)
            edi = 0x80808080u;
        }
    COW_AT(101d638a)
        if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
        {
            eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
            ecx = rd32(COW_IMG(0x10456a28u));
            edx = (edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
            goto L_101d63a4;
        }
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        ecx = rd32(COW_IMG(0x10456a28u));
        edx = (edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    COW_AT(101d639a)
        if (eax == 2u) goto L_101d63c4;
    COW_AT(101d639f)
        if (eax == 3u) goto L_101d63c4;
L_101d63a4: ;
    COW_AT(101d63a4)
        if (eax != 0u) goto L_101d63c4;
    COW_AT(101d63a8)
        wr32(sp0 - 0xa0u, edi);
        wr32(sp0 - 0xa4u, eax);
        wr32(sp0 - 0xa8u, ebx);
        t18 = (uint32_t)(int16_t)rd16(sp0 - 0x8au);
        wr32(sp0 - 0xacu, t18);
        t19 = (uint32_t)(int16_t)rd16(sp0 - 0x8cu) + 0x14u;
        wr32(sp0 - 0xb0u, t19);
        g->edx = edx;
        g->esp = sp0 - 0x84u;
        cow_cdecl(g, COW_IMG(0x10129f00u), 11, t19, t18, ebx, eax, edi, rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u));
        t20 = g->edx;
        edx = t20;
    }
L_101d63f3: ;
    COW_AT(101d63f3)
    t24 = rd32(sp0 - 0x84u) + 1u;
    wr32(sp0 - 0x84u, t24);
    if (rd16(ebp + rd32(self + 0x1cu) + 2u) != 0u)
    {
        eax = rd32(self + 0x1cu);
        ebp = ebp + 2u;
        edi = t24;
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_84 = t24;
        goto L_101d6332;
    }
    eax = rd32(self + 0x1cu);
    COW_AT(101d640d)
    g->ebx = rd32(sp0 - 0x90u);
    g->esi = rd32(sp0 - 0x98u);
    g->edi = rd32(sp0 - 0x9cu);
    g->ebp = rd32(sp0 - 0x94u);
    g->edx = edx;
    return eax;
L_101d63c4: ;
    COW_AT(101d63c4)
    wr32(sp0 - 0xa0u, ebx);
    wr32(sp0 - 0xa4u, COW_IMG(0x1037ece4u));
    wr32(sp0 - 0xa8u, sp0 - 0x80u);
    g->ebx = ebx;
    g->esp = sp0 - 0x94u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, COW_IMG(0x1037ece4u), ebx, rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u));
    wr32(sp0 - 0xacu, edi);
    wr32(sp0 - 0xb0u, 0u);
    wr32(sp0 - 0xb4u, sp0 - 0x80u);
    t21 = (uint32_t)(int16_t)rd16(sp0 - 0x8au);
    wr32(sp0 - 0xb8u, t21);
    t22 = (uint32_t)(int16_t)rd16(sp0 - 0x8cu) + 0x14u;
    wr32(sp0 - 0xbcu, t22);
    g->edx = t22;
    g->esp = sp0 - 0x90u;
    cow_cdecl(g, COW_IMG(0x10129f00u), 11, t22, t21, sp0 - 0x80u, 0u, edi, sp0 - 0x80u, COW_IMG(0x1037ece4u), rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u));
    t23 = g->edx;
    edx = t23;
    goto L_101d63f3;
L_101d6418: ;
    COW_AT(101d6418)
    wr32(sp0 - 0xa0u, 1u);
    wr32(sp0 - 0xa4u, 1u);
    wr32(sp0 - 0xa8u, 1u);
    wr32(sp0 - 0xacu, sp0 - 0x8cu);
    g->ebx = ebx;
    g->edi = in_edi;
    g->eax = sp0 - 0x8cu;
    g->edx = edx;
    t25 = rd32(self + 8u);
    g->esp = sp0 - 0x9cu;
    t26 = cow_thiscall(g, COW_IMG(0x10118900u), t25, 4, sp0 - 0x8cu, 1u, 1u, 1u);
    t27 = g->ecx;
    t28 = g->edx;
    wr32(sp0 - 0xa0u, 0x80808080u);
    wr32(sp0 - 0xa4u, 0u);
    wr32(sp0 - 0xa8u, 0xb8u);
    wr32(sp0 - 0xacu, 9u);
    g->esp = sp0 - 0xa4u;
    t29 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0xb8u);
    wr32(sp0 - 0xa8u, t29);
    t30 = (uint32_t)(int16_t)rd16(sp0 - 0x8au);
    wr32(sp0 - 0xacu, t30);
    t31 = (uint32_t)(int16_t)rd16(sp0 - 0x8cu) + 0x14u;
    wr32(sp0 - 0xb0u, t31);
    g->edx = t31;
    g->esp = sp0 - 0x84u;
    cow_cdecl(g, COW_IMG(0x10129f00u), 11, t31, t30, t29, 0u, 0x80808080u, in_edi, in_esi, in_ebp, in_ebx, rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u));
    t32 = g->edx;
    wr32(sp0 - 0xa0u, 1u);
    wr32(sp0 - 0xa4u, 1u);
    wr32(sp0 - 0xa8u, 2u);
    wr32(sp0 - 0xacu, sp0 - 0x8cu);
    g->ebx = ebx;
    g->edi = in_edi;
    g->edx = t32;
    t33 = rd32(self + 8u);
    g->esp = sp0 - 0x9cu;
    cow_thiscall(g, COW_IMG(0x10118900u), t33, 4, sp0 - 0x8cu, 2u, 1u, 1u);
    t34 = g->ecx;
    t35 = g->edx;
    if ((uint8_t)ebx != 0u)
    {
        eax = 0x46u;
        ecx = t34;
        edx = t35;
    }
    else
    {
        ecx = t34;
        edx = t35;
    COW_AT(101d6474)
        eax = 0xf1u;
    }
    COW_AT(101d6479)
    wr32(sp0 - 0xa0u, 0x80808080u);
    wr32(sp0 - 0xa4u, 0u);
    wr32(sp0 - 0xa8u, eax);
    wr32(sp0 - 0xacu, 9u);
    g->eax = eax;
    g->esp = sp0 - 0xa4u;
    t36 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, eax);
    wr32(sp0 - 0xa8u, t36);
    t37 = (uint32_t)(int16_t)rd16(sp0 - 0x8au);
    wr32(sp0 - 0xacu, t37);
    t38 = (uint32_t)(int16_t)rd16(sp0 - 0x8cu) + 0x14u;
    wr32(sp0 - 0xb0u, t38);
    g->edx = t38;
    g->esp = sp0 - 0x84u;
    cow_cdecl(g, COW_IMG(0x10129f00u), 11, t38, t37, t36, 0u, 0x80808080u, rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u));
    t39 = g->edx;
    wr32(sp0 - 0xa0u, 1u);
    wr32(sp0 - 0xa4u, 1u);
    wr32(sp0 - 0xa8u, 4u);
    wr32(sp0 - 0xacu, sp0 - 0x8cu);
    g->ebx = ebx;
    g->edi = in_edi;
    g->eax = sp0 - 0x8cu;
    g->edx = t39;
    t40 = rd32(self + 8u);
    g->esp = sp0 - 0x9cu;
    t41 = cow_thiscall(g, COW_IMG(0x10118900u), t40, 4, sp0 - 0x8cu, 4u, 1u, 1u);
    t42 = g->ecx;
    t43 = g->edx;
    wr32(sp0 - 0xa0u, 0x80808080u);
    wr32(sp0 - 0xa4u, 0u);
    wr32(sp0 - 0xa8u, 0xb9u);
    wr32(sp0 - 0xacu, 9u);
    g->esp = sp0 - 0xa4u;
    t44 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0xb9u);
    wr32(sp0 - 0xa8u, t44);
    t45 = (uint32_t)(int16_t)rd16(sp0 - 0x8au);
    wr32(sp0 - 0xacu, t45);
    t46 = (uint32_t)(int16_t)rd16(sp0 - 0x8cu) + 0x14u;
    wr32(sp0 - 0xb0u, t46);
    g->edx = t46;
    g->esp = sp0 - 0x84u;
    t47 = cow_cdecl(g, COW_IMG(0x10129f00u), 11, t46, t45, t44, 0u, 0x80808080u, rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u));
    t48 = g->edx;
    wr32(sp0 - 0xa0u, 1u);
    wr32(sp0 - 0xa4u, 1u);
    wr32(sp0 - 0xa8u, 3u);
    wr32(sp0 - 0xacu, sp0 - 0x8cu);
    t49 = (-(rd8(self + 0x1au) != 0u) & 0x404040u) - 0x7fbfbfc0u;
    g->ebx = ebx;
    g->edi = t49;
    g->eax = t49;
    g->edx = t48;
    t50 = rd32(self + 8u);
    g->esp = sp0 - 0x9cu;
    t51 = cow_thiscall(g, COW_IMG(0x10118900u), t50, 4, sp0 - 0x8cu, 3u, 1u, 1u);
    t52 = g->ecx;
    t53 = g->edx;
    wr32(sp0 - 0xa0u, t49);
    wr32(sp0 - 0xa4u, 0u);
    wr32(sp0 - 0xa8u, 0x125u);
    wr32(sp0 - 0xacu, 9u);
    g->ecx = t52;
    g->esp = sp0 - 0xa4u;
    t54 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x125u);
    t55 = g->ecx;
    wr32(sp0 - 0xa8u, t54);
    t56 = (uint32_t)(int16_t)rd16(sp0 - 0x8au);
    wr32(sp0 - 0xacu, t56);
    t57 = (uint32_t)(int16_t)rd16(sp0 - 0x8cu) + 0x14u;
    wr32(sp0 - 0xb0u, t57);
    g->eax = t57;
    g->edx = t56;
    g->esp = sp0 - 0x84u;
    t58 = cow_cdecl(g, COW_IMG(0x10129f00u), 11, t57, t56, t54, 0u, rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u));
    t59 = g->edx;
    eax = t58;
    edx = t59;
    loc_90 = rd32(sp0 - 0x90u);
    loc_94 = rd32(sp0 - 0x94u);
    loc_98 = rd32(sp0 - 0x98u);
    loc_9c = rd32(sp0 - 0x9cu);
L_101d6531: ;
    COW_AT(101d6531)
    g->ebx = loc_90;
    g->esi = loc_98;
    g->edi = loc_9c;
    g->ebp = loc_94;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101d62b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101d631eu:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x98u);
        in_ebp = rd32(sp0 - 0x94u);
        in_ebx = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x9cu;
        g->ebp = 0u;
        wr32(sp0 - 0x9cu, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x101d632au:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x98u);
        in_ebp = rd32(sp0 - 0x94u);
        in_ebx = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x9cu;
        g->ebp = 0u;
        wr32(sp0 - 0x9cu, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x101d6332u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_84;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x9cu;
        (void)sp0;
        return 1;
    }
    case 0x101d634du:
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
        g->esp = sp0 - 0x9cu;
        (void)sp0;
        return 1;
    }
    case 0x101d636eu:
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
        g->esp = sp0 - 0x9cu;
        wr32(sp0 - 0xacu, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x101d6375u:
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
        g->esp = sp0 - 0x9cu;
        wr32(sp0 - 0xacu, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x101d638au:
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
        g->esp = sp0 - 0x9cu;
        wr32(sp0 - 0xacu, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x101d639au:
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
        g->esp = sp0 - 0x9cu;
        wr32(sp0 - 0xacu, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x101d639fu:
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
        g->esp = sp0 - 0x9cu;
        wr32(sp0 - 0xacu, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x101d63a4u:
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
        g->esp = sp0 - 0x9cu;
        wr32(sp0 - 0xacu, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x101d63a8u:
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
        g->esp = sp0 - 0x9cu;
        wr32(sp0 - 0xacu, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x101d63c4u:
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
        g->esp = sp0 - 0x9cu;
        wr32(sp0 - 0xacu, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x101d63f3u:
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
        g->esp = sp0 - 0x9cu;
        (void)sp0;
        return 1;
    }
    case 0x101d640du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_84;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x9cu;
        (void)sp0;
        return 1;
    }
    case 0x101d6418u:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x98u);
        in_ebp = rd32(sp0 - 0x94u);
        in_ebx = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x9cu;
        g->ebp = 0u;
        wr32(sp0 - 0x9cu, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x101d6474u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x9cu;
        g->ebp = 0u;
        wr32(sp0 - 0xacu, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x101d6479u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x9cu;
        g->ebp = 0u;
        wr32(sp0 - 0xacu, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x101d6531u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x9cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101d62b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101d62b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
