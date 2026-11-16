/* f_0x1007cd60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_1007cd60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc0d0u), in_eax, g->ecx, in_edx, 1, 2, 0x63u, 0u);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        edx = t2;
        goto L_1007cd75;
    }
    return 0u;
L_1007cd75: ;
    if (rd16(COW_IMG(0x10485f7au)) != 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(COW_IMG(0x10485f7au));
        goto L_1007cd88;
    }
    return -arg3;
L_1007cd88: ;
    if (rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)eax * 4u) != 0u)
    {
        ecx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)eax * 4u);
        eax = (uint32_t)(int16_t)eax;
        goto L_1007cd9e;
    }
    return -arg3;
L_1007cd9e: ;
    g->esp = sp0 - 4u;
    t3 = cow_call_regs(g, COW_IMG(0x1007cf80u), eax, g->ecx, g->edx, 1, 0);
    if ((uint8_t)t3 == 0u) goto L_1007cdab;
    return 0u;
L_1007cdab: ;
    wr32(rd32(COW_IMG(0x10456a28u)) + 0x18u, rd32(rd32(COW_IMG(0x10456a28u)) + 0x18u) & 0xfffffff7u);
    if (rd32(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0x170u) == 0u)
    {
        ecx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
        edx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
        goto L_1007cdde;
    }
    eax = rd32(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) + 0x170u);
    ecx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
    edx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
    if (eax == 0x21u) goto L_1007cdde;
    if (eax == 7u) goto L_1007cdde;
    return 0u;
L_1007cdde: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0xe7u, 0u, 0u);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 != 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        esi = t4;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_stdcall(g, COW_IMG(0x10160a50u), 0);
        t7 = g->edx;
        t8 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
        g->ecx = t8;
        g->edx = t7;
        t9 = rd32(COW_IMG(0x103551e0u));
        t10 = cow_cdecl(g, COW_IMG(0x10079170u), 1, t8);
        t11 = g->ecx;
        t12 = g->edx;
        wr16(esi + 4u, (uint16_t)t10);
        if ((uint8_t)arg4 != 1u)
        {
            ecx = t11;
            edx = t12;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t37 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
            t38 = g->ecx;
            t39 = g->edx;
            if ((t37 & 0x10000u) != 0u)
            {
                ecx = t38;
                edx = t39;
                goto L_1007cf20;
            }
            ecx = t38;
            edx = t39;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t40 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
            t41 = g->ecx;
            t42 = g->edx;
            if ((t40 & 0x80000u) != 0u)
            {
                ecx = t41;
                edx = t42;
                goto L_1007ceff;
            }
            ecx = t41;
            edx = t42;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t43 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
            t44 = g->ecx;
            t45 = g->edx;
            if ((int8_t)(t43 >> 8u) < 0)
            {
                ecx = t44;
                edx = t45;
                goto L_1007ceff;
            }
            ecx = t44;
            edx = t45;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            cow_cdecl(g, COW_IMG(0x100fc180u), 1, 0x8000u);
            t46 = g->ecx;
            t47 = g->edx;
            ecx = t46;
            edx = t47;
L_1007cf42: ;
L_1007cf45: ;
            wr16(esi + 6u, 1u);
            wr32(rd32(COW_IMG(0x10456a28u)) + 0x18u, rd32(rd32(COW_IMG(0x10456a28u)) + 0x18u) & 0xfffffff7u);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            cow_cdecl(g, COW_IMG(0x100fc2b0u), 1, 0x80000u);
            t59 = g->ecx;
            t60 = g->edx;
            ecx = t59;
            edx = t60;
            loc_10 = 0x100000u;
        }
        else
        {
            ecx = t11;
            edx = t12;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t13 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
            t14 = g->ecx;
            t15 = g->edx;
            if ((t13 & 0x100000u) != 0u)
            {
                ecx = t14;
                edx = t15;
                goto L_1007ce77;
            }
            ecx = t14;
            edx = t15;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t16 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
            t17 = g->ecx;
            t18 = g->edx;
            if ((t16 & 0x80000u) != 0u)
            {
                ecx = t17;
                edx = t18;
                goto L_1007ce56;
            }
            ecx = t17;
            edx = t18;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t19 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
            t20 = g->ecx;
            t21 = g->edx;
            if ((int8_t)(t19 >> 8u) < 0)
            {
                ecx = t20;
                edx = t21;
                goto L_1007ce56;
            }
            ecx = t20;
            edx = t21;
            wr32(rd32(COW_IMG(0x10456a28u)) + 0x18u, rd32(rd32(COW_IMG(0x10456a28u)) + 0x18u) | 8u);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            cow_cdecl(g, COW_IMG(0x100fc180u), 1, 0x80000u);
            t22 = g->ecx;
            t23 = g->edx;
            ecx = t22;
            edx = t23;
L_1007cea7: ;
L_1007ceaa: ;
            t34 = rd16(esi + 4u);
            wr16(esi + 6u, 3u);
            if ((uint16_t)t34 == 1u)
            {
                wr16(esi + 4u, 3u);
            }
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            cow_cdecl(g, COW_IMG(0x100fc2b0u), 1, 0x8000u);
            t35 = g->ecx;
            t36 = g->edx;
            ecx = t35;
            edx = t36;
            loc_10 = 0x10000u;
        }
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t61 = cow_cdecl(g, COW_IMG(0x100fc2b0u), 1, loc_10);
        t62 = g->ecx;
        t63 = g->edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, esi, 8u, 0u);
    }
    return arg3;
L_1007ce56: ;
    wr32(rd32(COW_IMG(0x10456a28u)) + 0x18u, rd32(rd32(COW_IMG(0x10456a28u)) + 0x18u) & 0xfffffff7u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x100fc2b0u), 1, 0x80000u);
    t24 = g->ecx;
    t25 = g->edx;
    g->ecx = t24;
    g->edx = t25;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x100fc180u), 1, 0x100000u);
    t26 = g->ecx;
    t27 = g->edx;
    ecx = t26;
    edx = t27;
    goto L_1007ceaa;
L_1007ce77: ;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t28 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    t29 = g->ecx;
    if ((t28 & 0x80000u) != 0u)
    {
        eax = rd32(COW_IMG(0x10456a28u));
        ecx = t29;
        edx = rd32(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        wr32(eax + 0x18u, edx & 0xfffffff7u);
        g->ecx = ecx;
        g->edx = edx & 0xfffffff7u;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x100fc2b0u), 1, 0x80000u);
        t32 = g->ecx;
        t33 = g->edx;
        ecx = t32;
        edx = t33;
    }
    else
    {
        eax = rd32(COW_IMG(0x10456a28u));
        ecx = t29;
        edx = rd32(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        wr32(eax + 0x18u, edx | 8u);
        g->ecx = ecx;
        g->edx = edx | 8u;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x100fc180u), 1, 0x80000u);
        t30 = g->ecx;
        t31 = g->edx;
        ecx = t30;
        edx = t31;
    }
    goto L_1007cea7;
L_1007ceff: ;
    wr32(rd32(COW_IMG(0x10456a28u)) + 0x18u, rd32(rd32(COW_IMG(0x10456a28u)) + 0x18u) & 0xfffffff7u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x100fc2b0u), 1, 0x8000u);
    t48 = g->ecx;
    t49 = g->edx;
    g->ecx = t48;
    g->edx = t49;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x100fc180u), 1, 0x10000u);
    t50 = g->ecx;
    t51 = g->edx;
    ecx = t50;
    edx = t51;
    goto L_1007cf45;
L_1007cf20: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t52 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    t53 = g->ecx;
    t54 = g->edx;
    if ((int8_t)(t52 >> 8u) < 0)
    {
        ecx = t53;
        edx = t54;
        wr32(rd32(COW_IMG(0x10456a28u)) + 0x18u, rd32(rd32(COW_IMG(0x10456a28u)) + 0x18u) & 0xfffffff7u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x100fc2b0u), 1, 0x8000u);
        t57 = g->ecx;
        t58 = g->edx;
        ecx = t57;
        edx = t58;
    }
    else
    {
        ecx = t53;
        edx = t54;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x100fc180u), 1, 0x8000u);
        t55 = g->ecx;
        t56 = g->edx;
        ecx = t55;
        edx = t56;
    }
    goto L_1007cf42;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007cd60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007cd60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
