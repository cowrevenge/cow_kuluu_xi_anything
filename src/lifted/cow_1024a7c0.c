/* f_0x1024a7c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_1024a7c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    int64_t q37;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, COW_IMG(0x106690ccu));
    t1 = g->ecx;
    t2 = g->edx;
    t3 = rd32(COW_IMG(0x106690b8u));
    wr32(t3 + 0x434u, 0u);
    if ((rd8(arg1 + 0x29u) & 0x20u) == 0u)
    {
        eax = (t3 & 0xffffff00u) | rd8(arg1 + 0x29u);
        ecx = t1;
        edx = t2;
        goto L_1024a811;
    }
    t4 = rd32(arg1 + 0x10u);
    g->ecx = arg2;
    g->edx = arg4;
    g->esp = sp0 - 8u;
    t5 = cow_cdecl(g, COW_IMG(0x1024a1b0u), 5, t4, arg4, arg2, in_edi, in_esi);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 == 0u)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        goto L_1024a811;
    }
    eax = t5;
    ecx = t6;
    edx = t7;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, COW_IMG(0x106690ccu));
    return;
L_1024a811: ;
    if ((int8_t)rd8(arg1 + 0x29u) >= 0)
    {
        eax = (eax & 0xffffff00u) | rd8(arg1 + 0x29u);
        if ((eax & 0x20u) == 0u)
        {
            if ((eax & 8u) == 0u)
            {
                edx = arg4;
                esi = rd32(COW_IMG(0x103889f0u) + arg4 * 4u);
            }
            else
            {
                esi = 0x4e20u;
            }
            ebp = (uint8_t)eax;
            eax = (uint8_t)eax;
        }
        else
        {
            ebp = 0u;
            esi = 0x4e20u;
        }
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(arg1 + 0x29u);
        ecx = rd8(arg1 + 0x28u);
        ebp = 0u;
        esi = rd32(COW_IMG(0x103889f0u) + rd8(arg1 + 0x28u) * 4u);
    }
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, COW_IMG(0x106690ccu));
    t8 = g->ecx;
    t9 = g->edx;
    g->ecx = t8;
    g->edx = t9;
    g->esp = sp0 - 4u;
    t10 = cow_cdecl(g, COW_IMG(0x1024a370u), 6, 1u, esi, ebp, in_edi, in_esi, in_ebp);
    t11 = g->ecx;
    t12 = g->edx;
    if (t10 == 0u) goto L_1024ab68;
    eax = t10;
    ecx = t11;
    edx = t12;
    ebp = t10;
    if (rd32(ebp + 4u) != 0u)
    {
        if (rd32(ebp + 0x3cu) != 0u)
        {
            eax = rd32(ebp + 0x3cu);
            t13 = rd32(COW_IMG(0x103291c8u));
            wr32(ebp + 0x48u, 0u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t14 = cow_thiscall(g, t13, ecx, 2, eax, 0u);
            t15 = g->ecx;
            t16 = g->edx;
            if (t14 == 0u)
            {
                eax = t14;
                edx = t16;
            }
            else
            {
                eax = t14;
                ecx = t15;
                edx = t16;
                esi = t13;
                ebx = rd32(COW_IMG(0x103290f8u));
L_1024a896: ;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                cow_thiscall(g, ebx, ecx, 1, 1u);
                t17 = g->ecx;
                t18 = g->edx;
                t19 = rd32(ebp + 0x3cu);
                g->eax = t19;
                g->edx = t18;
                t20 = cow_thiscall(g, esi, t17, 2, t19, 0u);
                t21 = g->ecx;
                t22 = g->edx;
                if (t20 != 0u)
                {
                    eax = t20;
                    ecx = t21;
                    edx = t22;
                    goto L_1024a896;
                }
                eax = t20;
                edx = t22;
            }
            t23 = rd32(ebp + 0x3cu);
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, rd32(COW_IMG(0x10329104u)), t23, 1, t23);
            t24 = g->ecx;
            wr32(ebp + 0x3cu, 0u);
            ecx = t24;
        }
        t25 = rd32(ebp + 4u);
        g->edx = rd32(t25);
        t26 = rd32(t25);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(t26 + 0x48u), ecx, 1, t25);
        t27 = g->ecx;
        t28 = g->edx;
        if (rd32(ebp + 4u) == 0u)
        {
            ecx = t27;
        }
        else
        {
            eax = rd32(ebp + 4u);
            edx = t28;
            t29 = rd32(eax);
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, rd32(t29 + 8u), t29, 1, eax);
            t30 = g->ecx;
            wr32(ebp + 4u, 0u);
            ecx = t30;
        }
        if (rd32(ebp) == 0u)
        {
            eax = rd32(ebp);
        }
        else
        {
            eax = rd32(ebp);
            g->eax = eax;
            g->esp = sp0 - 0x10u;
            t31 = cow_thiscall(g, rd32(rd32(eax) + 8u), ecx, 1, eax);
            wr32(ebp, 0u);
            eax = t31;
        }
    }
    wr32(ebp + 0xd4u, 0u);
    if ((int8_t)rd8(arg1 + 0x29u) >= 0)
    {
        eax = (eax & 0xffffff00u) | rd8(arg1 + 0x29u);
        if ((eax & 0x20u) == 0u)
        {
            if ((eax & 8u) == 0u)
            {
                t33 = rd32(COW_IMG(0x103889f0u) + arg4 * 4u);
                wr32(ebp + 0xccu, t33);
            }
            else
            {
                wr32(ebp + 0xccu, 0x4e20u);
            }
            t34 = rd8(arg1 + 0x29u);
            wr32(ebp + 0xd0u, t34);
        }
        else
        {
            wr32(ebp + 0xccu, 0x4e20u);
            wr32(ebp + 0xd0u, 0x40u);
        }
    }
    else
    {
        t32 = rd32(COW_IMG(0x103889f0u) + rd8(arg1 + 0x28u) * 4u);
        wr32(ebp + 0xd0u, 0u);
        wr32(ebp + 0xccu, t32);
    }
    if ((rd8(arg1 + 0x29u) & 0x20u) == 0u)
    {
        t40 = rd32(COW_IMG(0x103889f0u) + arg4 * 4u);
        wr32(ebp + 0x6cu, 0u);
        wr32(ebp + 0x70u, t40 << 0xcu);
        ecx = arg4;
        edx = t40 << 0xcu;
    }
    else
    {
        t35 = ((rd32(COW_IMG(0x103889f0u) + arg4 * 4u) - rd32(COW_IMG(0x103889f4u))) << 0xcu & 0xffff00ffu) | (uint8_t)((rd32(COW_IMG(0x103889f0u) + arg4 * 4u) - rd32(COW_IMG(0x103889f4u))) << 0xcu >> 8u | 8u) << 8u;
        wr32(ebp + 0x74u, t35);
        t36 = rd32(COW_IMG(0x103889f4u)) << 0xcu;
        wr32(ebp + 0x70u, t36);
        q37 = (int64_t)cow_muls(0x1b4e81b5u, t35);
        t38 = (uint32_t)((int32_t)cow_qhi(q37) >> 4u);
        wr32(ebp + 0x6cu, 0x96u);
        t39 = t38 + (t38 >> 0x1fu);
        wr32(ebp + 0x74u, t39);
        ecx = t35;
        edx = t39;
    }
    wr32(ebp + 0x78u, 0u);
    wr32(ebp + 0x80u, arg3 << 0xcu);
    wr32(ebp + 0x7cu, 0u);
    wr32(ebp + 0xc8u, 0u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t41 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x12u, in_edi, in_esi);
    t42 = g->ecx;
    t43 = g->edx;
    g->ecx = t42;
    g->edx = t43;
    g->esp = sp0 - 0xcu;
    t44 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x24u, 0x12u, in_edi);
    t45 = g->ecx;
    t46 = g->edx;
    if (t41 == 0u)
    {
        eax = t44;
        ecx = t45;
        edx = t46;
        ebx = t44;
    }
    else
    {
        eax = t44;
        ecx = t45;
        edx = t46;
        ebx = t44;
        esi = t41;
        if (ebx != 0u)
        {
            wr16(esi, 1u);
            wr16(esi + 2u, rd8(arg1 + 0x2au));
            wr16(esi + 0xeu, rd8(arg1 + 0x2bu));
            wr16(esi + 0xcu, (uint16_t)(uint32_t)((int32_t)(rd8(arg1 + 0x2bu) * rd8(arg1 + 0x2au) + ((uint32_t)((int32_t)(rd8(arg1 + 0x2bu) * rd8(arg1 + 0x2au)) >> 0x1fu) & 7u)) >> 3u));
            t47 = rd32(arg1 + 0x1cu) + rd32(arg1 + 0x20u) & 0x7fffffffu;
            t48 = rd16(esi + 0xcu);
            t49 = rd32(arg1 + 0x1cu);
            t50 = rd32(arg1 + 0x20u);
            wr32(esi + 4u, t47);
            t51 = t48 * (t49 + t50 & 0x7fffffffu);
            wr32(esi + 8u, t51);
            wr16(esi + 0x10u, 0u);
            edi = ebx;
            eax = 0u;
            ecx = 9u;
            while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wr32(ebx, 0x24u);
            wr32(ebx + 0x14u, rd32(COW_IMG(0x1034a118u)));
            wr32(ebx + 0x18u, rd32(COW_IMG(0x1034a11cu)));
            wr32(ebx + 0x1cu, rd32(COW_IMG(0x1034a120u)));
            t52 = rd32(COW_IMG(0x1034a124u));
            wr32(ebx + 0x20u, t52);
            t53 = rd32(COW_IMG(0x106690f8u));
            wr32(ebx + 0x10u, esi);
            wr32(ebx + 4u, t53 | 0x500c0u);
            wr32(ebx + 8u, 0x30000u);
            g->eax = rd32(COW_IMG(0x106690f4u));
            g->edx = t52;
            t54 = rd32(COW_IMG(0x106690f4u));
            t55 = rd32(rd32(COW_IMG(0x106690f4u)));
            g->esp = sp0 - 0x10u;
            t56 = cow_thiscall(g, rd32(t55 + 0xcu), t55, 4, t54, ebx, ebp, 0u);
            t57 = g->ecx;
            t58 = g->edx;
            if ((int32_t)t56 < 0)
            {
                eax = t56;
                ecx = t57;
                edx = t58;
            }
            else
            {
                g->eax = rd32(ebp);
                g->edx = rd32(rd32(ebp));
                t59 = rd32(ebp);
                t60 = rd32(rd32(ebp));
                g->esp = sp0 - 0x10u;
                t61 = cow_thiscall(g, rd32(t60), ebp + 4u, 3, t59, COW_IMG(0x1034185cu), ebp + 4u);
                t62 = g->ecx;
                t63 = g->edx;
                if ((int32_t)t61 >= 0)
                {
                    eax = t61;
                    ecx = t62;
                    edx = t63;
                }
                else
                {
                    ecx = t62;
                    edx = t63;
                    if (rd32(ebp) == 0u)
                    {
                        eax = rd32(ebp);
                    }
                    else
                    {
                        eax = rd32(ebp);
                        g->eax = eax;
                        g->edx = edx;
                        t64 = rd32(eax);
                        g->esp = sp0 - 0x10u;
                        t65 = cow_thiscall(g, rd32(t64 + 8u), t64, 1, eax);
                        t66 = g->ecx;
                        t67 = g->edx;
                        wr32(ebp, 0u);
                        eax = t65;
                        ecx = t66;
                        edx = t67;
                    }
                }
            }
        }
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t68 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, esi);
        t69 = g->ecx;
        t70 = g->edx;
        eax = t68;
        ecx = t69;
        edx = t70;
    }
    if (ebx != 0u)
    {
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1, ebx);
    }
    if (rd32(ebp) == 0u) goto L_1024ab68;
    wr32(ebp + 0xc0u, arg2);
    t71 = rd32(arg1 + 0x10u);
    wr32(ebp + 8u, arg1);
    wr32(ebp + 0xc4u, t71);
    wr32(ebp + 0xb8u, 0u);
    esi = arg1;
    edi = ebp + 0xcu;
    ecx = 0xcu;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(ebp + 0xd8u, 0u);
    wr32(ebp + 0xf0u, 0u);
    wr32(ebp + 0x48u, 1u);
    wr32(ebp + 0x44u, ebp);
    g->eax = t71;
    g->edx = arg2;
    g->esp = sp0 - 0x10u;
    t72 = cow_thiscall(g, rd32(COW_IMG(0x10329100u)), ebp + 0x40u, 6, 0u, 0u, COW_IMG(0x102480e0u), ebp + 0x3cu, 0u, ebp + 0x40u);
    t73 = g->ecx;
    t74 = g->edx;
    wr32(ebp + 0x3cu, t72);
    if (t72 == 0u) goto L_1024ab58;
    eax = t72;
    ecx = t73;
    edx = t74;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(COW_IMG(0x10329210u)), ecx, 2, eax, 1u);
    return;
L_1024ab58: ;
    wr32(ebp + 0xc0u, 0u);
    wr32(ebp + 0xc4u, 0xffffffffu);
L_1024ab68: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024a7c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1024a7c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
