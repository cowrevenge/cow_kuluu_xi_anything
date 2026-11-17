/* f_0x1009e400 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1009e400(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_4;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->esp = sp0 - 0xcu;
    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x10u, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        edi = 0u;
    }
    else
    {
        eax = t1;
        edx = t3;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t4 = cow_thiscall(g, COW_IMG(0x1018c610u), eax, 0);
        t5 = g->ecx;
        t6 = g->edx;
        eax = t4;
        ecx = t5;
        edx = t6;
        edi = t4;
    }
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t7 = cow_call_regs(g, COW_IMG(0x101cc4f0u), eax, g->ecx, g->edx, 1, 0);
    t8 = g->edx;
    if (edi == 0u)
    {
        eax = t7;
        edx = t8;
        loc_4 = t7;
        goto L_1009e560;
    }
    edx = t8;
    ebp = t7;
    loc_4 = t7;
    g->eax = arg3 + 4u;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t9 = cow_thiscall(g, COW_IMG(0x1018ca40u), edi, 1, arg3 + 4u);
    t10 = g->edx;
    if (t9 == 0u)
    {
        eax = t9;
        edx = t10;
        goto L_1009e550;
    }
    eax = t9;
    edx = t10;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t11 = cow_thiscall(g, COW_IMG(0x1018c940u), edi, 0);
    t12 = g->edx;
    g->edx = t12;
    t13 = cow_thiscall(g, COW_IMG(0x1018ca20u), edi, 0);
    t14 = g->edx;
    if (t11 == 0u)
    {
        eax = t13;
        edx = t14;
        goto L_1009e550;
    }
    eax = t13;
    edx = t14;
    ebx = t13;
    esi = t11;
    if (ebx == 0u) goto L_1009e550;
    if (!(rd32(rd32(esi + 0x70u) + 0x120u) >> 9u & 1u))
    {
        eax = rd32(esi + 0x70u);
        goto L_1009e550;
    }
    eax = rd32(esi + 0x70u);
    if (!(rd32(rd32(ebx + 0x70u) + 0x120u) >> 9u & 1u))
    {
        edx = rd32(ebx + 0x70u);
        goto L_1009e550;
    }
    edx = rd32(ebx + 0x70u);
    if (ebp == 0u) goto L_1009e511;
    if (rd32(ebp + 0x78u) != rd32(eax + 0x78u))
    {
        edx = rd32(ebp + 0x78u);
        goto L_1009e4b8;
    }
    edx = rd32(ebp + 0x78u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t15 = cow_thiscall(g, COW_IMG(0x100956c0u), ebp, 1, 0xffu);
    t16 = g->edx;
    if ((uint8_t)t15 != 0u)
    {
        eax = t15;
        edx = t16;
        goto L_1009e550;
    }
    edx = t16;
L_1009e4b8: ;
    if (rd32(ebp + 0x78u) != rd32(rd32(ebx + 0x70u) + 0x78u)) goto L_1009e511;
    eax = rd32(ebx + 0x70u);
    if (rd8(COW_IMG(0x10487e48u)) != 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x10487e48u));
        goto L_1009e51b;
    }
    edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x10487e48u));
    if (rd32(COW_IMG(0x1057876cu)) == 0u) goto L_1009e568;
    ecx = rd32(COW_IMG(0x1057876cu));
    g->esp = sp0 - 0x14u;
    t17 = cow_call_regs(g, COW_IMG(0x10158470u), eax, ecx, edx, 1, 0);
    t18 = g->edx;
    if ((uint8_t)t17 != 0u)
    {
        edx = t18;
    }
    else
    {
        eax = t17;
        edx = t18;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t19 = cow_thiscall(g, COW_IMG(0x1015ecc0u), COW_IMG(0x10621838u), 1, 0x20000u);
        t20 = g->edx;
        if ((uint8_t)t19 != 0u)
        {
            edx = t20;
        }
        else
        {
            t21 = rd32(rd32(esi + 0x70u) + 0x78u);
            t22 = rd32(rd32(esi + 0x70u) + 0x74u);
            g->edx = rd32(esi + 0x70u);
            t23 = rd32(esi + 0x70u);
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, COW_IMG(0x10157c60u), rd32(COW_IMG(0x1057876cu)), 4, t22, t21, 1u, 0u);
            t24 = g->edx;
            edx = t24;
        }
    }
L_1009e511: ;
    if (rd8(COW_IMG(0x10487e48u)) == 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x10487e48u));
        goto L_1009e568;
    }
    edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x10487e48u));
L_1009e51b: ;
    if (((rd32(COW_IMG(0x104808fcu)) | rd32(COW_IMG(0x1047fb40u))) >> 8u & 4u) == 0u)
    {
        ebp = rd32(COW_IMG(0x104808fcu));
        goto L_1009e56e;
    }
    ebp = rd32(COW_IMG(0x104808fcu));
    if (rd32(rd32(esi + 0x70u) + 0x120u) >> 7u & 1u)
    {
        eax = rd32(rd32(esi + 0x70u) + 0x120u) >> 7u;
        goto L_1009e550;
    }
    if (!(rd32(rd32(ebx + 0x70u) + 0x120u) >> 7u & 1u)) goto L_1009e56e;
    eax = rd32(rd32(ebx + 0x70u) + 0x120u) >> 7u;
L_1009e550: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t51 = cow_call_regs(g, COW_IMG(0x1018c620u), eax, edi, g->edx, 1, 0);
    t52 = g->ecx;
    t53 = g->edx;
    t54 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t52, t53, 1, 1, edi);
    t55 = g->edx;
    eax = t54;
    edx = t55;
L_1009e560: ;
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009e568: ;
    ebp = rd32(COW_IMG(0x104808fcu));
L_1009e56e: ;
    if (rd32(rd32(edi + 0xcu) + 0xcu) - 1u > 0xeu)
    {
        eax = rd32(edi + 0xcu);
        goto L_1009e550;
    }
    eax = rd32(edi + 0xcu);
    ecx = rd32(rd32(edi + 0xcu) + 0xcu) - 1u;
    t25 = rd32(COW_IMG(0x1009e6d4u) + rd8(COW_IMG(0x1009e6e4u) + ecx) * 4u);
    switch (t25 - RD)
    {
    case 0x1009e589u: goto L_1009e589;
    case 0x1009e59cu: goto L_1009e59c;
    case 0x1009e5a8u: goto L_1009e5a8;
    case 0x1009e69au: goto L_1009e69a;
    default: rt_fatal(g, COW_IMG(0x1009e582u), "switch");
    }
    return 0;
L_1009e589: ;
    g->eax = eax;
    g->edx = rd32(esi);
    t48 = rd32(esi);
    g->esp = sp0 - 0x14u;
    t49 = cow_thiscall(g, rd32(t48 + 0x2b4u), esi, 1, edi);
    t50 = g->edx;
    g->edx = t50;
    return (t49 & 0xffffff00u) | 1u;
L_1009e59c: ;
    t39 = rd32(eax + 0x10u);
    eax = t39;
    loc_1c = esi;
    loc_20 = t39;
L_1009e678: ;
    g->eax = eax;
    g->edx = rd32(esi);
    t40 = rd32(esi);
    g->esp = sp0 - 0x14u;
    t41 = cow_thiscall(g, rd32(t40 + 0x298u), esi, 3, loc_20, loc_1c, 0u);
    t42 = g->edx;
    g->edx = t42;
    t43 = cow_call_regs(g, COW_IMG(0x1018c620u), t41, edi, g->edx, 1, 0);
    t44 = g->ecx;
    t45 = g->edx;
    t46 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t44, t45, 1, 1, edi);
    t47 = g->edx;
    g->edx = t47;
    return (t46 & 0xffffff00u) | 1u;
L_1009e5a8: ;
    if ((rd32(rd32(esi + 0x70u) + 0x78u) & 0xff000000u) == 0u)
    {
        if (rd8(esi + 0xf8u) != 0u)
        {
            wr32(esi + 0x7d8u, 0x20202020u);
        }
    }
    if ((uint16_t)rd32(rd32(edi + 0xcu) + 0x10u) != 0x6163u)
    {
        eax = (uint16_t)rd32(rd32(edi + 0xcu) + 0x10u);
        edx = rd32(edi + 0xcu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t34 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
        t35 = g->edx;
        if (esi == t34)
        {
            edx = t35;
            if (rd32(rd32(edi + 0xcu) + 0xcu) != 0xau)
            {
                eax = rd32(rd32(edi + 0xcu) + 0xcu);
                ecx = rd32(edi + 0xcu);
                if (eax != 8u)
                {
                    if (eax == 9u)
                    {
                        g->esp = sp0 - 0x14u;
                        cow_stdcall(g, COW_IMG(0x101f3550u), 0);
                    }
                }
                else
                {
                    t37 = (ecx & 0xffff0000u) | rd16(rd32(ecx + 0x20u) + 0x14u);
                    g->esp = sp0 - 0x14u;
                    cow_cdecl(g, COW_IMG(0x1022b420u), 1, t37);
                }
            }
            else
            {
                eax = rd32(rd32(edi + 0xcu) + 0xcu);
                ecx = rd32(edi + 0xcu);
                t36 = (edx & 0xffff0000u) | rd16(rd32(ecx + 0x20u) + 0x14u);
                g->esp = sp0 - 0x14u;
                cow_cdecl(g, COW_IMG(0x10222e10u), 1, t36);
            }
        }
    }
    else
    {
        eax = (uint16_t)rd32(rd32(edi + 0xcu) + 0x10u);
        edx = rd32(edi + 0xcu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t29 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
        t30 = g->edx;
        if (esi == t29)
        {
            edx = t30;
            if (rd32(rd32(edi + 0xcu) + 0xcu) != 0xau)
            {
                eax = rd32(edi + 0xcu);
                ecx = rd32(rd32(edi + 0xcu) + 0xcu);
                goto L_1009e602;
            }
            eax = rd32(edi + 0xcu);
            t31 = (edx & 0xffff0000u) | rd16(rd32(eax + 0x20u) + 0x14u);
            g->esp = sp0 - 0x18u;
            cow_stdcall(g, COW_IMG(0x10222e00u), 0);
L_1009e614: ;
        }
L_1009e617: ;
        t33 = rd32(rd32(edi + 0xcu) + 0x10u);
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, COW_IMG(0x10085450u), esi, 1, t33);
    }
    t38 = rd32(rd32(edi + 0xcu) + 0x10u);
    eax = rd32(edi + 0xcu);
    loc_1c = esi;
    loc_20 = t38;
    goto L_1009e678;
L_1009e602: ;
    if (ecx != 8u) goto L_1009e617;
    t32 = (ecx & 0xffff0000u) | rd16(rd32(eax + 0x20u) + 0x14u);
    g->esp = sp0 - 0x14u;
    cow_thiscall_cdecl(g, COW_IMG(0x1022b3d0u), t32, 1, t32);
    goto L_1009e614;
L_1009e69a: ;
    if (rd32(loc_4 + 0x78u) != rd32(rd32(esi + 0x70u) + 0x78u))
    {
        eax = rd32(esi + 0x70u);
        goto L_1009e6c1;
    }
    eax = rd32(esi + 0x70u);
    if (((ebp | rd32(COW_IMG(0x1047fb40u))) & 0x1000u) != 0u) goto L_1009e6c1;
    if ((uint8_t)edx != 0u) goto L_1009e550;
L_1009e6c1: ;
    g->eax = eax;
    g->edx = rd32(esi);
    t26 = rd32(esi);
    g->esp = sp0 - 0x14u;
    t27 = cow_thiscall(g, rd32(t26 + 0x2c0u), esi, 1, edi);
    t28 = g->edx;
    g->edx = t28;
    return (t27 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1009e400(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1009e400(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
