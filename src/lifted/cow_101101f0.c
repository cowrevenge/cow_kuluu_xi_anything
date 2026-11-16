/* f_0x101101f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101101f0(Guest* g)
{
    uint32_t eax;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd16(sp0 + 0xcu) < 3u)
    {
        edx = in_edx;
        goto L_10110434;
    }
    edi = (in_edi & 0xffff0000u) | rd16(sp0 + 0xcu);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, COW_IMG(0x10109570u), arg2, 1, COW_IMG(0x1036bf78u));
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        goto L_10110242;
    }
    edx = t2;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t3 = cow_thiscall(g, COW_IMG(0x10109570u), arg2, 1, COW_IMG(0x1036a198u));
    t4 = g->edx;
    if (t3 == 0u)
    {
        edx = t4;
        goto L_10110242;
    }
    edx = t4;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t5 = cow_thiscall(g, COW_IMG(0x10109570u), arg2, 1, COW_IMG(0x1036bf70u));
    t6 = g->edx;
    if (t5 != 0u)
    {
        edx = t6;
        goto L_10110434;
    }
    edx = t6;
L_10110242: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t7 = cow_thiscall(g, COW_IMG(0x10109570u), arg2, 1, COW_IMG(0x1036bf78u));
    t8 = g->edx;
    if (t7 != 0u)
    {
        edx = t8;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t9 = cow_thiscall(g, COW_IMG(0x10109570u), arg2, 1, COW_IMG(0x1036a198u));
        t10 = g->edx;
        eax = -(t9 != 0u) & 2u;
        edx = t10;
    }
    else
    {
        edx = t8;
        eax = 1u;
    }
    wr32(self + 8u, eax);
    if ((uint16_t)edi < 4u) goto L_10110374;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t11 = cow_thiscall(g, COW_IMG(0x101093f0u), arg2 + 8u, 1, 0u);
    t12 = g->ecx;
    t13 = g->edx;
    g->edx = t13;
    t14 = cow_thiscall_cdecl(g, COW_IMG(0x1031479cu), t12, 1, (uint8_t)t11);
    t15 = g->edx;
    if (t14 == 0u)
    {
        edx = t15;
        goto L_10110374;
    }
    edx = t15;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t16 = cow_thiscall(g, COW_IMG(0x101093f0u), arg2 + 0x10u, 1, 0u);
    t17 = g->ecx;
    t18 = g->edx;
    g->edx = t18;
    t19 = cow_thiscall_cdecl(g, COW_IMG(0x1031479cu), t17, 1, (uint8_t)t16);
    t20 = g->edx;
    if (t19 == 0u)
    {
        edx = t20;
        goto L_10110370;
    }
    edx = t20;
    wr32(sp0 + 0xcu, arg2 + 0x18u);
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t21 = cow_thiscall(g, COW_IMG(0x101093f0u), arg2 + 0x18u, 1, 0u);
    t22 = g->ecx;
    t23 = g->edx;
    g->edx = t23;
    t24 = cow_thiscall_cdecl(g, COW_IMG(0x1031479cu), t22, 1, (uint8_t)t21);
    t25 = g->ecx;
    t26 = g->edx;
    if (t24 == 0u)
    {
        edx = t26;
        goto L_10110370;
    }
    ecx = t25;
    edx = t26;
    if (rd32(arg2 + 0xcu) == 0u) goto L_101102f3;
    eax = rd32(arg2 + 0xcu);
    if (rd32(eax + 4u) == 0u)
    {
        ecx = rd32(eax + 4u);
        goto L_101102f3;
    }
    ecx = rd32(eax + 4u);
    eax = ecx;
L_101102f8: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t27 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, eax);
    t28 = g->ecx;
    t29 = g->edx;
    wr32(self + 0x10u, t27);
    if (rd32(arg2 + 0x14u) == 0u)
    {
        ecx = t28;
        edx = t29;
        goto L_1011031a;
    }
    eax = rd32(arg2 + 0x14u);
    edx = t29;
    if (rd32(eax + 4u) == 0u)
    {
        ecx = rd32(eax + 4u);
        goto L_1011031a;
    }
    ecx = rd32(eax + 4u);
    eax = ecx;
L_1011031f: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t30 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, eax);
    t31 = g->ecx;
    t32 = g->edx;
    wr32(self + 0xcu, t30);
    if (rd32(rd32(sp0 + 0xcu) + 4u) == 0u)
    {
        ecx = t31;
        edx = t32;
        goto L_10110355;
    }
    eax = rd32(rd32(sp0 + 0xcu) + 4u);
    edx = t32;
    if (rd32(eax + 4u) == 0u)
    {
        ecx = rd32(eax + 4u);
        goto L_10110355;
    }
    ecx = rd32(eax + 4u);
    g->eax = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t33 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, ecx);
    t34 = g->edx;
    wr32(self + 0x14u, t33);
    g->edx = t34;
    return 0u;
L_101102f3: ;
    eax = COW_IMG(0x103d3c84u);
    goto L_101102f8;
L_1011031a: ;
    eax = COW_IMG(0x103d3c84u);
    goto L_1011031f;
L_10110355: ;
    g->eax = COW_IMG(0x103d3c84u);
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t35 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, COW_IMG(0x103d3c84u));
    t36 = g->edx;
    wr32(self + 0x14u, t35);
    g->edx = t36;
    return 0u;
L_10110370: ;
L_10110374: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t37 = cow_thiscall(g, COW_IMG(0x101093f0u), arg2 + 0x10u, 1, 0u);
    t38 = g->ecx;
    t39 = g->edx;
    g->edx = t39;
    t40 = cow_thiscall_cdecl(g, COW_IMG(0x1031479cu), t38, 1, (uint8_t)t37);
    t41 = g->ecx;
    t42 = g->edx;
    if (t40 == 0u)
    {
        edx = t42;
    }
    else
    {
        eax = t40;
        ecx = t41;
        edx = t42;
        if (rd32(arg2 + 0xcu) == 0u)
        {
            esi = 0u;
        }
        else
        {
            esi = rd32(arg2 + 0xcu);
            esi = rd32(esi + 4u);
        }
        if (rd8(esi) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(esi);
            goto L_101103c4;
        }
        eax = (eax & 0xffffff00u) | rd8(esi);
L_101103aa: ;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t43 = cow_thiscall_cdecl(g, COW_IMG(0x1031479cu), ecx, 1, (uint8_t)eax);
        t44 = g->ecx;
        t45 = g->edx;
        if (t43 != 0u)
        {
            eax = t43;
            ecx = t44;
            edx = t45;
            goto L_101103c4;
        }
        eax = t43;
        ecx = t44;
        edx = t45;
        if (rd8(esi + 1u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(esi + 1u);
            esi = esi + 1u;
            goto L_101103aa;
        }
        eax = (eax & 0xffffff00u) | rd8(esi + 1u);
        esi = esi + 1u;
L_101103c4: ;
        if (rd8(esi) == 0u)
        {
            edi = esi;
            goto L_101103e5;
        }
        edi = esi;
L_101103cc: ;
        g->edx = edx;
        t46 = rd8(edi);
        g->esp = sp0 - 0x14u;
        t47 = cow_thiscall_cdecl(g, COW_IMG(0x1031479cu), t46, 1, t46);
        t48 = g->ecx;
        t49 = g->edx;
        if (t47 == 0u)
        {
            ecx = t48;
            edx = t49;
            goto L_101103e5;
        }
        eax = t47;
        ecx = t48;
        edx = t49;
        if (rd8(edi + 1u) != 0u)
        {
            edi = edi + 1u;
            goto L_101103cc;
        }
        edi = edi + 1u;
L_101103e5: ;
        if (rd8(edi) == 0x40u)
        {
            t50 = rd8(edi + 1u);
            g->edx = t50;
            g->esp = sp0 - 0x14u;
            t51 = cow_thiscall_cdecl(g, COW_IMG(0x1031479cu), ecx, 1, t50);
            t52 = g->ecx;
            t53 = g->edx;
            if (t51 == 0u)
            {
                edx = t53;
            }
            else
            {
                eax = t51;
                ecx = t52;
                edx = t53;
                edi = edi + 1u;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                t54 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, esi);
                t55 = g->ecx;
                t56 = g->edx;
                wr32(self + 0x10u, t54);
                g->edx = t56;
                g->esp = sp0 - 0x18u;
                t57 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), t55, 1, edi);
                t58 = g->ecx;
                t59 = g->edx;
                wr32(self + 0xcu, t57);
                if (rd32(arg2 + 0x14u) == 0u)
                {
                    ecx = t58;
                    edx = t59;
                    goto L_10110423;
                }
                eax = rd32(arg2 + 0x14u);
                edx = t59;
                if (rd32(eax + 4u) == 0u)
                {
                    ecx = rd32(eax + 4u);
                    goto L_10110423;
                }
                ecx = rd32(eax + 4u);
                eax = ecx;
L_10110428: ;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                t60 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, eax);
                t61 = g->edx;
                wr32(self + 0x14u, t60);
                edx = t61;
            }
        }
    }
L_10110434: ;
    g->edx = edx;
    return 0u;
L_10110423: ;
    eax = COW_IMG(0x103d3c84u);
    goto L_10110428;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101101f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101101f0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
