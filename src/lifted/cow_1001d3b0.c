/* f_0x1001d3b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1001d3b0(Guest* g)
{
    double d12;
    double d15;
    double d3;
    double d7;
    uint32_t eax;
    uint32_t ecx;
    uint32_t loc_80;
    uint32_t loc_84;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t13;
    uint32_t t14;
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
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 152u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1001d3c2u: ecx = g->ecx; self = g->esi; in_esi = rd32(sp0 - 0x84u); in_ebx = rd32(sp0 - 0x80u); g->ebx = rd32(sp0 - 0x80u); g->esi = rd32(sp0 - 0x84u); goto E_1001d3c2;
    case 0x1001d3d0u: eax = g->eax; ecx = g->ecx; self = g->esi; in_esi = rd32(sp0 - 0x84u); in_ebx = rd32(sp0 - 0x80u); g->ebx = rd32(sp0 - 0x80u); g->esi = rd32(sp0 - 0x84u); goto E_1001d3d0;
    case 0x1001d3e4u: eax = g->eax; ecx = g->ecx; self = g->esi; in_esi = rd32(sp0 - 0x84u); in_ebx = rd32(sp0 - 0x80u); g->ebx = rd32(sp0 - 0x80u); g->esi = rd32(sp0 - 0x84u); goto E_1001d3e4;
    case 0x1001d3edu: eax = g->eax; ecx = g->ecx; self = g->esi; in_esi = rd32(sp0 - 0x84u); in_ebx = rd32(sp0 - 0x80u); g->ebx = rd32(sp0 - 0x80u); g->esi = rd32(sp0 - 0x84u); goto E_1001d3ed;
    case 0x1001d6b6u: eax = g->eax; ecx = g->ecx; self = g->esi; goto E_1001d6b6;
    case 0x1001d6e9u: eax = g->eax; ecx = g->ecx; self = g->esi; goto E_1001d6e9;
    case 0x1001d6f6u: eax = g->eax; ecx = g->ecx; self = g->esi; goto E_1001d6f6;
    case 0x1001d6feu: eax = g->eax; ecx = g->ecx; self = g->esi; goto E_1001d6fe;
    case 0x1001d74fu: eax = g->eax; ecx = g->ecx; self = g->esi; goto E_1001d74f;
    case 0x1001d754u: eax = g->eax; ecx = g->ecx; self = g->esi; goto E_1001d754;
    case 0x1001d7fau: eax = g->eax; ecx = g->ecx; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); goto E_1001d7fa;
    default: break;
    }
#endif

    COW_AT(1001d3b0)
    wr32(sp0 - 0x80u, in_ebx);
    wr32(sp0 - 0x84u, in_esi);
    if (rd32(self + 8u) == 0u)
    {
        loc_80 = in_ebx;
        loc_84 = in_esi;
    }
    else
    {
    COW_AT(1001d3c2)
        if (rd8(COW_IMG(0x10456d48u)) != 0u)
        {
            eax = rd32(COW_IMG(0x10456d4cu));
            goto L_1001d3e4;
        }
        eax = rd32(COW_IMG(0x10456d4cu));
    COW_AT(1001d3d0)
        if ((eax & 0xff000000u) == 0x80000000u)
        {
            loc_80 = in_ebx;
            loc_84 = in_esi;
            goto L_1001d7fa;
        }
L_1001d3e4: ;
    COW_AT(1001d3e4)
        if (rd8(self + 4u) == 0u)
        {
            loc_80 = in_ebx;
            loc_84 = in_esi;
        }
        else
        {
    COW_AT(1001d3ed)
            wr32(sp0 - 0x70u, 0u);
            wr32(sp0 - 0x6cu, 0u);
            wr32(sp0 - 0x68u, 0u);
            wr32(sp0 - 0x64u, 0x3f800000u);
            wr32(sp0 - 0x60u, eax);
            wr32(sp0 - 0x5cu, 0u);
            wr32(sp0 - 0x58u, 0u);
            g->eax = eax;
            g->esp = sp0 - 0x84u;
            t1 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(COW_IMG(0x1045666cu)), 0);
            t2 = rd32(t1 + 8u);
            wr32(sp0 - 0x78u, t2);
            wr32(sp0 - 0x74u, 0u);
            wr32(sp0 - 0x50u, 0u);
            wr32(sp0 - 0x4cu, 0u);
            wr32(sp0 - 0x48u, 0x3f800000u);
            wr32(sp0 - 0x44u, rd32(COW_IMG(0x10456d4cu)));
            wr32(sp0 - 0x40u, 0x3f800000u);
            d3 = (double)(float)(double)(int64_t)cow_i64(t2, 0u);
            wrf32(sp0 - 0x54u, (float)d3);
            wr32(sp0 - 0x3cu, 0u);
            wr32(sp0 - 0x38u, 0u);
            g->eax = rd32(COW_IMG(0x10456d4cu));
            t4 = rd32(COW_IMG(0x10456d4cu));
            t5 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(COW_IMG(0x1045666cu)), 0);
            t6 = rd32(t5 + 0xcu);
            wr32(sp0 - 0x78u, t6);
            wr32(sp0 - 0x74u, 0u);
            wr32(sp0 - 0x30u, 0u);
            wr32(sp0 - 0x2cu, 0x3f800000u);
            wr32(sp0 - 0x28u, rd32(COW_IMG(0x10456d4cu)));
            wr32(sp0 - 0x24u, 0u);
            wr32(sp0 - 0x20u, 0x3f800000u);
            d7 = (double)(float)(double)(int64_t)cow_i64(t6, 0u);
            wrf32(sp0 - 0x34u, (float)d7);
            g->edx = rd32(COW_IMG(0x10456d4cu));
            t8 = rd32(COW_IMG(0x10456d4cu));
            t9 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(COW_IMG(0x1045666cu)), 0);
            t10 = g->edx;
            t11 = rd32(t9 + 8u);
            wr32(sp0 - 0x78u, t11);
            wr32(sp0 - 0x74u, 0u);
            d12 = (double)(float)(double)(int64_t)cow_i64(t11, 0u);
            wrf32(sp0 - 0x1cu, (float)d12);
            g->eax = t11;
            t13 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(COW_IMG(0x1045666cu)), 0);
            t14 = rd32(t13 + 0xcu);
            wr32(sp0 - 0x78u, t14);
            wr32(sp0 - 0x74u, 0u);
            wr32(sp0 - 0x14u, 0u);
            wr32(sp0 - 0x10u, 0x3f800000u);
            wr32(sp0 - 0xcu, rd32(COW_IMG(0x10456d4cu)));
            wr32(sp0 - 8u, 0x3f800000u);
            wr32(sp0 - 4u, 0x3f800000u);
            d15 = (double)(float)(double)(int64_t)cow_i64(t14, 0u);
            wrf32(sp0 - 0x18u, (float)d15);
            wr32(sp0 - 0x88u, 5u);
            wr32(sp0 - 0x8cu, 0x19u);
            t16 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x90u, t16);
            cow_thiscall(g, rd32(rd32(t16) + 0xc8u), rd32(t16), 3, t16, 0x19u, 5u);
            wr32(sp0 - 0x88u, 0u);
            wr32(sp0 - 0x8cu, 0x18u);
            t17 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x90u, t17);
            cow_thiscall(g, rd32(rd32(t17) + 0xc8u), rd32(t17), 3, t17, 0x18u, 0u);
            wr32(sp0 - 0x88u, 0u);
            wr32(sp0 - 0x8cu, 0xeu);
            t18 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x90u, t18);
            cow_thiscall(g, rd32(rd32(t18) + 0xc8u), rd32(t18), 3, t18, 0xeu, 0u);
            wr32(sp0 - 0x88u, 0u);
            wr32(sp0 - 0x8cu, 7u);
            t19 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x90u, t19);
            cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t19, 7u, 0u);
            wr32(sp0 - 0x88u, 1u);
            wr32(sp0 - 0x8cu, 0x1bu);
            t20 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x90u, t20);
            cow_thiscall(g, rd32(rd32(t20) + 0xc8u), rd32(t20), 3, t20, 0x1bu, 1u);
            wr32(sp0 - 0x88u, 5u);
            wr32(sp0 - 0x8cu, 0x13u);
            t21 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x90u, t21);
            cow_thiscall(g, rd32(rd32(t21) + 0xc8u), rd32(t21), 3, t21, 0x13u, 5u);
            wr32(sp0 - 0x88u, 6u);
            wr32(sp0 - 0x8cu, 0x14u);
            t22 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x90u, t22);
            cow_thiscall(g, rd32(rd32(t22) + 0xc8u), rd32(t22), 3, t22, 0x14u, 6u);
            wr32(sp0 - 0x88u, 5u);
            wr32(sp0 - 0x8cu, 1u);
            wr32(sp0 - 0x90u, 0u);
            t23 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x94u, t23);
            cow_thiscall(g, rd32(rd32(t23) + 0xfcu), rd32(t23), 4, t23, 0u, 1u, 5u);
            wr32(sp0 - 0x88u, 0u);
            wr32(sp0 - 0x8cu, 2u);
            wr32(sp0 - 0x90u, 0u);
            t24 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x94u, t24);
            cow_thiscall(g, rd32(rd32(t24) + 0xfcu), rd32(t24), 4, t24, 0u, 2u, 0u);
            wr32(sp0 - 0x88u, 2u);
            wr32(sp0 - 0x8cu, 3u);
            wr32(sp0 - 0x90u, 0u);
            t25 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x94u, t25);
            cow_thiscall(g, rd32(rd32(t25) + 0xfcu), rd32(t25), 4, t25, 0u, 3u, 2u);
            wr32(sp0 - 0x88u, 5u);
            wr32(sp0 - 0x8cu, 4u);
            wr32(sp0 - 0x90u, 0u);
            t26 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x94u, t26);
            cow_thiscall(g, rd32(rd32(t26) + 0xfcu), rd32(t26), 4, t26, 0u, 4u, 5u);
            wr32(sp0 - 0x88u, 0u);
            wr32(sp0 - 0x8cu, 5u);
            wr32(sp0 - 0x90u, 0u);
            t27 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x94u, t27);
            cow_thiscall(g, rd32(rd32(t27) + 0xfcu), rd32(t27), 4, t27, 0u, 5u, 0u);
            wr32(sp0 - 0x88u, 2u);
            wr32(sp0 - 0x8cu, 6u);
            wr32(sp0 - 0x90u, 0u);
            t28 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x94u, t28);
            cow_thiscall(g, rd32(rd32(t28) + 0xfcu), rd32(t28), 4, t28, 0u, 6u, 2u);
            wr32(sp0 - 0x88u, 1u);
            wr32(sp0 - 0x8cu, 4u);
            wr32(sp0 - 0x90u, 1u);
            t29 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x94u, t29);
            cow_thiscall(g, rd32(rd32(t29) + 0xfcu), rd32(t29), 4, t29, 1u, 4u, 1u);
            wr32(sp0 - 0x88u, 1u);
            wr32(sp0 - 0x8cu, 1u);
            wr32(sp0 - 0x90u, 1u);
            t30 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x94u, t30);
            cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xfcu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t30, 1u, 1u, 1u);
            wr32(sp0 - 0x88u, 0x144u);
            t31 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x8cu, t31);
            g->edx = rd32(COW_IMG(0x1045666cu));
            t32 = rd32(COW_IMG(0x1045666cu));
            cow_thiscall(g, rd32(rd32(t31) + 0x130u), rd32(t31), 2, t31, 0x144u);
            t33 = g->edx;
            t34 = rd32(COW_IMG(0x1045666cu));
            t35 = rd8(rd32(COW_IMG(0x1045666cu)) + 0x828u);
            wr8(t34 + 0x828u, 0u);
            t36 = rd32(COW_IMG(0x104566e8u));
            wr8(sp0 - 0x79u, (uint8_t)t35);
            g->eax = t34;
            t37 = cow_thiscall(g, COW_IMG(0x1000d660u), t36, 0);
            if ((uint8_t)t37 == 0u) goto L_1001d74f;
    COW_AT(1001d6b6)
            t38 = rd32(self + 8u);
            wr32(sp0 - 0x88u, t38);
            wr32(sp0 - 0x8cu, 0u);
            t39 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x90u, t39);
            g->edx = t38;
            g->esp = sp0 - 0x84u;
            cow_thiscall(g, rd32(rd32(t39) + 0xf4u), rd32(t39), 3, t39, 0u, t38);
            t40 = g->edx;
            wr32(sp0 - 0x88u, 0x1cu);
            wr32(sp0 - 0x8cu, sp0 - 0x70u);
            wr32(sp0 - 0x90u, 2u);
            wr32(sp0 - 0x94u, 5u);
            g->ebx = 0u;
            cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 5u, 2u, sp0 - 0x70u, 0x1cu);
            if (rd32(self + 0xcu) == 0u) goto L_1001d74f;
            ecx = rd32(self + 0xcu);
    COW_AT(1001d6e9)
            if (rd32(rd32(COW_IMG(0x1045666cu)) + 0x198u) == 0u)
            {
                eax = rd32(COW_IMG(0x1045666cu));
                goto L_1001d754;
            }
            eax = rd32(COW_IMG(0x1045666cu));
    COW_AT(1001d6f6)
            if (rd32(eax + 0x1a8u) == 0u) goto L_1001d754;
    COW_AT(1001d6fe)
            wr32(sp0 - 0x88u, ecx);
            wr32(sp0 - 0x8cu, 0u);
            t41 = rd32(eax + 0xcu);
            wr32(sp0 - 0x90u, t41);
            g->esp = sp0 - 0x84u;
            cow_thiscall(g, rd32(rd32(t41) + 0xf4u), ecx, 3, t41, 0u, ecx);
            t42 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x1a8u);
            wr32(sp0 - 0x88u, t42);
            t43 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x1a0u);
            wr32(sp0 - 0x8cu, t43);
            t44 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x198u);
            wr32(sp0 - 0x90u, t44);
            g->ebx = 0u;
            g->eax = t44;
            g->edx = t43;
            t45 = cow_thiscall(g, COW_IMG(0x10009e20u), rd32(COW_IMG(0x1045666cu)), 3, t44, t43, t42);
            t46 = g->edx;
            wr32(sp0 - 0x88u, 0x1cu);
            wr32(sp0 - 0x8cu, sp0 - 0x70u);
            wr32(sp0 - 0x90u, 2u);
            wr32(sp0 - 0x94u, 5u);
            g->ebx = 0u;
            g->edx = t46;
            t47 = cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 5u, 2u, sp0 - 0x70u, 0x1cu);
            t48 = g->edx;
            wr32(sp0 - 0x88u, 0u);
            wr32(sp0 - 0x8cu, 0u);
            cow_fastcall(g, COW_IMG(0x1000a1d0u), rd32(COW_IMG(0x1045666cu)), t48, 2, 0u, 0u);
L_1001d74f: ;
    COW_AT(1001d74f)
            eax = rd32(COW_IMG(0x1045666cu));
L_1001d754: ;
    COW_AT(1001d754)
            t49 = rd32(self + 8u);
            wr32(sp0 - 0x88u, t49);
            wr32(sp0 - 0x8cu, 0u);
            t50 = rd32(eax + 0xcu);
            wr32(sp0 - 0x90u, t50);
            g->eax = t50;
            g->esp = sp0 - 0x84u;
            t51 = cow_thiscall(g, rd32(rd32(rd32(eax + 0xcu)) + 0xf4u), t49, 3, t50, 0u, t49);
            wr32(sp0 - 0x88u, 0x1cu);
            wr32(sp0 - 0x8cu, sp0 - 0x70u);
            wr32(sp0 - 0x90u, 2u);
            wr32(sp0 - 0x94u, 5u);
            g->ebx = 0u;
            t52 = rd32(COW_IMG(0x1045666cu));
            cow_thiscall(g, COW_IMG(0x1000cd00u), t52, 4, 5u, 2u, sp0 - 0x70u, 0x1cu);
            t53 = g->ecx;
            wr32(sp0 - 0x88u, 0u);
            wr32(sp0 - 0x8cu, 0x1bu);
            wr8(rd32(COW_IMG(0x1045666cu)) + 0x828u, rd8(sp0 - 0x79u));
            t54 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x90u, t54);
            cow_thiscall(g, rd32(rd32(t54) + 0xc8u), rd32(t54), 3, t54, 0x1bu, 0u);
            wr32(sp0 - 0x88u, 0x60u);
            wr32(sp0 - 0x8cu, 0x18u);
            t55 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x90u, t55);
            cow_thiscall(g, rd32(rd32(t55) + 0xc8u), rd32(t55), 3, t55, 0x18u, 0x60u);
            wr32(sp0 - 0x88u, 1u);
            wr32(sp0 - 0x8cu, 0xeu);
            t56 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x90u, t56);
            cow_thiscall(g, rd32(rd32(t56) + 0xc8u), rd32(t56), 3, t56, 0xeu, 1u);
            wr32(sp0 - 0x88u, 1u);
            wr32(sp0 - 0x8cu, 7u);
            t57 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x90u, t57);
            cow_thiscall(g, rd32(rd32(t57) + 0xc8u), rd32(t57), 3, t57, 7u, 1u);
            wr32(sp0 - 0x88u, 8u);
            wr32(sp0 - 0x8cu, 0x19u);
            t58 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x90u, t58);
            cow_thiscall(g, rd32(rd32(t58) + 0xc8u), rd32(t58), 3, t58, 0x19u, 8u);
            wr8(self + 4u, 0u);
            loc_80 = rd32(sp0 - 0x80u);
            loc_84 = rd32(sp0 - 0x84u);
        }
    }
L_1001d7fa: ;
    COW_AT(1001d7fa)
    g->ebx = loc_80;
    g->esi = loc_84;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1001d3b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1001d3c2u:
    {
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        ecx = g->ecx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x84u);
        in_ebx = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001d3d0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x84u);
        in_ebx = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001d3e4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x84u);
        in_ebx = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001d3edu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x84u);
        in_ebx = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001d6b6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001d6e9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        wr32(sp0 - 0x8cu, sp0 - 0x70u);
        (void)sp0;
        return 1;
    }
    case 0x1001d6f6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        wr32(sp0 - 0x8cu, sp0 - 0x70u);
        (void)sp0;
        return 1;
    }
    case 0x1001d6feu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        wr32(sp0 - 0x8cu, sp0 - 0x70u);
        (void)sp0;
        return 1;
    }
    case 0x1001d74fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001d754u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1001d7fau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t loc_80;
        uint32_t loc_84;
        eax = g->eax;
        ecx = g->ecx;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1001d3b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1001d3b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
