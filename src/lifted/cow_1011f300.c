/* f_0x1011f300 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
uint32_t cow_fn_1011f300(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if (arg2 == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
        edx = in_edx;
        loc_14 = in_ebx;
        loc_18 = in_esi;
        loc_1c = in_edi;
        goto L_1011f85e;
    }
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, 0x1bu);
    wr32(sp0 - 0x28u, eax);
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 3, eax, 0x1bu, 1u);
    t1 = g->ecx;
    t2 = g->edx;
    if (rd8(rd32(COW_IMG(0x1045666cu)) + 0x913u) == 0u)
    {
        ecx = (t1 & 0xffffff00u) | rd8(rd32(COW_IMG(0x1045666cu)) + 0x913u);
        edx = t2;
    }
    else
    {
        eax = rd32(COW_IMG(0x1045666cu));
        ecx = (t1 & 0xffffff00u) | rd8(rd32(COW_IMG(0x1045666cu)) + 0x913u);
        wr32(sp0 - 0x20u, 1u);
        wr32(sp0 - 0x24u, 0xabu);
        t3 = rd32(eax + 0xcu);
        wr32(sp0 - 0x28u, t3);
        g->edx = rd32(t3);
        t4 = rd32(t3);
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, rd32(t4 + 0xc8u), ecx, 3, t3, 0xabu, 1u);
        t5 = g->ecx;
        t6 = g->edx;
        ecx = t5;
        edx = t6;
    }
    if (arg3 == 0u) goto L_1011f7df;
    if (arg3 == 1u) goto L_1011f5c5;
    if (arg3 != 2u)
    {
        ebx = in_ebx & 0xffffff00u;
        goto L_1011f869;
    }
    if (arg4 == 0u) goto L_1011f45f;
    if (arg4 == 1u) goto L_1011f3c8;
    if (arg4 != 2u)
    {
        ebx = in_ebx & 0xffffff00u;
    }
    else
    {
        if (arg5 == 0u)
        {
            wr32(sp0 - 0x20u, COW_IMG(0x1036c3a4u));
            g->esp = sp0 - 0x20u;
            cow_stdcall(g, COW_IMG(0x10017d20u), 0);
            ebx = in_ebx & 0xffffff00u;
        }
        else
        {
            if (arg5 == 1u)
            {
                wr32(sp0 - 0x20u, COW_IMG(0x1036c3c0u));
                g->esp = sp0 - 0x20u;
                cow_stdcall(g, COW_IMG(0x10017d20u), 0);
                ebx = in_ebx & 0xffffff00u;
            }
            else
            {
                if (arg5 != 2u)
                {
                    ebx = in_ebx & 0xffffff00u;
                }
                else
                {
                    wr32(sp0 - 0x20u, COW_IMG(0x1036c3dcu));
                    g->esp = sp0 - 0x20u;
                    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
                    ebx = in_ebx & 0xffffff00u;
                }
            }
        }
    }
L_1011f869: ;
    wr32(sp0 - 0x20u, 0x144u);
    t35 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x24u, t35);
    g->eax = t35;
    g->esp = sp0 - 0x1cu;
    t36 = cow_thiscall(g, rd32(rd32(t35) + 0x130u), rd32(t35), 2, t35, 0x144u);
    wr32(sp0 - 0x20u, 0x1cu);
    wr32(sp0 - 0x24u, arg1);
    wr32(sp0 - 0x28u, 2u);
    wr32(sp0 - 0x2cu, 5u);
    g->ebx = ebx;
    g->edx = arg1;
    cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 5u, 2u, arg1, 0x1cu);
    t37 = g->edx;
    if ((uint8_t)ebx == 1u)
    {
        edx = t37;
        wr32(sp0 - 0x20u, 2u);
        wr32(sp0 - 0x24u, 1u);
        wr32(sp0 - 0x28u, 0u);
        t38 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x2cu, t38);
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, rd32(rd32(t38) + 0xfcu), rd32(t38), 4, t38, 0u, 1u, 2u);
        wr32(sp0 - 0x20u, 0xau);
        wr32(sp0 - 0x24u, 0x13u);
        t39 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x28u, t39);
        cow_thiscall(g, rd32(rd32(t39) + 0xc8u), rd32(t39), 3, t39, 0x13u, 0xau);
        wr32(sp0 - 0x20u, 1u);
        wr32(sp0 - 0x24u, 0x14u);
        t40 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x28u, t40);
        cow_thiscall(g, rd32(rd32(t40) + 0xc8u), rd32(t40), 3, t40, 0x14u, 1u);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, 0u);
        t41 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x28u, t41);
        cow_thiscall(g, rd32(rd32(t41) + 0xf4u), rd32(t41), 3, t41, 0u, 0u);
        eax = 0u;
        ecx = self + 0x60u;
L_1011f8ff: ;
        t42 = rd32(ecx);
        wr32(ecx, 0xffffffffu);
        wr32(eax * 4u + sp0 - 0x10u, t42);
        if ((int32_t)(eax + 1u) < 4)
        {
            eax = eax + 1u;
            ecx = ecx + 0x1cu;
            goto L_1011f8ff;
        }
        eax = eax + 1u;
        edx = t42;
        wr32(sp0 - 0x20u, 0x1cu);
        wr32(sp0 - 0x24u, self + 0x50u);
        wr32(sp0 - 0x28u, 2u);
        wr32(sp0 - 0x2cu, 5u);
        g->ebx = ebx;
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 5u, 2u, self + 0x50u, 0x1cu);
        eax = 0u;
        esi = self + 0x60u;
L_1011f92b: ;
        t43 = rd32(eax * 4u + sp0 - 0x10u);
        wr32(esi, t43);
        if ((int32_t)(eax + 1u) < 4)
        {
            eax = eax + 1u;
            esi = esi + 0x1cu;
            goto L_1011f92b;
        }
        wr32(sp0 - 0x20u, 5u);
        wr32(sp0 - 0x24u, 1u);
        wr32(sp0 - 0x28u, 0u);
        t44 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x2cu, t44);
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, rd32(rd32(t44) + 0xfcu), rd32(t44), 4, t44, 0u, 1u, 5u);
    }
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0x1bu);
    t45 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x28u, t45);
    g->edx = rd32(COW_IMG(0x1045666cu));
    t46 = rd32(t45);
    t47 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(t46 + 0xc8u), t46, 3, t45, 0x1bu, 0u);
    t48 = g->ecx;
    t49 = g->edx;
    if (rd8(rd32(COW_IMG(0x1045666cu)) + 0x913u) == 0u)
    {
        eax = rd32(COW_IMG(0x1045666cu));
        edx = t49;
        ebx = rd32(sp0 - 0x14u);
        esi = rd32(sp0 - 0x18u);
        edi = rd32(sp0 - 0x1cu);
    }
    else
    {
        eax = rd32(COW_IMG(0x1045666cu));
        ecx = (t48 & 0xffffff00u) | rd8(rd32(COW_IMG(0x1045666cu)) + 0x913u);
        ebx = rd32(sp0 - 0x14u);
        esi = rd32(sp0 - 0x18u);
        edi = rd32(sp0 - 0x1cu);
        wr32(sp0 - 0x14u, 1u);
        wr32(sp0 - 0x18u, 0xabu);
        t50 = rd32(eax + 0xcu);
        wr32(sp0 - 0x1cu, t50);
        g->eax = t50;
        g->edx = rd32(t50);
        t51 = rd32(t50);
        g->esp = sp0 - 0x10u;
        t52 = cow_thiscall(g, rd32(t51 + 0xc8u), ecx, 3, t50, 0xabu, 1u);
        t53 = g->edx;
        eax = t52;
        edx = t53;
    }
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->edx = edx;
    return eax;
L_1011f3c8: ;
    if (arg5 == 0u) goto L_1011f432;
    if (arg5 == 1u) goto L_1011f3ed;
    if (arg5 != 2u)
    {
        ebx = in_ebx & 0xffffff00u;
    }
    else
    {
        wr32(sp0 - 0x20u, COW_IMG(0x1036c388u));
        g->esp = sp0 - 0x20u;
        cow_stdcall(g, COW_IMG(0x10017d20u), 0);
        ebx = in_ebx & 0xffffff00u;
    }
    goto L_1011f869;
L_1011f3ed: ;
    if (rd8(rd32(COW_IMG(0x1045666cu)) + 0x913u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        ecx = (ecx & 0xffffff00u) | rd8(rd32(COW_IMG(0x1045666cu)) + 0x913u);
        goto L_1011f420;
    }
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, 0x13u);
    wr32(sp0 - 0x28u, eax);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(rd32(eax) + 0xc8u), rd32(eax), 3, eax, 0x13u, 1u);
    wr32(sp0 - 0x20u, 6u);
    wr32(sp0 - 0x24u, 0x14u);
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
    edx = rd32(COW_IMG(0x1045666cu));
    loc_20 = 6u;
    loc_24 = 0x14u;
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
L_1011f862: ;
    wr32(sp0 - 0x28u, eax);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 3, eax, loc_24, loc_20);
    ebx = in_ebx & 0xffffff00u;
    goto L_1011f869;
L_1011f420: ;
    edx = rd32(eax);
L_1011f422: ;
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0x1bu);
    wr32(sp0 - 0x28u, eax);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(edx + 0xc8u), ecx, 3, eax, 0x1bu, 0u);
    ebx = in_ebx & 0xffffff00u;
    goto L_1011f869;
L_1011f432: ;
    if (rd8(rd32(COW_IMG(0x1045666cu)) + 0x913u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        ecx = (ecx & 0xffffff00u) | rd8(rd32(COW_IMG(0x1045666cu)) + 0x913u);
        goto L_1011f420;
    }
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x20u, 2u);
    wr32(sp0 - 0x24u, 0x13u);
    wr32(sp0 - 0x28u, eax);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(rd32(eax) + 0xc8u), rd32(eax), 3, eax, 0x13u, 2u);
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    edx = rd32(COW_IMG(0x1045666cu));
L_1011fa0d: ;
    wr32(sp0 - 0x20u, 5u);
    wr32(sp0 - 0x24u, 0x14u);
    wr32(sp0 - 0x28u, eax);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(rd32(eax) + 0xc8u), rd32(eax), 3, eax, 0x14u, 5u);
    wr32(sp0 - 0x20u, 2u);
    wr32(sp0 - 0x24u, 0xabu);
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
    edx = rd32(COW_IMG(0x1045666cu));
    loc_20 = 2u;
    loc_24 = 0xabu;
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
    goto L_1011f862;
L_1011f45f: ;
    if (arg5 == 0u) goto L_1011f5b3;
    if (arg5 == 1u) goto L_1011f488;
    if (arg5 != 2u)
    {
        ebx = in_ebx & 0xffffff00u;
    }
    else
    {
        wr32(sp0 - 0x20u, COW_IMG(0x1036c36cu));
        g->esp = sp0 - 0x20u;
        cow_stdcall(g, COW_IMG(0x10017d20u), 0);
        ebx = in_ebx & 0xffffff00u;
    }
    goto L_1011f869;
L_1011f488: ;
    if (rd8(rd32(COW_IMG(0x1045666cu)) + 0x913u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        ecx = (ecx & 0xffffff00u) | rd8(rd32(COW_IMG(0x1045666cu)) + 0x913u);
        goto L_1011f4b5;
    }
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x20u, 5u);
    wr32(sp0 - 0x24u, 0x13u);
    wr32(sp0 - 0x28u, eax);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(rd32(eax) + 0xc8u), rd32(eax), 3, eax, 0x13u, 5u);
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    edx = rd32(COW_IMG(0x1045666cu));
L_1011f6fc: ;
    wr32(sp0 - 0x20u, 2u);
    wr32(sp0 - 0x24u, 0x14u);
    wr32(sp0 - 0x28u, eax);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(rd32(eax) + 0xc8u), rd32(eax), 3, eax, 0x14u, 2u);
    wr32(sp0 - 0x20u, 3u);
    wr32(sp0 - 0x24u, 0xabu);
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
    edx = rd32(COW_IMG(0x1045666cu));
    loc_20 = 3u;
    loc_24 = 0xabu;
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
    goto L_1011f862;
L_1011f4b5: ;
    wr32(sp0 - 0x20u, 2u);
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, eax);
    g->edx = rd32(eax);
    t7 = rd32(eax);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(t7 + 0xfcu), ecx, 4, eax, 0u, 1u, 2u);
    t8 = g->edx;
    wr32(sp0 - 0x20u, 0xau);
    wr32(sp0 - 0x24u, 0x13u);
    t9 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x28u, t9);
    cow_thiscall(g, rd32(rd32(t9) + 0xc8u), rd32(t9), 3, t9, 0x13u, 0xau);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, 0x14u);
    t10 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x28u, t10);
    cow_thiscall(g, rd32(rd32(t10) + 0xc8u), rd32(t10), 3, t10, 0x14u, 1u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    t11 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x28u, t11);
    cow_thiscall(g, rd32(rd32(t11) + 0xf4u), rd32(t11), 3, t11, 0u, 0u);
    eax = 0u;
    ecx = self + 0x60u;
L_1011f50c: ;
    t12 = rd32(ecx);
    wr32(ecx, 0xffffffffu);
    wr32(eax * 4u + sp0 - 0x10u, t12);
    if ((int32_t)(eax + 1u) < 4)
    {
        eax = eax + 1u;
        ecx = ecx + 0x1cu;
        goto L_1011f50c;
    }
    edx = t12;
    wr32(sp0 - 0x20u, 0x1cu);
    wr32(sp0 - 0x24u, self + 0x50u);
    wr32(sp0 - 0x28u, 2u);
    wr32(sp0 - 0x2cu, 5u);
    g->ebx = in_ebx & 0xffffff00u;
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 5u, 2u, self + 0x50u, 0x1cu);
    eax = 0u;
    esi = self + 0x60u;
L_1011f538: ;
    t13 = rd32(eax * 4u + sp0 - 0x10u);
    wr32(esi, t13);
    if ((int32_t)(eax + 1u) < 4)
    {
        eax = eax + 1u;
        esi = esi + 0x1cu;
        goto L_1011f538;
    }
L_1011f547: ;
    wr32(sp0 - 0x20u, 5u);
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, 0u);
    t24 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x2cu, t24);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(rd32(t24) + 0xfcu), rd32(t24), 4, t24, 0u, 1u, 5u);
    if (rd32(rd32(self + 0x4cu) + 0x40u) != 0u)
    {
        ecx = rd32(rd32(self + 0x4cu) + 0x40u);
    }
    else
    {
        eax = rd32(self + 0x4cu);
        ecx = rd32(eax + 0x44u);
    }
    wr32(sp0 - 0x20u, ecx);
    wr32(sp0 - 0x24u, 0u);
    t25 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x28u, t25);
    g->edx = rd32(t25);
    t26 = rd32(t25);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(t26 + 0xf4u), ecx, 3, t25, 0u, ecx);
    t27 = g->edx;
    wr32(sp0 - 0x20u, 5u);
    wr32(sp0 - 0x24u, 0x13u);
    t28 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x28u, t28);
    cow_thiscall(g, rd32(rd32(t28) + 0xc8u), rd32(t28), 3, t28, 0x13u, 5u);
    wr32(sp0 - 0x20u, 2u);
    wr32(sp0 - 0x24u, 0x14u);
    t29 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x28u, t29);
    cow_thiscall(g, rd32(rd32(t29) + 0xc8u), rd32(t29), 3, t29, 0x14u, 2u);
    ebx = (in_ebx & 0xffffff00u) | 1u;
    goto L_1011f869;
L_1011f5b3: ;
    wr32(sp0 - 0x20u, COW_IMG(0x1036c34cu));
    g->esp = sp0 - 0x20u;
    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    ebx = in_ebx & 0xffffff00u;
    goto L_1011f869;
L_1011f5c5: ;
    if (arg4 == 0u) goto L_1011f6ac;
    if (arg4 == 1u) goto L_1011f671;
    if (arg4 != 2u)
    {
        ebx = in_ebx & 0xffffff00u;
        goto L_1011f869;
    }
    if (arg5 == 0u) goto L_1011f647;
    if (arg5 == 1u) goto L_1011f61d;
    if (arg5 != 2u)
    {
        ebx = in_ebx & 0xffffff00u;
        goto L_1011f869;
    }
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, 0x13u);
    t14 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x28u, t14);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(rd32(t14) + 0xc8u), rd32(t14), 3, t14, 0x13u, 1u);
    wr32(sp0 - 0x20u, 5u);
    wr32(sp0 - 0x24u, 0x14u);
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
    edx = rd32(COW_IMG(0x1045666cu));
    loc_20 = 5u;
    loc_24 = 0x14u;
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
    goto L_1011f862;
L_1011f61d: ;
    wr32(sp0 - 0x20u, 9u);
    wr32(sp0 - 0x24u, 0x13u);
    t15 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x28u, t15);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(rd32(t15) + 0xc8u), rd32(t15), 3, t15, 0x13u, 9u);
    wr32(sp0 - 0x20u, 5u);
    wr32(sp0 - 0x24u, 0x14u);
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
    edx = rd32(COW_IMG(0x1045666cu));
    loc_20 = 5u;
    loc_24 = 0x14u;
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
    goto L_1011f862;
L_1011f647: ;
    wr32(sp0 - 0x20u, 2u);
    wr32(sp0 - 0x24u, 0x13u);
    t16 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x28u, t16);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(rd32(t16) + 0xc8u), rd32(t16), 3, t16, 0x13u, 2u);
    wr32(sp0 - 0x20u, 5u);
    wr32(sp0 - 0x24u, 0x14u);
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
    edx = rd32(COW_IMG(0x1045666cu));
    loc_20 = 5u;
    loc_24 = 0x14u;
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
    goto L_1011f862;
L_1011f671: ;
    if (arg5 == 0u) goto L_1011f853;
    if (arg5 == 1u)
    {
        wr32(sp0 - 0x20u, COW_IMG(0x1036c314u));
        g->esp = sp0 - 0x20u;
        cow_stdcall(g, COW_IMG(0x10017d20u), 0);
        ebx = in_ebx & 0xffffff00u;
    }
    else
    {
        if (arg5 != 2u)
        {
            ebx = in_ebx & 0xffffff00u;
        }
        else
        {
            wr32(sp0 - 0x20u, COW_IMG(0x1036c330u));
            g->esp = sp0 - 0x20u;
            cow_stdcall(g, COW_IMG(0x10017d20u), 0);
            ebx = in_ebx & 0xffffff00u;
        }
    }
    goto L_1011f869;
L_1011f6ac: ;
    if (arg5 == 0u) goto L_1011f7b5;
    if (arg5 == 1u) goto L_1011f6d5;
    if (arg5 != 2u)
    {
        ebx = in_ebx & 0xffffff00u;
    }
    else
    {
        wr32(sp0 - 0x20u, COW_IMG(0x1036c2d8u));
        g->esp = sp0 - 0x20u;
        cow_stdcall(g, COW_IMG(0x10017d20u), 0);
        ebx = in_ebx & 0xffffff00u;
    }
    goto L_1011f869;
L_1011f6d5: ;
    if (rd8(rd32(COW_IMG(0x1045666cu)) + 0x913u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        ecx = (ecx & 0xffffff00u) | rd8(rd32(COW_IMG(0x1045666cu)) + 0x913u);
        edx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
        goto L_1011f720;
    }
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    ecx = (ecx & 0xffffff00u) | rd8(rd32(COW_IMG(0x1045666cu)) + 0x913u);
    edx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
    wr32(sp0 - 0x20u, 5u);
    wr32(sp0 - 0x24u, 0x13u);
    wr32(sp0 - 0x28u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(edx + 0xc8u), ecx, 3, eax, 0x13u, 5u);
    t17 = g->edx;
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    edx = t17;
    goto L_1011f6fc;
L_1011f720: ;
    wr32(sp0 - 0x20u, 2u);
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, eax);
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(edx + 0xfcu), ecx, 4, eax, 0u, 1u, 2u);
    t18 = g->edx;
    wr32(sp0 - 0x20u, 0xau);
    wr32(sp0 - 0x24u, 0x13u);
    t19 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x28u, t19);
    cow_thiscall(g, rd32(rd32(t19) + 0xc8u), rd32(t19), 3, t19, 0x13u, 0xau);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, 0x14u);
    t20 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x28u, t20);
    cow_thiscall(g, rd32(rd32(t20) + 0xc8u), rd32(t20), 3, t20, 0x14u, 1u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    t21 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x28u, t21);
    cow_thiscall(g, rd32(rd32(t21) + 0xf4u), rd32(t21), 3, t21, 0u, 0u);
    eax = 0u;
    ecx = self + 0x60u;
L_1011f775: ;
    t22 = rd32(ecx);
    wr32(ecx, 0xffffffffu);
    wr32(eax * 4u + sp0 - 0x10u, t22);
    if ((int32_t)(eax + 1u) < 4)
    {
        eax = eax + 1u;
        ecx = ecx + 0x1cu;
        goto L_1011f775;
    }
    edx = t22;
    wr32(sp0 - 0x20u, 0x1cu);
    wr32(sp0 - 0x24u, self + 0x50u);
    wr32(sp0 - 0x28u, 2u);
    wr32(sp0 - 0x2cu, 5u);
    g->ebx = in_ebx & 0xffffff00u;
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 5u, 2u, self + 0x50u, 0x1cu);
    eax = 0u;
    esi = self + 0x60u;
L_1011f7a1: ;
    t23 = rd32(eax * 4u + sp0 - 0x10u);
    wr32(esi, t23);
    if ((int32_t)(eax + 1u) < 4)
    {
        eax = eax + 1u;
        esi = esi + 0x1cu;
        goto L_1011f7a1;
    }
    goto L_1011f547;
L_1011f7b5: ;
    wr32(sp0 - 0x20u, 6u);
    wr32(sp0 - 0x24u, 0x13u);
    t30 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x28u, t30);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(rd32(t30) + 0xc8u), rd32(t30), 3, t30, 0x13u, 6u);
    wr32(sp0 - 0x20u, 5u);
    wr32(sp0 - 0x24u, 0x14u);
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
    edx = rd32(COW_IMG(0x1045666cu));
    loc_20 = 5u;
    loc_24 = 0x14u;
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
    goto L_1011f862;
L_1011f7df: ;
    if (arg4 == 0u) goto L_1011fa31;
    if (arg4 == 1u) goto L_1011f993;
    if (arg4 != 2u)
    {
        ebx = in_ebx & 0xffffff00u;
        goto L_1011f869;
    }
    if (arg5 == 0u) goto L_1011f853;
    if (arg5 == 1u) goto L_1011f82c;
    if (arg5 != 2u)
    {
        ebx = in_ebx & 0xffffff00u;
        goto L_1011f869;
    }
    wr32(sp0 - 0x20u, 5u);
    wr32(sp0 - 0x24u, 0x13u);
    t31 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x28u, t31);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(rd32(t31) + 0xc8u), rd32(t31), 3, t31, 0x13u, 5u);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, 0x14u);
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
    edx = rd32(COW_IMG(0x1045666cu));
    loc_20 = 1u;
    loc_24 = 0x14u;
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
    goto L_1011f862;
L_1011f82c: ;
    wr32(sp0 - 0x20u, 5u);
    wr32(sp0 - 0x24u, 0x13u);
    t32 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x28u, t32);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(rd32(t32) + 0xc8u), rd32(t32), 3, t32, 0x13u, 5u);
    wr32(sp0 - 0x20u, 2u);
    wr32(sp0 - 0x24u, 0x14u);
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
    edx = rd32(COW_IMG(0x1045666cu));
    loc_20 = 2u;
    loc_24 = 0x14u;
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
    goto L_1011f862;
L_1011f853: ;
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
    edx = rd32(COW_IMG(0x1045666cu));
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
L_1011f85e: ;
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0x1bu);
    loc_20 = 0u;
    loc_24 = 0x1bu;
    goto L_1011f862;
L_1011f993: ;
    if (arg5 == 0u) goto L_1011f9e2;
    if (arg5 == 1u) goto L_1011f9b8;
    if (arg5 != 2u)
    {
        ebx = in_ebx & 0xffffff00u;
    }
    else
    {
        wr32(sp0 - 0x20u, COW_IMG(0x1036c29cu));
        g->esp = sp0 - 0x20u;
        cow_stdcall(g, COW_IMG(0x10017d20u), 0);
        ebx = in_ebx & 0xffffff00u;
    }
    goto L_1011f869;
L_1011f9b8: ;
    wr32(sp0 - 0x20u, 5u);
    wr32(sp0 - 0x24u, 0x13u);
    t33 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x28u, t33);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(rd32(t33) + 0xc8u), rd32(t33), 3, t33, 0x13u, 5u);
    wr32(sp0 - 0x20u, 6u);
    wr32(sp0 - 0x24u, 0x14u);
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
    edx = rd32(COW_IMG(0x1045666cu));
    loc_20 = 6u;
    loc_24 = 0x14u;
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
    goto L_1011f862;
L_1011f9e2: ;
    if (rd8(rd32(COW_IMG(0x1045666cu)) + 0x913u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        ecx = (ecx & 0xffffff00u) | rd8(rd32(COW_IMG(0x1045666cu)) + 0x913u);
        edx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
        goto L_1011f422;
    }
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    ecx = (ecx & 0xffffff00u) | rd8(rd32(COW_IMG(0x1045666cu)) + 0x913u);
    edx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
    wr32(sp0 - 0x20u, 2u);
    wr32(sp0 - 0x24u, 0x13u);
    wr32(sp0 - 0x28u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(edx + 0xc8u), ecx, 3, eax, 0x13u, 2u);
    t34 = g->edx;
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    edx = t34;
    goto L_1011fa0d;
L_1011fa31: ;
    if (arg5 == 0u)
    {
        wr32(sp0 - 0x20u, COW_IMG(0x1036c238u));
        g->esp = sp0 - 0x20u;
        cow_stdcall(g, COW_IMG(0x10017d20u), 0);
        ebx = in_ebx & 0xffffff00u;
    }
    else
    {
        if (arg5 == 1u)
        {
            wr32(sp0 - 0x20u, COW_IMG(0x1036c25cu));
            g->esp = sp0 - 0x20u;
            cow_stdcall(g, COW_IMG(0x10017d20u), 0);
            ebx = in_ebx & 0xffffff00u;
        }
        else
        {
            if (arg5 != 2u)
            {
                ebx = in_ebx & 0xffffff00u;
            }
            else
            {
                wr32(sp0 - 0x20u, COW_IMG(0x1036c27cu));
                g->esp = sp0 - 0x20u;
                cow_stdcall(g, COW_IMG(0x10017d20u), 0);
                ebx = in_ebx & 0xffffff00u;
            }
        }
    }
    goto L_1011f869;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011f300(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011f300(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
