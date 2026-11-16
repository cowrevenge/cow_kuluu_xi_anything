/* f_0x102990b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102990b0(Guest* g)
{
    double d36;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((rd32(arg1 + 0x4cu) & 2u) == 0u)
    {
        eax = rd32(arg1 + 0x4cu);
        goto L_102990ce;
    }
    eax = rd32(arg1 + 0x4cu);
    if ((eax & 4u) != 0u) goto L_1029926b;
L_102990ce: ;
    if (eax == 0u)
    {
        edx = in_edx;
        goto L_102990f0;
    }
    g->eax = rd32(arg2);
    t1 = rd32(arg2);
    g->esp = sp0 - 0x10u;
    t2 = cow_cdecl(g, COW_IMG(0x102a1fc0u), 1, t1);
    if (t2 != 2u)
    {
        eax = t2;
        edx = (uint32_t)((int32_t)t2 >> 0x1fu);
        goto L_102990f0;
    }
    eax = t2;
    edx = (uint32_t)((int32_t)t2 >> 0x1fu);
    if (edx == 0u) goto L_1029926b;
L_102990f0: ;
    g->eax = eax;
    g->ecx = arg1 + 0x14u;
    g->esp = sp0 - 0x10u;
    t3 = cow_cdecl(g, COW_IMG(0x102a34f0u), 1, arg1 + 0x14u);
    t4 = g->ecx;
    t5 = rd32(arg1 + 0x58u);
    g->ecx = t4;
    g->edx = t5;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x1029bd60u), 1, t5);
    t6 = g->ecx;
    t7 = g->edx;
    g->ecx = t6;
    g->edx = t7;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x1029bcf0u), 1, arg1 + 0x5cu);
    t8 = g->ecx;
    t9 = g->edx;
    if (rd32(arg1 + 0x50u) == 0u)
    {
        eax = rd32(arg1 + 0x50u);
        ecx = t8;
        edx = t9;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x10281c40u), 1, 0xffffffffu);
        t23 = g->ecx;
        t24 = g->edx;
        ecx = t23;
        edx = t24;
        ebx = 0x40000u;
    }
    else
    {
        eax = rd32(arg1 + 0x50u);
        edx = t9;
        if (rd32(rd32(eax + 0x1cu) + 0x24u) == 2u)
        {
            ecx = rd32(rd32(eax + 0x1cu) + 0x24u);
            eax = rd32(eax + 0x1cu);
            goto L_1029912b;
        }
        ecx = rd32(rd32(eax + 0x1cu) + 0x24u);
        eax = rd32(eax + 0x1cu);
        if (ecx == 4u) goto L_1029912b;
        if (rd32(eax + 0x30u) != 4u) goto L_10299139;
L_1029912b: ;
        if (rd8(arg1 + 0x164u) & 1u)
        {
            g->eax = eax;
            g->esp = sp0 - 0x10u;
            t10 = cow_call_regs(g, COW_IMG(0x10282bb0u), g->eax, g->ecx, edx, 1, 0);
            t11 = g->edx;
            eax = t10;
            edx = t11;
        }
L_10299139: ;
        t12 = rd32(arg1 + 0x168u);
        g->eax = eax;
        g->ecx = t12;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t13 = cow_cdecl(g, COW_IMG(0x10281ca0u), 1, t12);
        t14 = g->ecx;
        t15 = g->edx;
        g->ecx = t14;
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x10281c70u), 1, 0u);
        t16 = g->ecx;
        t17 = rd32(rd32(arg1 + 0x50u) + 0x14u);
        g->eax = t17;
        g->esp = sp0 - 0x18u;
        t18 = cow_cdecl(g, COW_IMG(0x10281c40u), 1, t17);
        t19 = rd32(rd32(arg1 + 0x50u) + 0x18u);
        g->ecx = rd32(arg1 + 0x50u);
        g->edx = t19;
        t20 = rd32(arg1 + 0x50u);
        g->esp = sp0 - 0x1cu;
        cow_cdecl(g, COW_IMG(0x10281d80u), 1, t19);
        t21 = g->ecx;
        t22 = g->edx;
        ecx = t21;
        edx = t22;
        ebx = 0x40004u;
    }
    if ((rd32(arg1 + 0x4cu) & 2u) == 0u)
    {
        eax = rd32(arg1 + 0x4cu);
        if ((eax & 4u) != 0u)
        {
            ebx = (ebx & 0xffff00ffu) | (uint8_t)(ebx >> 8u | 0x80u) << 8u;
        }
    }
    else
    {
        eax = rd32(arg1 + 0x4cu);
        ebx = (ebx & 0xffff00ffu) | (uint8_t)(ebx >> 8u | 0x40u) << 8u;
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10284b40u), 2, ebx, 0u);
    t25 = g->ecx;
    t26 = g->edx;
    g->eax = rd32(arg2);
    g->ecx = t25;
    g->edx = t26;
    t27 = rd32(arg2);
    g->esp = sp0 - 0x1cu;
    t28 = cow_cdecl(g, COW_IMG(0x10285870u), 1, t27);
    t29 = g->ecx;
    t30 = g->edx;
    g->ecx = t29;
    g->edx = t30;
    g->esp = sp0 - 0x20u;
    t31 = cow_cdecl(g, COW_IMG(0x10283f90u), 1, 1u);
    t32 = g->ecx;
    t33 = g->edx;
    g->esp = sp0 - 0x1cu;
    cow_call_regs(g, COW_IMG(0x10282490u), g->eax, t32, t33, 1, 3, 0u, 1u, t27);
    t34 = g->ecx;
    t35 = g->edx;
    if (rd32(arg1 + 0x54u) == 0u)
    {
        eax = rd32(arg1 + 0x54u);
        ecx = t34;
        edx = t35;
    }
    else
    {
        eax = rd32(arg1 + 0x54u);
        ecx = t34;
        edx = t35;
        d36 = (double)rdf32(arg1 + 0x160u);
        if ((cow_fsw(g, d36, rdf64(COW_IMG(0x10340b68u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d36, rdf64(COW_IMG(0x10340b68u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d36, rdf64(COW_IMG(0x10340b68u)), 0u) & 0x4100u;
            t37 = rd32(arg1 + 0x15cu);
            g->eax = eax;
            g->ecx = t37;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t38 = cow_cdecl(g, COW_IMG(0x10283f40u), 1, t37);
            t39 = g->ecx;
            t40 = g->edx;
            if ((rd8(arg1 + 0x164u) & 2u) == 0u)
            {
                eax = (t38 & 0xffffff00u) | rd8(arg1 + 0x164u);
                ecx = t39;
                t42 = rd32(arg1 + 0x160u);
                g->esp = sp0 - 0x14u;
                cow_call_regs(g, COW_IMG(0x102826e0u), g->eax, g->ecx, t42, 1, 0);
                t43 = g->edx;
                edx = t43;
            }
            else
            {
                eax = (t38 & 0xffffff00u) | rd8(arg1 + 0x164u);
                ecx = t39;
                edx = t40;
                g->esp = sp0 - 0x10u;
                cow_call_regs(g, COW_IMG(0x10282de0u), g->eax, g->ecx, edx, 1, 0);
                t41 = g->edx;
                edx = t41;
            }
            t44 = rd32(rd32(arg1 + 0x54u) + 0x14u);
            g->ecx = t44;
            g->esp = sp0 - 0x10u;
            cow_cdecl(g, COW_IMG(0x10281c40u), 1, t44);
            t45 = g->ecx;
            t46 = rd32(rd32(arg1 + 0x54u) + 0x18u);
            g->esp = sp0 - 0x14u;
            cow_cdecl(g, COW_IMG(0x10281d80u), 1, t46);
            if ((rd32(arg1 + 0x4cu) & 2u) == 0u)
            {
                edx = rd32(arg1 + 0x4cu);
                goto L_10299234;
            }
            edx = rd32(arg1 + 0x4cu);
            eax = 0x4010u;
L_1029923e: ;
L_10299240: ;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t47 = cow_cdecl(g, COW_IMG(0x10284b40u), 2, eax, 0u);
            t48 = g->edx;
            g->ecx = rd32(arg2);
            g->edx = t48;
            t49 = rd32(arg2);
            g->esp = sp0 - 0x1cu;
            t50 = cow_cdecl(g, COW_IMG(0x10285870u), 1, t49);
            t51 = g->ecx;
            t52 = g->edx;
            eax = t50;
            ecx = t51;
            edx = t52;
        }
    }
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    t53 = cow_call_regs(g, COW_IMG(0x10283240u), g->eax, g->ecx, edx, 1, 0);
    t54 = g->ecx;
    t55 = g->edx;
    g->ecx = t54;
    g->edx = t55;
    t56 = cow_cdecl(g, COW_IMG(0x10283f90u), 1, 0xffffffffu);
    t57 = g->ecx;
    t58 = g->edx;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10282490u), g->eax, t57, t58, 1, 3, 1u, 0xffffffffu, in_edi);
L_1029926b: ;
    return;
L_10299234: ;
    if ((edx & 4u) == 0u)
    {
        eax = 0x10u;
        goto L_10299240;
    }
    eax = 0x8010u;
    goto L_1029923e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102990b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102990b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
