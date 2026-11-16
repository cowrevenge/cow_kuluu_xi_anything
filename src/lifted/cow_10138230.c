/* f_0x10138230 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10138230(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_404;
    uint32_t loc_408;
    uint32_t loc_410;
    uint32_t loc_414;
    uint32_t loc_418;
    uint32_t loc_41c;
    uint32_t sf;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 1092u);

    wr32(sp0 - 0x424u, in_ebp);
    wr32(sp0 - 0x428u, in_esi);
    t1 = rd32(self + 0x1cu);
    wr32(sp0 - 0x408u, t1);
    if (rd8(self + 0x60u) == 0u)
    {
        eax = (t1 & 0xffffff00u) | rd8(self + 0x60u);
        loc_408 = t1;
        goto L_10138268;
    }
    loc_408 = t1;
    if ((uint32_t)(int16_t)arg1 - 1u > 0x1au)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        goto L_10138268;
    }
    t2 = rd32(COW_IMG(0x1013868cu) + rd8(COW_IMG(0x10138694u) + (uint32_t)(int16_t)arg1 - 1u) * 4u);
    switch (t2 - RD)
    {
    case 0x10138268u: eax = (uint32_t)(int16_t)arg1 - 1u; goto L_10138268;
    case 0x10138680u: eax = (uint32_t)(int16_t)arg1 - 1u; edx = in_edx; ebx = in_ebx; edi = in_edi; goto L_10138680;
    default: rt_fatal(g, COW_IMG(0x10138261u), "switch");
    }
    return 0;
L_10138268: ;
    wr32(sp0 - 0x42cu, in_ebx);
    wr32(sp0 - 0x430u, in_edi);
    wr8(sp0 - 0x41eu, 0u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x430u;
    t3 = cow_thiscall(g, COW_IMG(0x10138000u), self, 0);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x434u, 0xffffffffu);
    wr32(sp0 - 0x438u, 4u);
    wr32(sp0 - 0x43cu, 0xafu);
    wr32(sp0 - 0x440u, 0x3eu);
    wr8(sp0 - 0x41du, (uint8_t)t3);
    g->ebx = (in_ebx & 0xffffff00u) | (uint8_t)t3;
    g->esp = sp0 - 0x424u;
    t6 = cow_call_regs(g, COW_IMG(0x10123a70u), t3, t4, g->edx, 1, 7, 0x3eu, 0xafu, 4u, 0xffffffffu, in_edi, in_ebx, in_esi);
    t7 = g->ecx;
    if ((uint8_t)t6 == 0u)
    {
        ecx = t7;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)t3;
        ecx = (ecx & 0xffffff00u) | rd8(sp0 - 0x41du);
    }
    else
    {
        ecx = t7;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)t3;
        wr8(sp0 - 0x41du, 0u);
        ecx = ecx & 0xffffff00u;
    }
    if ((uint32_t)(int16_t)arg1 - 1u > 0x1au) goto L_10138666;
    t8 = rd32(COW_IMG(0x101386b0u) + rd8(COW_IMG(0x101386dcu) + (uint32_t)(int16_t)arg1 - 1u) * 4u);
    switch (t8 - RD)
    {
    case 0x101382bbu: edx = rd8(COW_IMG(0x101386dcu) + (uint32_t)(int16_t)arg1 - 1u); goto L_101382bb;
    case 0x101382d0u: eax = (uint32_t)(int16_t)arg1 - 1u; edx = rd8(COW_IMG(0x101386dcu) + (uint32_t)(int16_t)arg1 - 1u); goto L_101382d0;
    case 0x101382f8u: edx = rd8(COW_IMG(0x101386dcu) + (uint32_t)(int16_t)arg1 - 1u); goto L_101382f8;
    case 0x1013830fu: eax = (uint32_t)(int16_t)arg1 - 1u; edx = rd8(COW_IMG(0x101386dcu) + (uint32_t)(int16_t)arg1 - 1u); goto L_1013830f;
    case 0x10138337u: edx = rd8(COW_IMG(0x101386dcu) + (uint32_t)(int16_t)arg1 - 1u); goto L_10138337;
    case 0x1013839bu: edx = rd8(COW_IMG(0x101386dcu) + (uint32_t)(int16_t)arg1 - 1u); goto L_1013839b;
    case 0x101383fau: edx = rd8(COW_IMG(0x101386dcu) + (uint32_t)(int16_t)arg1 - 1u); goto L_101383fa;
    case 0x1013843au: edx = rd8(COW_IMG(0x101386dcu) + (uint32_t)(int16_t)arg1 - 1u); goto L_1013843a;
    case 0x101384bau: edx = rd8(COW_IMG(0x101386dcu) + (uint32_t)(int16_t)arg1 - 1u); goto L_101384ba;
    case 0x10138508u: goto L_10138508;
    case 0x10138666u: goto L_10138666;
    default: rt_fatal(g, COW_IMG(0x101382b4u), "switch");
    }
    return 0;
L_101382bb: ;
    if ((uint8_t)ecx == 0u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        goto L_101382d0;
    }
    if ((int32_t)rd32(self + 0x1cu) <= 1)
    {
        eax = rd32(self + 0x1cu);
        goto L_101382d0;
    }
    eax = rd32(self + 0x1cu);
    wr32(self + 0x1cu, eax - 1u);
L_10138666: ;
    if (rd32(sp0 - 0x408u) != rd32(self + 0x1cu))
    {
        eax = rd32(self + 0x1cu);
        edx = rd32(sp0 - 0x408u);
        ebx = rd32(sp0 - 0x42cu);
        edi = rd32(sp0 - 0x430u);
        goto L_1013867b;
    }
    eax = rd32(self + 0x1cu);
    edx = rd32(sp0 - 0x408u);
    ebx = rd32(sp0 - 0x42cu);
    edi = rd32(sp0 - 0x430u);
    if (rd8(sp0 - 0x41eu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x41eu);
        goto L_10138680;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x41eu);
L_1013867b: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    t63 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    t64 = g->edx;
    eax = t63;
    edx = t64;
L_10138680: ;
    g->ebx = ebx;
    g->edi = edi;
    g->edx = edx;
    return eax;
L_101382d0: ;
    if (rd8(self + 0x25u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x25u);
        g->ebx = ebx;
        g->eax = eax;
        g->esp = sp0 - 0x430u;
        t61 = cow_thiscall(g, COW_IMG(0x101380e0u), self, 0);
        t62 = g->ecx;
        if ((uint8_t)t61 == 0u)
        {
            ecx = t62;
        }
        else
        {
            ecx = t62;
            wr8(self + 0x24u, 0u);
            wr8(sp0 - 0x41eu, 1u);
        }
    }
    goto L_10138666;
L_101382f8: ;
    if ((uint8_t)ecx == 0u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        goto L_1013830f;
    }
    if ((int32_t)rd32(self + 0x1cu) >= (int32_t)rd32(self + 0x58u))
    {
        eax = rd32(self + 0x1cu);
        ecx = rd32(self + 0x58u);
        goto L_1013830f;
    }
    eax = rd32(self + 0x1cu);
    ecx = rd32(self + 0x58u);
    wr32(self + 0x1cu, eax + 1u);
    goto L_10138666;
L_1013830f: ;
    if (rd8(self + 0x24u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x24u);
        g->ebx = ebx;
        g->eax = eax;
        g->esp = sp0 - 0x430u;
        t59 = cow_thiscall(g, COW_IMG(0x10138180u), self, 0);
        t60 = g->ecx;
        if ((uint8_t)t59 == 0u)
        {
            ecx = t60;
        }
        else
        {
            ecx = t60;
            wr8(self + 0x25u, 0u);
            wr8(sp0 - 0x41eu, 1u);
        }
    }
    goto L_10138666;
L_10138337: ;
    if (rd8(self + 0x25u) == 0u)
    {
        if ((int32_t)rd32(self + 0x58u) > 0)
        {
            eax = rd32(self + 0x58u);
            esi = 0u;
L_10138364: ;
            g->ebx = 1u;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x430u;
            t54 = cow_thiscall(g, COW_IMG(0x101380e0u), self, 0);
            t55 = g->ecx;
            t56 = g->edx;
            if ((uint8_t)t54 == 0u)
            {
                eax = t54;
                ecx = t55;
                goto L_10138384;
            }
            ecx = t55;
            edx = t56;
            t57 = rd32(self + 0x58u);
            wr8(self + 0x24u, 0u);
            wr8(sp0 - 0x41eu, 1u);
            if ((int32_t)(esi + 1u) < (int32_t)t57)
            {
                eax = t57;
                esi = esi + 1u;
                goto L_10138364;
            }
        }
    }
    else
    {
        if ((uint8_t)ecx != 0u)
        {
            wr32(self + 0x1cu, 1u);
        }
    }
    goto L_10138666;
L_10138384: ;
    t58 = rd8(sp0 - 0x41du);
    wr8(self + 0x25u, 1u);
    if ((uint8_t)t58 != 0u)
    {
        wr32(self + 0x1cu, 1u);
    }
    goto L_10138666;
L_1013839b: ;
    if (rd8(self + 0x24u) == 0u)
    {
        if ((int32_t)rd32(self + 0x58u) <= 0) goto L_10138666;
        eax = rd32(self + 0x58u);
        esi = 0u;
L_101383c2: ;
        g->ebx = ebx;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x430u;
        t49 = cow_thiscall(g, COW_IMG(0x10138180u), self, 0);
        t50 = g->ecx;
        t51 = g->edx;
        if ((uint8_t)t49 == 0u)
        {
            eax = t49;
            ecx = t50;
            goto L_101383e3;
        }
        ecx = t50;
        edx = t51;
        t52 = rd32(self + 0x58u);
        wr8(self + 0x25u, 0u);
        wr8(sp0 - 0x41eu, 1u);
        if ((int32_t)(esi + 1u) < (int32_t)t52)
        {
            eax = t52;
            esi = esi + 1u;
            goto L_101383c2;
        }
    }
    else
    {
        if ((uint8_t)ecx != 0u)
        {
            t48 = rd32(self + 0x58u);
            wr32(self + 0x1cu, t48);
        }
    }
    goto L_10138666;
L_101383e3: ;
    if (rd8(sp0 - 0x41du) != 0u)
    {
        t53 = rd32(self + 0x58u);
        wr32(self + 0x1cu, t53);
        ecx = t53;
    }
    goto L_10138666;
L_101383fa: ;
    wr32(sp0 - 0x434u, COW_IMG(0x1036f96cu));
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = edx;
    g->esp = sp0 - 0x430u;
    t40 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1036f96cu));
    t41 = g->edx;
    wr32(sp0 - 0x434u, COW_IMG(0x1036f958u));
    t42 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1036f958u));
    wr32(sp0 - 0x434u, 1u);
    wr32(sp0 - 0x438u, rd32(COW_IMG(0x1062193cu)));
    g->edx = rd32(COW_IMG(0x1062193cu));
    t43 = rd32(COW_IMG(0x1062193cu));
    t44 = cow_thiscall(g, COW_IMG(0x1015dbb0u), COW_IMG(0x10621838u), 2, t43, 1u);
    t45 = g->ecx;
    t46 = g->edx;
    wr32(sp0 - 0x434u, 0xfu);
    g->ecx = t45;
    g->esp = sp0 - 0x434u;
    cow_stdcall(g, COW_IMG(0x10123ea0u), 0);
    t47 = g->ecx;
    ecx = t47;
    goto L_10138666;
L_1013843a: ;
    if (rd32(rd32(self + 8u) + 0x88u) != 0u)
    {
        eax = rd32(self + 8u);
        esi = rd32(rd32(self + 8u) + 0x88u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x430u;
        t31 = cow_thiscall(g, COW_IMG(0x10138200u), self, 0);
        t32 = g->ecx;
        t33 = g->edx;
        if ((int32_t)(rd32(esi + 0x14u) - t31) <= 0)
        {
            ecx = t32;
            sf = (int32_t)(rd32(esi + 0x14u) - t31) < 0;
            esi = rd32(esi + 0x14u) - t31;
            if (sf)
            {
                if ((int32_t)((esi ^ (uint32_t)((int32_t)esi >> 0x1fu)) - (uint32_t)((int32_t)esi >> 0x1fu)) <= 0) goto L_10138666;
                eax = esi;
                edx = (uint32_t)((int32_t)esi >> 0x1fu);
                esi = (esi ^ (uint32_t)((int32_t)esi >> 0x1fu)) - (uint32_t)((int32_t)esi >> 0x1fu);
                edi = 0u;
L_1013849c: ;
                g->ebx = ebx;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x430u;
                t37 = cow_thiscall(g, COW_IMG(0x101380e0u), self, 0);
                t38 = g->ecx;
                t39 = g->edx;
                if ((uint8_t)t37 == 0u)
                {
                    ecx = t38;
                    goto L_10138666;
                }
                eax = t37;
                ecx = t38;
                edx = t39;
                wr8(sp0 - 0x41eu, 1u);
                if ((int32_t)(edi + 1u) < (int32_t)esi)
                {
                    edi = edi + 1u;
                    goto L_1013849c;
                }
            }
        }
        else
        {
            eax = t31;
            ecx = t32;
            edx = t33;
            esi = rd32(esi + 0x14u) - t31;
            if ((int32_t)esi <= 0) goto L_10138666;
            edi = 0u;
L_10138465: ;
            g->ebx = ebx;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x430u;
            t34 = cow_thiscall(g, COW_IMG(0x10138180u), self, 0);
            t35 = g->ecx;
            t36 = g->edx;
            if ((uint8_t)t34 == 0u)
            {
                ecx = t35;
                goto L_10138666;
            }
            eax = t34;
            ecx = t35;
            edx = t36;
            wr8(sp0 - 0x41eu, 1u);
            if ((int32_t)(edi + 1u) < (int32_t)esi)
            {
                edi = edi + 1u;
                goto L_10138465;
            }
        }
    }
    goto L_10138666;
L_101384ba: ;
    t23 = rd32(self + 0x54u);
    wr32(sp0 - 0x434u, t23);
    g->edx = edx;
    g->esp = sp0 - 0x430u;
    t24 = cow_call_regs(g, COW_IMG(0x10138910u), (uint32_t)(int16_t)arg1 - 1u, self, g->edx, 0, 1, t23);
    t25 = g->edx;
    if (t24 != 0xbu)
    {
        eax = t24;
        edx = t25;
    }
    else
    {
        edx = t25;
        eax = 0u;
    }
    wr32(sp0 - 0x434u, 0u);
    wr32(sp0 - 0x438u, 0u);
    wr32(self + 0x54u, eax);
    wr8(self + 0x60u, 1u);
    wr32(sp0 - 0x43cu, 0u);
    wr32(sp0 - 0x440u, eax);
    g->eax = eax;
    t26 = rd32(COW_IMG(0x10578158u));
    g->esp = sp0 - 0x430u;
    t27 = cow_fastcall(g, COW_IMG(0x101295d0u), t26, edx, 4, eax, 0u, 0u, 0u);
    t28 = g->ecx;
    t29 = g->edx;
    wr32(self + 0x64u, t27);
    if (t27 != 0u)
    {
        eax = t27;
        ecx = t28;
        edx = t29;
        ebx = (ebx & 0xffffff00u) | 1u;
    }
    else
    {
        eax = t27;
        ecx = t28;
        edx = t29;
        ebx = (ebx & 0xffffff00u) | 1u;
        wr8(self + 0x60u, (uint8_t)eax);
    }
    wr8(self + 0x24u, (uint8_t)ebx);
    wr8(self + 0x25u, 0u);
    wr32(self + 0x20u, 0u);
    g->esp = sp0 - 0x430u;
    cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t30 = g->ecx;
    ecx = t30;
    goto L_10138666;
L_10138508: ;
    if ((uint8_t)ebx != 0u)
    {
        if (rd32(self + 0x28u) != 0u)
        {
            edx = rd32(self + 0x28u);
            t10 = rd32(COW_IMG(0x105781e4u));
            esi = edx;
            edi = rd32(COW_IMG(0x105781e4u)) + 0x14u;
            ecx = 0xfu;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wr32(t10 + 0x50u, edx);
            t11 = rd32(COW_IMG(0x105781e4u));
            wr8(t11 + 0x54u, rd8(self + 0x2cu));
            t12 = rd32(COW_IMG(0x105781e4u));
            wr8(t12 + 0x55u, rd8(self + 0x2du));
            t13 = (t11 & 0xffff0000u) | rd16(self + 0x2eu);
            wr32(sp0 - 0x410u, t13);
            wr32(sp0 - 0x41cu, sp0 - 0x400u);
            wr32(sp0 - 0x418u, 0u);
            wr32(sp0 - 0x414u, 0u);
            if (rd16(self + 0x2eu) == 0xffffu)
            {
                edx = t12;
                loc_41c = sp0 - 0x400u;
                loc_418 = 0u;
            }
            else
            {
                loc_410 = t13;
                esi = 0u;
                edi = 0u;
                loc_41c = sp0 - 0x400u;
                loc_418 = 0u;
                loc_414 = 0u;
L_1013857c: ;
                wr32(sp0 - 0x434u, sp0 - 0x40cu);
                wr32(sp0 - 0x438u, sp0 - 0x410u);
                g->edx = sp0 - 0x40cu;
                g->esp = sp0 - 0x430u;
                t14 = cow_call_regs(g, COW_IMG(0x10129330u), sp0 - 0x410u, rd32(COW_IMG(0x10578158u)), g->edx, 0, 2, sp0 - 0x410u, sp0 - 0x40cu);
                t15 = g->edx;
                if (t14 == 0u)
                {
                    edx = t15;
                    goto L_1013862d;
                }
                edx = t15;
                ebx = t14;
                if ((int32_t)esi <= 0)
                {
                    eax = rd32(sp0 - 0x40cu);
                    goto L_101385ac;
                }
                eax = rd32(sp0 - 0x40cu);
                if (edi != rd32(eax + 8u)) goto L_1013862d;
L_101385ac: ;
                t16 = rd32(eax + 8u);
                wr32(sp0 - 0x404u, t16);
                if ((int16_t)(rd16(eax + 0x10u) - 1u) <= 0)
                {
                    ecx = 0u;
                    edx = 0u;
                    edi = (uint32_t)(int16_t)(rd16(eax + 0x10u) - 1u);
                    eax = (eax & 0xffff0000u) | (uint16_t)(rd16(eax + 0x10u) - 1u);
                    loc_404 = t16;
                    goto L_101385d1;
                }
                ecx = 0u;
                edx = 0u;
                edi = (uint32_t)(int16_t)(rd16(eax + 0x10u) - 1u);
                eax = (eax & 0xffff0000u) | (uint16_t)(rd16(eax + 0x10u) - 1u);
                loc_404 = t16;
L_101385c4: ;
                if ((int16_t)rd16(ebx + ecx * 2u) >= 0) goto L_101385d1;
                if ((int32_t)(ecx + 1u) < (int32_t)edi)
                {
                    ecx = ecx + 1u;
                    edx = edx + 1u;
                    goto L_101385c4;
                }
                ecx = ecx + 1u;
                edx = edx + 1u;
L_101385d1: ;
                if ((int32_t)esi > 0)
                {
                    edx = edx + 1u;
                }
                if ((int32_t)edx >= (int32_t)edi) goto L_10138618;
                esi = edx;
L_101385dc: ;
                if ((int16_t)rd16(ebx + esi * 2u) < 0)
                {
                    eax = (eax & 0xffff0000u) | rd16(ebx + esi * 2u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | rd16(ebx + esi * 2u);
                    if ((int16_t)eax < 8469) goto L_101385f1;
                    if ((int16_t)eax <= 8515) goto L_10138613;
L_101385f1: ;
                    wr32(sp0 - 0x434u, loc_41c);
                    wr32(sp0 - 0x438u, eax);
                    g->eax = eax;
                    g->esp = sp0 - 0x428u;
                    t17 = cow_thiscall_cdecl(g, COW_IMG(0x1011cb50u), ecx, 4, eax, loc_41c, rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu));
                    t18 = t17 + rd32(sp0 - 0x41cu);
                    wr32(sp0 - 0x41cu, t18);
                    t19 = t17 + rd32(sp0 - 0x418u);
                    wr32(sp0 - 0x418u, t19);
                    eax = t17;
                    ecx = t19;
                    edx = t18;
                    loc_41c = t18;
                    loc_418 = t19;
                }
L_10138613: ;
                if ((int32_t)(esi + 1u) < (int32_t)edi)
                {
                    esi = esi + 1u;
                    goto L_101385dc;
                }
L_10138618: ;
                t20 = rd32(sp0 - 0x414u) + 1u;
                wr32(sp0 - 0x414u, t20);
                if (rd16(sp0 - 0x410u) != 0xffffu)
                {
                    loc_414 = t20;
                    goto L_10138574;
                }
            }
L_1013862d: ;
            wr32(sp0 - 0x434u, 0u);
            wr8(loc_41c, 0u);
            wr32(sp0 - 0x438u, 1u);
            wr32(sp0 - 0x43cu, COW_IMG(0x1036f958u));
            t21 = rd32(COW_IMG(0x105781e4u));
            esi = sp0 - 0x400u;
            edi = rd32(COW_IMG(0x105781e4u)) + 0x56u;
            ecx = 0x100u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wr16(t21 + 0x456u, (uint16_t)loc_418);
            g->esp = sp0 - 0x430u;
            cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1036f958u), 1u, 0u);
            t22 = g->ecx;
            ecx = t22;
        }
        else
        {
            edx = rd32(self + 0x28u);
            g->esp = sp0 - 0x430u;
            cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
            t9 = g->ecx;
            ecx = t9;
        }
    }
    goto L_10138666;
L_10138574: ;
    esi = loc_414;
    edi = loc_404;
    goto L_1013857c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10138230(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10138230(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
