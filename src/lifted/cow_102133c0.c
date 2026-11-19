/* f_0x102133c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=7 */
void cow_fn_102133c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 4312u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102133cau: self = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102133ca;
    case 0x102133dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x10d0u); in_esi = rd32(sp0 - 0x10ccu); in_ebp = rd32(sp0 - 0x10c8u); in_ebx = rd32(sp0 - 0x10c4u); g->ebp = rd32(sp0 - 0x10c8u); g->ebx = rd32(sp0 - 0x10c4u); g->edi = rd32(sp0 - 0x10d0u); g->esi = rd32(sp0 - 0x10ccu); goto E_102133dc;
    case 0x102133e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x10d0u); in_esi = rd32(sp0 - 0x10ccu); in_ebp = rd32(sp0 - 0x10c8u); in_ebx = rd32(sp0 - 0x10c4u); g->ebp = rd32(sp0 - 0x10c8u); g->ebx = rd32(sp0 - 0x10c4u); g->edi = rd32(sp0 - 0x10d0u); g->esi = rd32(sp0 - 0x10ccu); goto E_102133e2;
    case 0x102133e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x10d0u); in_esi = rd32(sp0 - 0x10ccu); in_ebp = rd32(sp0 - 0x10c8u); in_ebx = rd32(sp0 - 0x10c4u); g->ebp = rd32(sp0 - 0x10c8u); g->ebx = rd32(sp0 - 0x10c4u); g->edi = rd32(sp0 - 0x10d0u); g->esi = rd32(sp0 - 0x10ccu); goto E_102133e7;
    case 0x102133edu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x10d0u); in_esi = rd32(sp0 - 0x10ccu); in_ebp = rd32(sp0 - 0x10c8u); in_ebx = rd32(sp0 - 0x10c4u); g->ebp = rd32(sp0 - 0x10c8u); g->ebx = rd32(sp0 - 0x10c4u); g->edi = rd32(sp0 - 0x10d0u); g->esi = rd32(sp0 - 0x10ccu); goto E_102133ed;
    case 0x1021340au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1021340a;
    case 0x10213446u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10213446;
    case 0x1021344au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1021344a;
    case 0x10213454u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10213454;
    case 0x1021346au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1021346a;
    case 0x10213491u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10213491;
    case 0x102134d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_102134d0;
    case 0x102134ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_102134dd;
    case 0x102134e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_102134e1;
    case 0x102134ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_102134eb;
    case 0x10213501u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10213501;
    case 0x10213524u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10213524;
    case 0x10213531u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10213531;
    case 0x10213535u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10213535;
    case 0x1021353fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1021353f;
    case 0x10213555u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10213555;
    case 0x10213578u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10213578;
    case 0x10213585u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10213585;
    case 0x10213589u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10213589;
    case 0x10213593u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10213593;
    case 0x102135a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_102135a9;
    case 0x102135ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_102135cc;
    case 0x102135d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_102135d9;
    case 0x102135ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_102135dd;
    case 0x102135e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_102135e7;
    case 0x102135fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_102135fd;
    case 0x10213620u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10213620;
    case 0x1021365du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1021365d;
    case 0x10213661u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10213661;
    case 0x1021366bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1021366b;
    case 0x1021367bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1021367b;
    case 0x1021369fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1021369f;
    case 0x102136a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102136a4;
    default: break;
    }
#endif

    COW_AT(102133c0)
    COW_AT(102133ca)
    wr32(sp0 - 0x10c4u, in_ebx);
    wr32(sp0 - 0x10c8u, in_ebp);
    wr32(sp0 - 0x10ccu, in_esi);
    wr32(sp0 - 0x10d0u, in_edi);
    eax = 0x10c0u;
    edx = self + 0x10u;
    edi = 0x1fu;
L_102133dc: ;
    COW_AT(102133dc)
    if (rd32(edx) != 0u)
    {
        ecx = rd32(edx);
    COW_AT(102133e2)
        g->edx = edx;
        g->esp = sp0 - 0x10d0u;
        t1 = cow_call_regs(g, COW_IMG(0x10212100u), eax, ecx, g->edx, 1, 0);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    COW_AT(102133e7)
    if (edi != 1u)
    {
        edx = edx + 4u;
        edi = edi - 1u;
        goto L_102133dc;
    }
    edx = edx + 4u;
    COW_AT(102133ed)
    wr8(self + 0x12cu, 1u);
    wr32(self + 0x124u, 0u);
    wr16(self + 0x17au, 0u);
    t3 = rd32(self + 0x10u);
    g->edx = edx;
    g->esp = sp0 - 0x10d0u;
    t4 = cow_call_regs(g, COW_IMG(0x10212100u), eax, t3, g->edx, 1, 0);
    t5 = g->edx;
    eax = t4;
    edx = t5;
    esi = t3;
    COW_AT(1021340a)
    wr32(sp0 - 0x10d4u, 0u);
    wr32(sp0 - 0x10bcu, COW_IMG(0x1033bcf0u));
    wr32(sp0 - 0x10b4u, 0u);
    wr32(sp0 - 0x10b0u, 0u);
    wr32(sp0 - 0x10acu, 0u);
    t6 = rd32(COW_IMG(0x10664530u));
    wr16(sp0 - 0x10a8u, 0u);
    wr16(sp0 - 0x10a6u, 0u);
    wr8(sp0 - 0x10a4u, 0u);
    wr8(sp0 - 0xfa4u, 0u);
    wr8(sp0 - 4u, 0u);
    g->eax = eax;
    g->ecx = t6;
    g->esp = sp0 - 0x10d0u;
    t7 = cow_stdcall(g, COW_IMG(0x10216a50u), 1, 0u);
    t8 = g->ecx;
    eax = t7;
    ecx = t8;
    COW_AT(10213446)
    edx = sp0 - 0x10a4u;
L_1021344a: ;
    COW_AT(1021344a)
    t9 = rd8(eax);
    wr8(edx, (uint8_t)t9);
    if ((uint8_t)t9 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t9;
        edx = edx + 1u;
        goto L_1021344a;
    }
    edx = edx + 1u;
    COW_AT(10213454)
    wr32(sp0 - 0x10d4u, sp0 - 0x10bcu);
    t10 = rd32(self + 0x124u);
    wr32(sp0 - 0x10b8u, t10);
    g->eax = t10;
    g->esp = sp0 - 0x10d0u;
    t11 = cow_thiscall(g, COW_IMG(0x10212120u), esi, 1, sp0 - 0x10bcu);
    t12 = g->ecx;
    eax = t11;
    ecx = t12;
    COW_AT(1021346a)
    wr32(sp0 - 0x10d4u, 1u);
    wr8(esi + 0x28u, rd8(esi + 0x28u) | 1u);
    t13 = rd32(self + rd32(self + 0x124u) * 4u + 0x108u);
    wr32(sp0 - 0x10c0u, t13);
    g->eax = eax;
    g->esp = sp0 - 0x10d0u;
    t14 = cow_stdcall(g, COW_IMG(0x10216a50u), 1, 1u);
    eax = t14;
    edi = t13;
    COW_AT(10213491)
    t15 = rd32(edi + 0xcu) - 1u;
    t16 = rd32(edi + 8u);
    esi = eax;
    edi = t16;
    ecx = t15 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t17 = rd32(sp0 - 0x10c0u);
    ecx = t15 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    t18 = rd32(t17 + 8u);
    wr8(rd32(t17 + 0xcu) + t18 - 1u, 0u);
    t19 = rd32(self + 0x124u) + 1u;
    wr32(self + 0x124u, t19);
    t20 = rd32(self + t19 * 4u + 0x10u);
    g->edx = t18;
    g->esp = sp0 - 0x10d0u;
    t21 = cow_call_regs(g, COW_IMG(0x10212100u), t19, t20, g->edx, 1, 0);
    t22 = g->edx;
    eax = t21;
    edx = t22;
    esi = t20;
    COW_AT(102134d0)
    wr32(sp0 - 0x10d4u, 0xfu);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x10664530u));
    g->edx = edx;
    t23 = rd32(COW_IMG(0x10664530u));
    g->esp = sp0 - 0x10d0u;
    t24 = cow_stdcall(g, COW_IMG(0x10216a50u), 1, 0xfu);
    t25 = g->ecx;
    t26 = g->edx;
    eax = t24;
    ecx = t25;
    edx = t26;
    COW_AT(102134dd)
    edi = sp0 - 0x10a4u;
L_102134e1: ;
    COW_AT(102134e1)
    t27 = rd8(eax);
    wr8(edi, (uint8_t)t27);
    if ((uint8_t)t27 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t27;
        edi = edi + 1u;
        goto L_102134e1;
    }
    COW_AT(102134eb)
    wr32(sp0 - 0x10d4u, sp0 - 0x10bcu);
    t28 = rd32(self + 0x124u);
    wr32(sp0 - 0x10b8u, t28);
    g->edx = edx;
    g->esp = sp0 - 0x10d0u;
    cow_thiscall(g, COW_IMG(0x10212120u), esi, 1, sp0 - 0x10bcu);
    t29 = g->edx;
    edx = t29;
    COW_AT(10213501)
    t30 = rd8(esi + 0x28u);
    wr8(esi + 0x28u, (uint8_t)(t30 | 1u));
    t31 = rd32(self + 0x124u) + 1u;
    wr32(self + 0x124u, t31);
    t32 = rd32(self + t31 * 4u + 0x10u);
    g->edx = (edx & 0xffffff00u) | t30 | 1u;
    g->esp = sp0 - 0x10d0u;
    t33 = cow_call_regs(g, COW_IMG(0x10212100u), t31, t32, g->edx, 1, 0);
    t34 = g->edx;
    eax = t33;
    edx = t34;
    esi = t32;
    COW_AT(10213524)
    wr32(sp0 - 0x10d4u, 0xcu);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x10664530u));
    t35 = rd32(COW_IMG(0x10664530u));
    g->esp = sp0 - 0x10d0u;
    t36 = cow_stdcall(g, COW_IMG(0x10216a50u), 1, 0xcu);
    t37 = g->ecx;
    eax = t36;
    ecx = t37;
    COW_AT(10213531)
    edx = sp0 - 0x10a4u;
L_10213535: ;
    COW_AT(10213535)
    t38 = rd8(eax);
    wr8(edx, (uint8_t)t38);
    if ((uint8_t)t38 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t38;
        edx = edx + 1u;
        goto L_10213535;
    }
    COW_AT(1021353f)
    wr32(sp0 - 0x10d4u, sp0 - 0x10bcu);
    t39 = rd32(self + 0x124u);
    wr32(sp0 - 0x10b8u, t39);
    g->edx = t39;
    g->esp = sp0 - 0x10d0u;
    cow_thiscall(g, COW_IMG(0x10212120u), esi, 1, sp0 - 0x10bcu);
    t40 = g->edx;
    edx = t40;
    COW_AT(10213555)
    t41 = rd8(esi + 0x28u);
    wr8(esi + 0x28u, (uint8_t)(t41 | 1u));
    t42 = rd32(self + 0x124u) + 1u;
    wr32(self + 0x124u, t42);
    t43 = rd32(self + t42 * 4u + 0x10u);
    g->edx = (edx & 0xffffff00u) | t41 | 1u;
    g->esp = sp0 - 0x10d0u;
    t44 = cow_call_regs(g, COW_IMG(0x10212100u), t42, t43, g->edx, 1, 0);
    t45 = g->edx;
    eax = t44;
    edx = t45;
    esi = t43;
    COW_AT(10213578)
    wr32(sp0 - 0x10d4u, 2u);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x10664530u));
    t46 = rd32(COW_IMG(0x10664530u));
    g->esp = sp0 - 0x10d0u;
    t47 = cow_stdcall(g, COW_IMG(0x10216a50u), 1, 2u);
    t48 = g->ecx;
    eax = t47;
    ecx = t48;
    COW_AT(10213585)
    edx = sp0 - 0x10a4u;
L_10213589: ;
    COW_AT(10213589)
    t49 = rd8(eax);
    wr8(edx, (uint8_t)t49);
    if ((uint8_t)t49 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t49;
        edx = edx + 1u;
        goto L_10213589;
    }
    eax = eax + 1u;
    COW_AT(10213593)
    t50 = rd32(self + 0x124u);
    wr32(sp0 - 0x10b8u, t50);
    wr32(sp0 - 0x10d4u, sp0 - 0x10bcu);
    g->edx = sp0 - 0x10bcu;
    g->esp = sp0 - 0x10d0u;
    cow_thiscall(g, COW_IMG(0x10212120u), esi, 1, sp0 - 0x10bcu);
    t51 = g->edx;
    edx = t51;
    COW_AT(102135a9)
    t52 = rd8(esi + 0x28u);
    wr8(esi + 0x28u, (uint8_t)(t52 | 1u));
    t53 = rd32(self + 0x124u) + 1u;
    wr32(self + 0x124u, t53);
    t54 = rd32(self + t53 * 4u + 0x10u);
    g->edx = (edx & 0xffffff00u) | t52 | 1u;
    g->esp = sp0 - 0x10d0u;
    t55 = cow_call_regs(g, COW_IMG(0x10212100u), t53, t54, g->edx, 1, 0);
    t56 = g->edx;
    eax = t55;
    edx = t56;
    esi = t54;
    COW_AT(102135cc)
    wr32(sp0 - 0x10d4u, 3u);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x10664530u));
    t57 = rd32(COW_IMG(0x10664530u));
    g->esp = sp0 - 0x10d0u;
    t58 = cow_stdcall(g, COW_IMG(0x10216a50u), 1, 3u);
    t59 = g->ecx;
    eax = t58;
    ecx = t59;
    COW_AT(102135d9)
    edx = sp0 - 0x10a4u;
L_102135dd: ;
    COW_AT(102135dd)
    t60 = rd8(eax);
    wr8(edx, (uint8_t)t60);
    if ((uint8_t)t60 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t60;
        edx = edx + 1u;
        goto L_102135dd;
    }
    edx = edx + 1u;
    COW_AT(102135e7)
    wr32(sp0 - 0x10d4u, sp0 - 0x10bcu);
    t61 = rd32(self + 0x124u);
    wr32(sp0 - 0x10b8u, t61);
    g->edx = edx;
    g->esp = sp0 - 0x10d0u;
    cow_thiscall(g, COW_IMG(0x10212120u), esi, 1, sp0 - 0x10bcu);
    t62 = g->edx;
    edx = t62;
    COW_AT(102135fd)
    t63 = rd8(esi + 0x28u);
    wr8(esi + 0x28u, (uint8_t)(t63 | 1u));
    t64 = rd32(self + 0x124u) + 1u;
    wr32(self + 0x124u, t64);
    t65 = rd32(self + t64 * 4u + 0x10u);
    g->edx = (edx & 0xffffff00u) | t63 | 1u;
    g->esp = sp0 - 0x10d0u;
    t66 = cow_call_regs(g, COW_IMG(0x10212100u), t64, t65, g->edx, 1, 0);
    t67 = g->edx;
    eax = t66;
    edx = t67;
    esi = t65;
    COW_AT(10213620)
    wr32(sp0 - 0x10d4u, 4u);
    wr32(sp0 - 0x10bcu, COW_IMG(0x1033bcf0u));
    wr32(sp0 - 0x10b4u, 0u);
    wr32(sp0 - 0x10b0u, 0u);
    wr32(sp0 - 0x10acu, 0u);
    t68 = rd32(COW_IMG(0x10664530u));
    wr16(sp0 - 0x10a8u, 0u);
    wr16(sp0 - 0x10a6u, 0u);
    wr8(sp0 - 0x10a4u, 0u);
    wr8(sp0 - 0xfa4u, 0u);
    wr8(sp0 - 4u, 0u);
    g->eax = eax;
    g->ecx = t68;
    g->esp = sp0 - 0x10d0u;
    t69 = cow_stdcall(g, COW_IMG(0x10216a50u), 1, 4u);
    t70 = g->ecx;
    eax = t69;
    ecx = t70;
    COW_AT(1021365d)
    edi = sp0 - 0x10a4u;
L_10213661: ;
    COW_AT(10213661)
    t71 = rd8(eax);
    wr8(edi, (uint8_t)t71);
    if ((uint8_t)t71 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t71;
        edi = edi + 1u;
        goto L_10213661;
    }
    eax = eax + 1u;
    COW_AT(1021366b)
    wr32(sp0 - 0x10d4u, sp0 - 0x10bcu);
    wr32(sp0 - 0x10b8u, 0u);
    g->eax = eax;
    g->edx = sp0 - 0x10bcu;
    g->esp = sp0 - 0x10d0u;
    t72 = cow_thiscall(g, COW_IMG(0x10212120u), esi, 1, sp0 - 0x10bcu);
    t73 = g->edx;
    eax = t72;
    edx = t73;
    COW_AT(1021367b)
    t74 = rd8(esi + 0x28u);
    t75 = rd32(sp0 - 0x10d0u);
    wr8(esi + 0x28u, (uint8_t)(t74 | 1u));
    t76 = rd32(self + 0x124u) + 1u;
    t77 = rd32(sp0 - 0x10ccu);
    wr32(self + 0x124u, t76);
    if (rd32(COW_IMG(0x10664530u)) == 0u)
    {
        ebx = rd32(sp0 - 0x10c4u);
        ebp = rd32(sp0 - 0x10c8u);
        esi = t77;
        edi = t75;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10664530u));
        edx = (edx & 0xffffff00u) | t74 | 1u;
        ebx = rd32(sp0 - 0x10c4u);
        ebp = rd32(sp0 - 0x10c8u);
        esi = t77;
        edi = t75;
    COW_AT(1021369f)
        g->esp = sp0 - 0x10c0u;
        cow_thiscall(g, COW_IMG(0x102169c0u), ecx, 0);
    }
    COW_AT(102136a4)
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = ebp;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102133c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102133cau:
    {
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        self = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x10c0u;
        g->eax = 0x10c0u;
        (void)sp0;
        return 1;
    }
    case 0x102133dcu:
    {
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
        self = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10d0u);
        in_esi = rd32(sp0 - 0x10ccu);
        in_ebp = rd32(sp0 - 0x10c8u);
        in_ebx = rd32(sp0 - 0x10c4u);
        g->esp = sp0 - 0x10d0u;
        g->ebx = 0u;
        g->esi = self + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102133e2u:
    {
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
        self = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10d0u);
        in_esi = rd32(sp0 - 0x10ccu);
        in_ebp = rd32(sp0 - 0x10c8u);
        in_ebx = rd32(sp0 - 0x10c4u);
        g->esp = sp0 - 0x10d0u;
        g->ebx = 0u;
        g->esi = self + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102133e7u:
    {
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
        self = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10d0u);
        in_esi = rd32(sp0 - 0x10ccu);
        in_ebp = rd32(sp0 - 0x10c8u);
        in_ebx = rd32(sp0 - 0x10c4u);
        g->esp = sp0 - 0x10d0u;
        g->ebx = 0u;
        g->esi = self + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102133edu:
    {
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
        self = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10d0u);
        in_esi = rd32(sp0 - 0x10ccu);
        in_ebp = rd32(sp0 - 0x10c8u);
        in_ebx = rd32(sp0 - 0x10c4u);
        g->esp = sp0 - 0x10d0u;
        g->ebx = 0u;
        g->esi = self + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1021340au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10d0u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213446u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10d0u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021344au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10d0u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213454u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10d0u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021346au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10d0u;
        g->ebx = 0u;
        wr32(sp0 - 0x10d4u, sp0 - 0x10bcu);
        (void)sp0;
        return 1;
    }
    case 0x10213491u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10d0u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102134d0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10d0u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102134ddu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10d0u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102134e1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10d0u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102134ebu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10d0u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213501u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10d0u;
        g->ebx = 0u;
        wr32(sp0 - 0x10d4u, sp0 - 0x10bcu);
        (void)sp0;
        return 1;
    }
    case 0x10213524u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10d0u;
        g->ebx = 0u;
        wr32(sp0 - 0x10d4u, sp0 - 0x10bcu);
        (void)sp0;
        return 1;
    }
    case 0x10213531u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10d0u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213535u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10d0u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021353fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10d0u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213555u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10d0u;
        g->ebx = 0u;
        wr32(sp0 - 0x10d4u, sp0 - 0x10bcu);
        (void)sp0;
        return 1;
    }
    case 0x10213578u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10d0u;
        g->ebx = 0u;
        wr32(sp0 - 0x10d4u, sp0 - 0x10bcu);
        (void)sp0;
        return 1;
    }
    case 0x10213585u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10d0u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213589u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10d0u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213593u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10d0u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102135a9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10d0u;
        g->ebx = 0u;
        wr32(sp0 - 0x10d4u, sp0 - 0x10bcu);
        (void)sp0;
        return 1;
    }
    case 0x102135ccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10d0u;
        g->ebx = 0u;
        wr32(sp0 - 0x10d4u, sp0 - 0x10bcu);
        (void)sp0;
        return 1;
    }
    case 0x102135d9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10d0u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102135ddu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10d0u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102135e7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10d0u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102135fdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10d0u;
        g->ebx = 0u;
        wr32(sp0 - 0x10d4u, sp0 - 0x10bcu);
        (void)sp0;
        return 1;
    }
    case 0x10213620u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10d0u;
        g->ebx = 0u;
        wr32(sp0 - 0x10d4u, sp0 - 0x10bcu);
        (void)sp0;
        return 1;
    }
    case 0x1021365du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10d0u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213661u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10d0u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021366bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10d0u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021367bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10d0u;
        g->ebx = 0u;
        wr32(sp0 - 0x10d4u, sp0 - 0x10bcu);
        (void)sp0;
        return 1;
    }
    case 0x1021369fu:
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
        g->esp = sp0 - 0x10c0u;
        wr32(sp0 - 0x10d4u, sp0 - 0x10bcu);
        (void)sp0;
        return 1;
    }
    case 0x102136a4u:
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
        g->esp = sp0 - 0x10c0u;
        wr32(sp0 - 0x10d4u, sp0 - 0x10bcu);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102133c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102133c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
