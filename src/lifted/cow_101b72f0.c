/* f_0x101b72f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101b72f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_4;
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
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    t1 = cow_call_regs(g, COW_IMG(0x101b6e90u), in_eax, self, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        ecx = t2;
        edx = t3;
        goto L_101b756b;
    }
    ecx = t2;
    edx = t3;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t4 = cow_thiscall(g, COW_IMG(0x101b6ec0u), ecx, 0);
    t5 = g->edx;
    if ((int32_t)rd32(sp0 + 8u) >= (int32_t)(rd32(self + 0x8aa0u) + 0xeu))
    {
        eax = rd32(self + 0x8aa0u) + 0xeu;
        edx = t5;
        esi = t4;
        loc_4 = t4;
        goto L_101b7347;
    }
    eax = rd32(self + 0x8aa0u) + 0xeu;
    return 0xffffffffu;
L_101b7347: ;
    t6 = rd32(esi + 0x14u);
    wr32(sp0 + 8u, t6);
    if ((uint8_t)t6 >= 7u)
    {
        ecx = t6;
        ebp = t6;
        eax = (eax & 0xffffff00u) | (uint8_t)((-((uint8_t)ecx < 0x13u) & 0xf4u) + 0x13u);
    }
    else
    {
        ecx = t6;
        ebp = t6;
        eax = (eax & 0xffffff00u) | (uint8_t)ecx;
    }
    if ((uint8_t)eax != 0u) goto L_101b74c7;
    if ((uint8_t)(ecx >> 8u) != 0u) goto L_101b74c7;
    if ((uint8_t)rd16(sp0 + 0xau) != 0u) goto L_101b74c7;
    eax = (eax & 0xffff0000u) | rd16(sp0 + 0xau);
    if ((uint8_t)(eax >> 8u) != 0u) goto L_101b74c7;
    g->eax = eax;
    g->edx = rd32(self);
    t7 = rd32(self);
    g->esp = sp0 - 0x28u;
    t8 = cow_thiscall(g, rd32(t7 + 0x14u), self, 0);
    t9 = g->edx;
    g->edx = t9;
    t10 = cow_thiscall(g, COW_IMG(0x101bc9b0u), esi, 0);
    t11 = g->edx;
    wr32(sp0 + 8u, t10);
    if ((int32_t)t8 >= 0)
    {
        edx = t11;
        ebx = t8;
        ebp = t10;
        loc_14 = t8;
        goto L_101b73af;
    }
    eax = t10;
    edx = t11;
    ebp = t10;
    loc_14 = 0u;
L_101b73df: ;
    ebx = loc_14;
L_101b73e3: ;
    if ((int32_t)ebx >= (int32_t)ebp)
    {
        ecx = esi;
        goto L_101b7474;
    }
    ecx = esi;
    t26 = rd32(sp0 + 4u);
    wr8(t26, 0x7fu);
    wr8(t26 + 1u, 0xfeu);
    wr8(t26 + 2u, 0x7fu);
    wr8(t26 + 3u, 0x66u);
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t27 = cow_thiscall(g, rd32(rd32(esi) + 0x10u), ecx, 0);
    esi = t27;
    edi = t26 + 4u;
    ecx = ebx >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t28 = rd32(sp0 + 8u);
    ecx = ebx & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr8(ebx + t26 + 4u, 0x7fu);
    wr8(ebx + t26 + 5u, 0xffu);
    t29 = rd32(loc_4);
    wr32(sp0 + 4u, t28 - loc_14);
    g->eax = t28 - loc_14;
    t30 = cow_thiscall(g, rd32(t29 + 0x10u), loc_4, 0);
    t31 = rd32(sp0 + 4u);
    esi = loc_14 + t30;
    edi = ebx + t26 + 6u;
    ecx = t31 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t31 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr8(ebx + t26 + t31 + 6u, 0x7fu);
    wr8(ebx + t26 + t31 + 7u, 0x64u);
    return ebx + t31 + 8u;
L_101b73af: ;
    g->eax = rd32(esi);
    g->edx = edx;
    t12 = rd32(esi);
    g->esp = sp0 - 0x28u;
    t13 = cow_thiscall(g, rd32(t12 + 0x10u), esi, 0);
    t14 = g->ecx;
    t15 = g->edx;
    t16 = (t14 & 0xffffff00u) | rd8(t13);
    g->edx = t15;
    t17 = cow_cdecl(g, COW_IMG(0x1018fa80u), 2, t16, 0u);
    t18 = g->edx;
    if ((int32_t)ebx >= (int32_t)t17)
    {
        eax = t17;
        edx = t18;
        goto L_101b73e3;
    }
    eax = t17;
    g->eax = eax;
    g->edx = rd32(esi);
    t19 = rd32(esi);
    g->esp = sp0 - 0x28u;
    t20 = cow_thiscall(g, rd32(t19 + 0x10u), esi, 0);
    t21 = g->ecx;
    t22 = g->edx;
    t23 = (t20 & 0xffffff00u) | rd8(t20);
    g->edx = t22;
    t24 = cow_cdecl(g, COW_IMG(0x1018fa80u), 2, t23, 0u);
    t25 = g->edx;
    eax = t24;
    edx = t25;
    loc_14 = t24;
    goto L_101b73df;
L_101b7474: ;
    t32 = rd32(sp0 + 4u);
    wr8(t32, 0x7fu);
    wr8(t32 + 1u, 0xfeu);
    wr8(t32 + 2u, 0x7fu);
    wr8(t32 + 3u, 0x66u);
    g->eax = rd32(esi);
    t33 = rd32(esi);
    g->esp = sp0 - 0x28u;
    t34 = cow_thiscall(g, rd32(t33 + 0x10u), ecx, 0);
    esi = t34;
    edi = t32 + 4u;
    ecx = ebp >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = ebp & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr8(ebp + t32 + 4u, 0x7fu);
    wr8(ebp + t32 + 5u, 0xffu);
    wr8(ebp + t32 + 6u, 0x7fu);
    wr8(ebp + t32 + 7u, 0x64u);
    return ebp + 8u;
L_101b74c7: ;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t35 = cow_thiscall(g, COW_IMG(0x101ad0c0u), self + 0x7e30u, 0);
    t36 = g->edx;
    t37 = rd32(sp0 + 4u);
    eax = t35;
    ecx = t37;
    edx = t36;
    ebx = t37;
L_101b74d8: ;
    t38 = rd8(eax);
    wr8(ebx, (uint8_t)t38);
    if ((uint8_t)t38 != 0u)
    {
        eax = eax + 1u;
        edx = (edx & 0xffffff00u) | t38;
        ebx = ebx + 1u;
        goto L_101b74d8;
    }
    edx = (edx & 0xffffff00u) | t38;
    ebx = ebx + 1u;
    t39 = rd32(self + 0x8aa0u);
    wr8(ecx + t39, 0xfdu);
    wr32(ecx + t39 + 1u, 0x1010106u);
    wr8(ecx + t39 + 5u, 0xeu);
    wr8(ecx + t39 + 6u, 0x7fu);
    wr8(ecx + t39 + 7u, 0xffu);
    wr8(ecx + t39 + 8u, 0x7fu);
    wr8(ecx + t39 + 9u, 0x66u);
    wr8(ecx + t39 + 0xau, 0xfdu);
    wr32(ecx + t39 + 0xbu, ebp);
    wr8(ecx + t39 + 0xfu, 0xfdu);
    wr8(ecx + t39 + 0x10u, 0u);
    wr8(ecx + t39 + 0x10u, 0x7fu);
    wr8(ecx + t39 + 0x11u, 0x66u);
    wr8(ecx + t39 + 0x12u, 0x7fu);
    wr8(ecx + t39 + 0x13u, 0x66u);
    wr8(ecx + t39 + 0x14u, 0xfdu);
    t40 = rd32(esi + 0x14u);
    wr8(ecx + t39 + 0x15u, 0xfdu);
    wr32(ecx + t39 + 0x16u, t40);
    wr8(ecx + t39 + 0x1au, 0xfdu);
    wr8(ecx + t39 + 0x1bu, 0u);
    wr8(ecx + t39 + 0x1bu, 0x7fu);
    wr8(ecx + t39 + 0x1cu, 0x64u);
    wr8(ecx + t39 + 0x1du, 0x7fu);
    wr8(ecx + t39 + 0x1eu, 0xffu);
    return t39 + 0x1fu;
L_101b756b: ;
    g->eax = rd32(self);
    t41 = rd32(self);
    g->esp = sp0 - 0x28u;
    t42 = cow_thiscall(g, rd32(t41 + 0x68u), ecx, 0);
    g->edx = rd32(self);
    t43 = rd32(self);
    t44 = cow_thiscall(g, rd32(t43 + 0x64u), self, 0);
    t45 = g->edx;
    g->eax = rd32(self);
    t46 = rd32(self);
    t47 = cow_thiscall(g, rd32(t46 + 0x6cu), self, 0);
    t48 = cow_thiscall(g, rd32(rd32(self) + 0x14u), self, 0);
    if ((int32_t)rd32(sp0 + 8u) >= (int32_t)(t42 + 2u))
    {
        eax = t48;
        ebx = t42;
        loc_c = t44;
        loc_10 = t47;
        loc_14 = t48;
        goto L_101b75ad;
    }
    eax = t48;
    return 0xffffffffu;
L_101b75ad: ;
    if ((int32_t)ebx <= 0)
    {
        ebp = rd32(sp0 + 4u);
        goto L_101b783b;
    }
    ebp = rd32(sp0 + 4u);
    if (loc_c == 0u) goto L_101b783b;
    edx = loc_c;
    if (loc_10 == 0u) goto L_101b77ac;
    ecx = loc_10;
    if ((int32_t)eax < 0) goto L_101b76b8;
    wr8(ebp, 0x7fu);
    t49 = (edx & 0xffffff00u) | rd8(ecx);
    g->edx = t49;
    g->esp = sp0 - 0x28u;
    t50 = cow_stdcall(g, COW_IMG(0x101b7870u), 1, t49);
    t51 = g->edx;
    wr8(ebp + 1u, (uint8_t)t50);
    if (loc_14 != 0u)
    {
        eax = loc_14;
        edx = t51;
        edi = ebp;
        ebp = ecx;
        esi = 2u;
    }
    else
    {
        eax = loc_14;
        edx = t51;
        edi = ebp;
        ebp = ecx;
        wr8(edi + 2u, 0x7fu);
        wr8(edi + 3u, 0xffu);
        esi = 4u;
    }
    t52 = rd8(ebp);
    wr8(edi + esi, rd8(loc_c));
    wr8(sp0 + 4u, (uint8_t)t52);
    wr32(sp0 + 8u, 1u);
    if ((int32_t)ebx <= 1)
    {
        esi = esi + 1u;
    }
    else
    {
        ecx = loc_c;
        esi = esi + 1u;
        eax = loc_10 + 1u;
        edx = loc_10;
        ebp = 1u;
        loc_c = ecx - loc_10;
        ecx = ecx - loc_10;
        loc_4 = loc_10 + 1u;
L_101b763e: ;
        if (ebp == loc_14)
        {
            wr8(edi + esi, 0x7fu);
            wr8(edi + esi + 1u, 0xffu);
            esi = esi + 2u;
        }
        if (rd8(eax) == rd8(sp0 + 4u))
        {
            edx = (edx & 0xffffff00u) | rd8(sp0 + 4u);
        }
        else
        {
            edx = (edx & 0xffffff00u) | rd8(sp0 + 4u);
            wr8(edi + esi, 0x7fu);
            t53 = (eax & 0xffffff00u) | rd8(eax);
            g->ecx = self;
            g->edx = edx;
            g->esp = sp0 - 0x28u;
            t54 = cow_stdcall(g, COW_IMG(0x101b7870u), 1, t53);
            t55 = g->ecx;
            t56 = g->edx;
            t57 = rd32(sp0 + 8u);
            wr8(edi + esi + 1u, (uint8_t)t54);
            wr8(sp0 + 4u, rd8(loc_4));
            eax = loc_4;
            ecx = loc_c;
            edx = t56;
            ebp = t57;
            esi = esi + 2u;
        }
        t58 = rd8(eax + ecx);
        wr8(edi + esi, (uint8_t)t58);
        wr32(sp0 + 8u, ebp + 1u);
        if ((int32_t)(ebp + 1u) < (int32_t)ebx)
        {
            edx = (edx & 0xffffff00u) | t58;
            ebp = ebp + 1u;
            esi = esi + 1u;
            loc_4 = eax + 1u;
            eax = eax + 1u;
            goto L_101b763e;
        }
        esi = esi + 1u;
    }
    wr8(edi + esi, 0x7fu);
    wr8(edi + esi + 1u, 0xffu);
    wr8(edi + esi + 2u, 0x7fu);
    wr8(edi + esi + 3u, 0x64u);
    return esi + 4u;
L_101b76b8: ;
    if (ecx == 0u) goto L_101b77ac;
    t59 = rd8(ecx);
    t60 = rd32(sp0 - 0x18u);
    wr8(sp0 + 4u, (uint8_t)t59);
    if ((uint8_t)t59 == 1u)
    {
        eax = (eax & 0xffffff00u) | t59;
        loc_18 = t60 & 0xffffffu;
        goto L_101b76d3;
    }
    eax = (eax & 0xffffff00u) | t59;
    loc_18 = t60 & 0xffffffu;
    if ((uint8_t)eax != 3u)
    {
        esi = 0u;
        goto L_101b76e0;
    }
L_101b76d3: ;
    wr8(ebp, 0x7fu);
    wr8(ebp + 1u, 0xffu);
    esi = 2u;
L_101b76e0: ;
    wr8(ebp + esi, 0x7fu);
    t61 = (eax & 0xffffff00u) | rd8(ecx);
    g->ecx = self;
    g->esp = sp0 - 0x28u;
    t62 = cow_stdcall(g, COW_IMG(0x101b7870u), 1, t61);
    t63 = g->ecx;
    wr8(ebp + esi + 1u, (uint8_t)t62);
    wr8(ebp + esi + 2u, rd8(loc_c));
    if ((int32_t)ebx <= 1)
    {
        esi = esi + 3u;
    }
    else
    {
        eax = loc_c;
        esi = esi + 3u;
        ecx = loc_10;
        edi = loc_10 + 1u;
        loc_c = eax - loc_10;
        eax = eax - loc_10;
        loc_4 = ebx - 1u;
L_101b7720: ;
        t64 = eax + edi - 1u;
        g->ecx = ecx;
        g->edx = t64;
        g->esp = sp0 - 0x28u;
        t65 = cow_cdecl(g, COW_IMG(0x1011c900u), 1, t64);
        t66 = g->ecx;
        t67 = g->edx;
        if ((uint8_t)t65 != 0u)
        {
            eax = t65;
            ecx = t66;
            edx = t67;
            goto L_101b773e;
        }
        eax = t65;
        ecx = t66;
        edx = t67;
        if (loc_18 >> 0x18u != 1u)
        {
            eax = (eax & 0xffffff00u) | loc_18 >> 0x18u;
            loc_18 = (loc_18 & 0xffffffu) | 0x1000000u;
            goto L_101b7743;
        }
        eax = (eax & 0xffffff00u) | loc_18 >> 0x18u;
        loc_18 = (loc_18 & 0xffffffu) | 0x1000000u;
L_101b773e: ;
        loc_18 = loc_18 & 0xffffffu;
L_101b7743: ;
        if (rd8(edi) != rd8(sp0 + 4u))
        {
            eax = (eax & 0xffffff00u) | rd8(edi);
            ecx = (ecx & 0xffffff00u) | rd8(sp0 + 4u);
            if (loc_18 >> 0x18u == 0u)
            {
                wr8(sp0 + 4u, (uint8_t)eax);
                if ((uint8_t)eax == 1u) goto L_101b7761;
                if ((uint8_t)eax != 3u) goto L_101b776d;
L_101b7761: ;
                wr8(ebp + esi, 0x7fu);
                wr8(ebp + esi + 1u, 0xffu);
                esi = esi + 2u;
L_101b776d: ;
                wr8(ebp + esi, 0x7fu);
                t68 = (eax & 0xffffff00u) | rd8(edi);
                g->edx = edx;
                g->esp = sp0 - 0x28u;
                t69 = cow_stdcall(g, COW_IMG(0x101b7870u), 1, t68);
                t70 = g->edx;
                wr8(ebp + esi + 1u, (uint8_t)t69);
                edx = t70;
                esi = esi + 2u;
            }
        }
        wr8(ebp + esi, rd8(edi + loc_c));
        if (loc_4 != 1u)
        {
            ecx = loc_c;
            esi = esi + 1u;
            edi = edi + 1u;
            loc_4 = loc_4 - 1u;
            goto L_101b771c;
        }
        esi = esi + 1u;
    }
    wr8(ebp + esi, 0x7fu);
    wr8(ebp + esi + 1u, 0x64u);
    ebx = esi + 2u;
L_101b783d: ;
    t72 = rd32(sp0 + 8u);
    wr8(ebp + ebx, 0x7fu);
    wr8(ebp + ebx + 1u, 0xffu);
    if ((int32_t)(ebx + 2u) <= (int32_t)t72)
    {
        ebx = ebx + 2u;
        goto L_101b785e;
    }
    eax = t72;
    return 0xffffffffu;
L_101b771c: ;
    eax = loc_c;
    goto L_101b7720;
L_101b77ac: ;
    if ((int32_t)eax >= 0) goto L_101b77dc;
    wr8(ebp, 0x7fu);
    wr8(ebp + 1u, 0x66u);
    esi = edx;
    edi = ebp + 2u;
    ecx = ebx >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = ebx & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr8(ebp + ebx + 2u, 0x7fu);
    wr8(ebp + ebx + 3u, 0x64u);
    ebx = ebx + 4u;
    goto L_101b783d;
L_101b77dc: ;
    t71 = rd32(sp0 + 4u);
    wr8(t71, 0x7fu);
    wr8(t71 + 1u, 0x66u);
    esi = loc_c;
    edi = t71 + 2u;
    ecx = eax >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = eax & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr8(eax + t71 + 2u, 0x7fu);
    wr8(eax + t71 + 3u, 0xffu);
    esi = eax + loc_c;
    edi = eax + t71 + 4u;
    ecx = (ebx - eax) >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = ebx - eax & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr8(ebx + t71 + 4u, 0x7fu);
    wr8(ebx + t71 + 5u, 0x64u);
    return ebx + 6u;
L_101b783b: ;
    ebx = 0u;
    goto L_101b783d;
L_101b785e: ;
    return ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b72f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101b72f0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
