/* f_0x101f27a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101f27a0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_20;
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
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 56u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101f27b3u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101f27b3;
    case 0x101f27c2u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101f27c2;
    case 0x101f27deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; self = g->edi; goto E_101f27de;
    case 0x101f280bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_101f280b;
    case 0x101f2812u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_101f2812;
    case 0x101f281au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_101f281a;
    case 0x101f2839u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_101f2839;
    case 0x101f2844u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_101f2844;
    case 0x101f2849u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_101f2849;
    case 0x101f284du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_101f284d;
    case 0x101f285bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_101f285b;
    case 0x101f288du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_101f288d;
    case 0x101f289cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_101f289c;
    case 0x101f28a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_101f28a0;
    case 0x101f28a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_101f28a5;
    case 0x101f28b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_101f28b9;
    case 0x101f28ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_101f28cc;
    case 0x101f28dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_101f28da;
    case 0x101f28efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_101f28ef;
    case 0x101f28f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_101f28f4;
    case 0x101f28fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_101f28fb;
    case 0x101f2909u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_101f2909;
    case 0x101f2913u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_101f2913;
    case 0x101f2920u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_101f2920;
    case 0x101f292eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_101f292e;
    case 0x101f2938u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_101f2938;
    case 0x101f2945u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_101f2945;
    case 0x101f2953u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_101f2953;
    case 0x101f295du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_101f295d;
    case 0x101f296au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_101f296a;
    case 0x101f2975u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_101f2975;
    case 0x101f29abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_101f29ab;
    case 0x101f29adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_101f29ad;
    case 0x101f29ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_101f29ce;
    case 0x101f29e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_101f29e0;
    case 0x101f29e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_101f29e4;
    case 0x101f29ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_101f29ec;
    case 0x101f29f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_101f29f2;
    case 0x101f2a07u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; goto E_101f2a07;
    case 0x101f2a0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_101f2a0c;
    case 0x101f2a42u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_101f2a42;
    case 0x101f2a83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_101f2a83;
    case 0x101f2a90u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_101f2a90;
    default: break;
    }
#endif

    COW_AT(101f27a0)
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    eax = self + 0x78u;
    ecx = 8u;
L_101f27b3: ;
    COW_AT(101f27b3)
    wr16(eax - 0x10u, 0xffffu);
    wr16(eax, 0u);
    if (ecx != 1u)
    {
        eax = eax + 2u;
        ecx = ecx - 1u;
        goto L_101f27b3;
    }
    eax = eax + 2u;
    COW_AT(101f27c2)
    g->esp = sp0 - 0x14u;
    cow_fastcall(g, COW_IMG(0x101f1230u), self, 0xffffffffu, 0);
    t1 = g->edx;
    t2 = rd32(sp0 + 4u);
    wr32(sp0 - 0x18u, t2);
    g->eax = rd32(rd32(self + 0x5cu));
    g->edx = t1;
    t3 = rd32(rd32(self + 0x5cu));
    t4 = cow_thiscall(g, rd32(t3 + 0x2cu), rd32(self + 0x5cu), 1, t2);
    t5 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        ebp = in_ebp;
    }
    else
    {
        eax = t4;
        edx = t5;
        ebx = t2;
    COW_AT(101f27de)
        wr32(sp0 - 0x18u, in_ebp);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t6 = cow_thiscall(g, COW_IMG(0x101f1120u), self, 0);
        t7 = g->ecx;
        t8 = g->edx;
        wr32(sp0 - 0x1cu, t6);
        t9 = cow_call_regs(g, COW_IMG(0x1013e730u), t6, g->ecx, g->edx, 1, 1, t6);
        t10 = rd8(rd32(COW_IMG(0x10578204u)) + 0x380u);
        t11 = rd32(COW_IMG(0x10578204u));
        wr32(sp0 + 4u, t10);
        if ((uint8_t)t9 != 0u)
        {
            eax = t9;
            ecx = t11;
            edx = t10;
            goto L_101f288d;
        }
        ecx = t11;
        edx = t10;
        esi = t6;
    COW_AT(101f280b)
        if (rd32(ecx + 8u) == 0u)
        {
            eax = rd32(ecx + 8u);
    COW_AT(101f2849)
            if (esi != 0u)
            {
    COW_AT(101f284d)
                wr32(sp0 - 0x1cu, 0u);
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x18u;
                t15 = cow_call_regs(g, COW_IMG(0x10087070u), eax, g->ecx, g->edx, 1, 1, 0u);
                t16 = g->ecx;
                t17 = g->edx;
                if ((uint8_t)t15 != 0u)
                {
                    eax = t15;
                    ecx = t16;
                    edx = t17;
                }
                else
                {
                    eax = t15;
                    edx = t17;
    COW_AT(101f285b)
                    wr32(sp0 - 0x1cu, 0u);
                    wr32(sp0 - 0x20u, 0u);
                    wr32(sp0 - 0x24u, esi + 0x10u);
                    wr32(sp0 - 0x28u, esi);
                    g->eax = eax;
                    g->edx = edx;
                    t18 = rd32(self + 0x5cu);
                    g->esp = sp0 - 0x24u;
                    t19 = cow_cdecl(g, COW_IMG(0x100eb4f0u), 1, esi);
                    t20 = g->edx;
                    wr32(sp0 - 0x28u, t19);
                    t21 = (t20 & 0xffffff00u) | rd8(esi + 2u);
                    wr32(sp0 - 0x2cu, t21);
                    t22 = (t19 & 0xffff0000u) | rd16(esi);
                    wr32(sp0 - 0x30u, t22);
                    g->eax = t22;
                    g->edx = rd32(t18);
                    t23 = rd32(t18);
                    t24 = cow_thiscall_cdecl(g, rd32(t23), t18, 3, t22, t21, t19);
                    t25 = g->edx;
                    wr32(sp0 - 0x34u, t24);
                    g->ebx = ebx;
                    g->edi = self;
                    g->edx = t25;
                    t26 = rd32(COW_IMG(0x10578204u));
                    g->esp = sp0 - 0x18u;
                    t27 = cow_call_regs(g, COW_IMG(0x1013e410u), t24, t26, g->edx, 0, 7, t24, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), 0u, 0u);
                    t28 = g->ecx;
                    t29 = g->edx;
                    eax = t27;
                    ecx = t28;
                    edx = t29;
                }
            }
        }
        else
        {
            eax = rd32(ecx + 8u);
    COW_AT(101f2812)
            wr32(sp0 - 0x1cu, 1u);
            wr32(sp0 - 0x20u, esi);
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t12 = cow_call_regs(g, COW_IMG(0x1013e2f0u), eax, ecx, g->edx, 0, 2, esi, 1u);
            t13 = g->ecx;
            t14 = g->edx;
            eax = t12;
            ecx = t13;
            edx = t14;
        }
    COW_AT(101f281a)
        t30 = rd32(self + 0x8cu);
        wr32(sp0 - 0x1cu, t30);
        g->edx = edx;
        t31 = rd8(self + 0x89u);
        g->esp = sp0 - 0x18u;
        t32 = cow_call_regs(g, COW_IMG(0x1013e730u), eax, g->ecx, g->edx, 1, 1, t30);
        t33 = g->edx;
        if ((uint8_t)t32 != 0u)
        {
            eax = t32;
            ecx = rd32(COW_IMG(0x10578208u));
            edx = t33;
            goto L_101f289c;
        }
        ecx = rd32(COW_IMG(0x10578208u));
        edx = t33;
        ebx = (ebx & 0xffffff00u) | t31;
        esi = t30;
    COW_AT(101f2839)
        if (rd32(ecx + 8u) == 0u)
        {
            eax = rd32(ecx + 8u);
            goto L_101f29ce;
        }
        eax = rd32(ecx + 8u);
    COW_AT(101f2844)
        wr32(sp0 - 0x1cu, 1u);
        wr32(sp0 - 0x20u, esi);
        loc_20 = esi;
L_101f28a0: ;
    COW_AT(101f28a0)
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t47 = cow_call_regs(g, COW_IMG(0x1013e2f0u), eax, ecx, g->edx, 0, 2, loc_20, 1u);
        t48 = g->edx;
        eax = t47;
        edx = t48;
L_101f28a5: ;
    COW_AT(101f28a5)
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t49 = cow_call_regs(g, COW_IMG(0x101262e0u), eax, rd32(COW_IMG(0x104e1d4cu)), g->edx, 1, 0);
        t50 = g->edx;
        if ((uint8_t)t49 == 0u)
        {
            ebp = rd32(sp0 - 0x18u);
        }
        else
        {
            edx = t50;
            ebp = rd32(sp0 - 0x18u);
    COW_AT(101f28b9)
            wr32(sp0 - 8u, 0u);
            wr32(sp0 - 4u, 0u);
            if (rd32(COW_IMG(0x104e1d4cu)) != 0u)
            {
                eax = rd32(COW_IMG(0x104e1d4cu));
    COW_AT(101f28cc)
                t51 = rd32(eax + 4u);
                wr32(sp0 - 8u, t51);
                t52 = rd32(eax + 8u);
                wr32(sp0 - 4u, t52);
                edx = t51;
            }
    COW_AT(101f28da)
            if (rd8(rd32(COW_IMG(0x10663740u)) + 0x90u) == 0u)
            {
                eax = rd32(COW_IMG(0x10663748u));
            }
            else
            {
    COW_AT(101f28ef)
                eax = rd32(COW_IMG(0x1066374cu));
            }
    COW_AT(101f28f4)
            if (rd32(eax + 8u) != 0u)
            {
                ecx = rd32(eax + 8u);
    COW_AT(101f28fb)
                wr32(sp0 - 0x18u, sp0 - 8u);
                g->eax = eax;
                g->edx = sp0 - 8u;
                g->esp = sp0 - 0x14u;
                t53 = cow_thiscall(g, COW_IMG(0x10118c10u), ecx, 1, sp0 - 8u);
                t54 = g->edx;
                if ((uint8_t)t53 == 0u)
                {
                    eax = t53;
                }
                else
                {
                    edx = t54;
    COW_AT(101f2909)
                    wr32(sp0 - 0x18u, 0u);
                    wr32(sp0 - 0x1cu, 8u);
                    g->eax = rd32(self);
                    t55 = rd32(self);
                    g->esp = sp0 - 0x14u;
                    t56 = cow_thiscall(g, rd32(t55 + 0x18u), self, 2, 8u, 0u);
                    eax = t56;
                }
            }
    COW_AT(101f2913)
            if (rd32(rd32(COW_IMG(0x10663468u)) + 8u) != 0u)
            {
                ecx = rd32(rd32(COW_IMG(0x10663468u)) + 8u);
    COW_AT(101f2920)
                wr32(sp0 - 0x18u, sp0 - 8u);
                g->eax = eax;
                g->edx = sp0 - 8u;
                g->esp = sp0 - 0x14u;
                t57 = cow_thiscall(g, COW_IMG(0x10118c10u), ecx, 1, sp0 - 8u);
                t58 = g->edx;
                if ((uint8_t)t57 == 0u)
                {
                    eax = t57;
                }
                else
                {
                    edx = t58;
    COW_AT(101f292e)
                    wr32(sp0 - 0x18u, 0u);
                    wr32(sp0 - 0x1cu, 4u);
                    g->eax = rd32(self);
                    t59 = rd32(self);
                    g->esp = sp0 - 0x14u;
                    t60 = cow_thiscall(g, rd32(t59 + 0x18u), self, 2, 4u, 0u);
                    eax = t60;
                }
            }
    COW_AT(101f2938)
            if (rd32(rd32(COW_IMG(0x105781a8u)) + 8u) != 0u)
            {
                ecx = rd32(rd32(COW_IMG(0x105781a8u)) + 8u);
    COW_AT(101f2945)
                wr32(sp0 - 0x18u, sp0 - 8u);
                g->eax = eax;
                g->edx = sp0 - 8u;
                g->esp = sp0 - 0x14u;
                t61 = cow_thiscall(g, COW_IMG(0x10118c10u), ecx, 1, sp0 - 8u);
                t62 = g->edx;
                if ((uint8_t)t61 != 0u)
                {
                    edx = t62;
    COW_AT(101f2953)
                    wr32(sp0 - 0x18u, 0u);
                    wr32(sp0 - 0x1cu, 8u);
                    g->esp = sp0 - 0x14u;
                    cow_thiscall(g, rd32(rd32(self) + 0x18u), self, 2, 8u, 0u);
                }
            }
        }
    }
    COW_AT(101f295d)
    if (rd32(COW_IMG(0x10578208u)) == 0u) goto L_101f2a42;
    eax = rd32(COW_IMG(0x10578208u));
    COW_AT(101f296a)
    if (rd32(eax + 8u) == 0u) goto L_101f2a42;
    COW_AT(101f2975)
    wr8(rd32(COW_IMG(0x10578204u)) + 0x382u, 1u);
    t63 = rd32(COW_IMG(0x10578208u));
    wr8(t63 + 0x382u, 1u);
    g->eax = eax;
    g->edx = t63;
    g->esp = sp0 - 0x14u;
    t64 = cow_thiscall(g, COW_IMG(0x1013cb60u), rd32(COW_IMG(0x10578204u)), 0);
    t65 = g->edx;
    t66 = cow_thiscall(g, COW_IMG(0x1013cb60u), rd32(COW_IMG(0x10578208u)), 0);
    if ((int32_t)t64 <= (int32_t)t66)
    {
        eax = t66;
    }
    else
    {
        esi = t64;
    COW_AT(101f29ab)
        eax = esi;
    }
    COW_AT(101f29ad)
    t67 = rd32(sp0 - 0xcu);
    t68 = rd32(sp0 - 0x10u);
    t69 = rd32(sp0 - 0x14u);
    wr8(rd32(COW_IMG(0x10578204u)) + 0x381u, (uint8_t)eax);
    t70 = rd32(COW_IMG(0x10578208u));
    wr8(t70 + 0x381u, (uint8_t)eax);
    g->ebx = t67;
    g->esi = t68;
    g->edi = t69;
    g->ebp = ebp;
    g->edx = t70;
    return eax;
L_101f288d: ;
    COW_AT(101f288d)
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t45 = cow_call_regs(g, COW_IMG(0x1013e2f0u), eax, ecx, g->edx, 0, 2, 0u, 1u);
    t46 = g->edx;
    eax = t45;
    ecx = rd32(COW_IMG(0x10578208u));
    edx = t46;
L_101f289c: ;
    COW_AT(101f289c)
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, 0u);
    loc_20 = 0u;
    goto L_101f28a0;
L_101f29ce: ;
    COW_AT(101f29ce)
    wr32(sp0 - 0x1cu, 0u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t34 = cow_call_regs(g, COW_IMG(0x10087070u), eax, g->ecx, g->edx, 1, 1, 0u);
    t35 = g->ecx;
    t36 = g->edx;
    if ((uint8_t)t34 != 0u)
    {
        eax = t34;
        edx = t36;
    }
    else
    {
        eax = t34;
        ecx = t35;
        edx = t36;
    COW_AT(101f29e0)
        if (esi != 0u) goto L_101f29f2;
    COW_AT(101f29e4)
        if ((uint8_t)ebx == 0u) goto L_101f28a5;
    COW_AT(101f29ec)
    COW_AT(101f2a07)
        eax = 0x12u;
        ebx = 0u;
        ebp = 0u;
L_101f2a0c: ;
    COW_AT(101f2a0c)
        wr32(sp0 - 0x1cu, rd32(COW_IMG(0x10663740u)));
        wr32(sp0 - 0x20u, rd32(COW_IMG(0x105781a8u)));
        wr32(sp0 - 0x24u, esi + 0x10u);
        wr32(sp0 - 0x28u, eax);
        wr32(sp0 - 0x2cu, ebx);
        wr32(sp0 - 0x30u, ebp);
        wr32(sp0 - 0x34u, 5u);
        g->ebx = ebx;
        g->edi = self;
        g->edx = rd32(COW_IMG(0x105781a8u));
        t40 = rd32(COW_IMG(0x10578208u));
        t41 = rd32(COW_IMG(0x105781a8u));
        g->esp = sp0 - 0x18u;
        cow_call_regs(g, COW_IMG(0x1013e410u), eax, t40, g->edx, 0, 7, 5u, ebp, ebx, eax, esi + 0x10u, t41, rd32(COW_IMG(0x10663740u)));
        t42 = g->ecx;
        t43 = g->edx;
        t44 = rd32(COW_IMG(0x10578208u));
        wr8(t44 + 0x380u, rd8(sp0 + 4u));
        eax = t44;
        edx = t43;
    }
    goto L_101f28a5;
L_101f29f2: ;
    COW_AT(101f29f2)
    wr32(sp0 - 0x1cu, esi);
    g->eax = eax;
    t37 = rd8(esi + 2u);
    t38 = rd16(esi);
    g->esp = sp0 - 0x18u;
    t39 = cow_cdecl(g, COW_IMG(0x100eb4f0u), 1, esi);
    eax = t39;
    ebx = t37;
    ebp = t38;
    goto L_101f2a0c;
L_101f2a42: ;
    COW_AT(101f2a42)
    wr8(rd32(COW_IMG(0x10578204u)) + 0x382u, 0u);
    wr8(rd32(COW_IMG(0x10578208u)) + 0x382u, 0u);
    t71 = rd32(COW_IMG(0x10578204u));
    wr8(t71 + 0x381u, 0u);
    t72 = rd32(COW_IMG(0x10578208u));
    wr8(t72 + 0x381u, 0u);
    g->eax = t72;
    g->edx = t71;
    g->esp = sp0 - 0x14u;
    t73 = cow_thiscall(g, COW_IMG(0x1013cb80u), rd32(COW_IMG(0x10578204u)), 0);
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
    COW_AT(101f2a83)
        wr8(rd32(COW_IMG(0x10578204u)) + 0x380u, 0u);
    }
    COW_AT(101f2a90)
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = ebp;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101f27a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101f27b3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->edx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x101f27c2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->edx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x101f27deu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101f280bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101f2812u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101f281au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101f2839u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101f2844u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101f2849u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101f284du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101f285bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101f288du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101f289cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101f28a0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x1cu, 1u);
        (void)sp0;
        return 1;
    }
    case 0x101f28a5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101f28b9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101f28ccu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x14u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f28dau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x14u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f28efu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x14u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f28f4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x14u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f28fbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x14u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f2909u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x14u;
        g->esi = 0u;
        wr32(sp0 - 0x18u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101f2913u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x14u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f2920u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x14u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f292eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x14u;
        g->esi = 0u;
        wr32(sp0 - 0x18u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101f2938u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x14u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f2945u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x14u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f2953u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x14u;
        g->esi = 0u;
        wr32(sp0 - 0x18u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101f295du:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101f296au:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101f2975u:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101f29abu:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101f29adu:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101f29ceu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101f29e0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101f29e4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101f29ecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101f29f2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101f2a07u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101f2a0cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101f2a42u:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101f2a83u:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101f2a90u:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101f27a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101f27a0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
