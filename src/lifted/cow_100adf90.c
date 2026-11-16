/* f_0x100adf90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100adf90(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(sp0 + 4u) == 0u)
    {
        ebx = 0u;
        esi = 0u;
        edi = rd32(sp0 + 4u);
        loc_c = 0u;
    }
    else
    {
        edi = rd32(sp0 + 4u);
        if (rd32(edi + 0x70u) == 0u)
        {
            ebx = 0u;
            esi = rd32(edi + 0x70u);
            loc_c = 0u;
        }
        else
        {
            esi = rd32(edi + 0x70u);
            t1 = rd32(esi + 0x78u);
            ebx = t1;
            loc_c = t1;
        }
    }
    if (arg2 == 0u)
    {
        eax = arg2;
        edx = in_edx;
        loc_8 = 0u;
        loc_4 = 0u;
    }
    else
    {
        t2 = rd32(arg2 + 0x70u);
        if (rd32(arg2 + 0x70u) == 0u)
        {
            eax = t2;
            edx = in_edx;
            loc_8 = t2;
            loc_4 = 0u;
        }
        else
        {
            eax = t2;
            loc_8 = t2;
            t3 = rd32(eax + 0x78u);
            edx = t3;
            loc_4 = t3;
        }
    }
    wr32(sp0 + 4u, 0u);
    g->ecx = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t4 = cow_call_regs(g, COW_IMG(0x101cc510u), eax, g->ecx, g->edx, 1, 0);
    t5 = g->ecx;
    t6 = g->edx;
    if (edi == 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        ebp = t4;
        goto L_100adffa;
    }
    edx = t6;
    ebp = t4;
    g->eax = rd32(edi);
    g->edx = edx;
    t7 = rd32(edi);
    g->esp = sp0 - 0x1cu;
    t8 = cow_thiscall(g, rd32(t7 + 0x304u), edi, 0);
    t9 = g->ecx;
    t10 = g->edx;
    if ((uint8_t)t8 != 0u)
    {
        eax = t8;
        ecx = t9;
        edx = t10;
        ebx = loc_c;
        goto L_100ae006;
    }
    eax = t8;
    ecx = t9;
    edx = t10;
    ebx = loc_c;
L_100adffa: ;
    if (ebp == 0u) goto L_100ae00e;
    if (rd32(ebp + 0xa0u) != edi) goto L_100ae00e;
L_100ae006: ;
    wr32(sp0 + 4u, 1u);
L_100ae00e: ;
    if (esi != 0u)
    {
        if (!(rd32(esi + 0x120u) >> 0xdu & 1u))
        {
            ecx = rd32(esi + 0x120u) >> 0xdu;
        }
        else
        {
            ecx = rd32(esi + 0x120u) >> 0xdu;
            t11 = (rd32(sp0 + 4u) & 0xffffff00u) | (uint8_t)(rd32(sp0 + 4u) | 2u);
            wr32(sp0 + 4u, t11);
            eax = t11;
        }
    }
    if ((rd8(sp0 + 4u) & 3u) == 0u)
    {
        if (esi == 0u) goto L_100ae055;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t12 = cow_call_regs(g, COW_IMG(0x1008e130u), eax, esi, g->edx, 1, 0);
        t13 = g->ecx;
        t14 = g->edx;
        if ((uint8_t)t12 == 0u)
        {
            ecx = t13;
            edx = t14;
            goto L_100ae055;
        }
        edx = t14;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t15 = cow_thiscall(g, COW_IMG(0x1008e220u), esi, 0);
        t16 = g->ecx;
        t17 = g->edx;
        if (t15 == 0u)
        {
            ecx = t16;
            edx = t17;
            goto L_100ae055;
        }
        eax = t15;
        ecx = t16;
        edx = t17;
        if ((rd8(eax + 0x1d0u) & 4u) != 0u) goto L_100ae073;
L_100ae055: ;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t18 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), ecx, 1, 0u);
        t19 = g->ecx;
        t20 = g->edx;
        if (t18 == 0u)
        {
            eax = t18;
            ecx = t19;
            edx = t20;
            goto L_100ae07d;
        }
        eax = t18;
        ecx = t19;
        edx = t20;
L_100ae063: ;
        if (rd32(eax + 0x14u) == ebx) goto L_100ae073;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t21 = cow_stdcall(g, COW_IMG(0x100e8c70u), 0);
        t22 = g->ecx;
        t23 = g->edx;
        if (t21 != 0u)
        {
            eax = t21;
            ecx = t22;
            edx = t23;
            goto L_100ae063;
        }
        eax = t21;
        ecx = t22;
        edx = t23;
L_100ae07d: ;
        if ((rd8(sp0 + 4u) & 3u) == 0u)
        {
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t25 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), ecx, 1, 0u);
            t26 = g->ecx;
            t27 = g->edx;
            if (t25 == 0u)
            {
                ecx = t26;
                edx = t27;
                goto L_100ae0a0;
            }
            eax = t25;
            ecx = t26;
            edx = t27;
L_100ae092: ;
            if (rd32(eax + 0x14u) == ebx) goto L_100ae0aa;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t28 = cow_stdcall(g, COW_IMG(0x100e8c70u), 0);
            t29 = g->ecx;
            t30 = g->edx;
            if (t28 != 0u)
            {
                eax = t28;
                ecx = t29;
                edx = t30;
                goto L_100ae092;
            }
            ecx = t29;
            edx = t30;
L_100ae0a0: ;
            t31 = (rd32(sp0 + 4u) & 0xffffff00u) | (uint8_t)(rd32(sp0 + 4u) | 8u);
            wr32(sp0 + 4u, t31);
            eax = t31;
        }
    }
L_100ae0aa: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t32 = cow_call_regs(g, COW_IMG(0x101cc510u), eax, g->ecx, g->edx, 1, 0);
    t33 = g->ecx;
    t34 = g->edx;
    if (arg2 == 0u)
    {
        eax = t32;
        ecx = t33;
        edx = t34;
        esi = t32;
        goto L_100ae0c7;
    }
    eax = t32;
    esi = t32;
    g->eax = eax;
    g->edx = rd32(arg2);
    t35 = rd32(arg2);
    g->esp = sp0 - 0x18u;
    t36 = cow_thiscall(g, rd32(t35 + 0x304u), arg2, 0);
    t37 = g->ecx;
    t38 = g->edx;
    if ((uint8_t)t36 != 0u)
    {
        eax = t36;
        ecx = t37;
        edx = t38;
        goto L_100ae0d3;
    }
    eax = t36;
    ecx = t37;
    edx = t38;
L_100ae0c7: ;
    if (esi == 0u) goto L_100ae0dc;
    if (rd32(esi + 0xa0u) != arg2) goto L_100ae0dc;
L_100ae0d3: ;
    ebx = rd32(sp0 + 4u) | 0x10u;
L_100ae0e0: ;
    if (loc_8 == 0u)
    {
        esi = loc_8;
    }
    else
    {
        esi = loc_8;
        if (!(rd32(esi + 0x120u) >> 0xdu & 1u))
        {
            eax = rd32(esi + 0x120u) >> 0xdu;
        }
        else
        {
            eax = rd32(esi + 0x120u) >> 0xdu;
            ebx = ebx | 0x20u;
        }
    }
    if ((ebx & 0x30u) == 0u)
    {
        if (esi == 0u) goto L_100ae120;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t39 = cow_call_regs(g, COW_IMG(0x1008e130u), eax, esi, g->edx, 1, 0);
        t40 = g->ecx;
        t41 = g->edx;
        if ((uint8_t)t39 == 0u)
        {
            ecx = t40;
            edx = t41;
            goto L_100ae120;
        }
        edx = t41;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t42 = cow_thiscall(g, COW_IMG(0x1008e220u), esi, 0);
        t43 = g->ecx;
        t44 = g->edx;
        if (t42 == 0u)
        {
            ecx = t43;
            edx = t44;
            goto L_100ae120;
        }
        eax = t42;
        ecx = t43;
        edx = t44;
        if ((rd8(eax + 0x1d0u) & 4u) != 0u) goto L_100ae144;
L_100ae120: ;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t45 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), ecx, 1, 0u);
        t46 = g->ecx;
        t47 = g->edx;
        if (t45 == 0u)
        {
            ecx = t46;
            edx = t47;
            goto L_100ae147;
        }
        eax = t45;
        edx = t47;
L_100ae12e: ;
        if (rd32(eax + 0x14u) == loc_4)
        {
            ecx = rd32(eax + 0x14u);
            goto L_100ae144;
        }
        ecx = rd32(eax + 0x14u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t48 = cow_stdcall(g, COW_IMG(0x100e8c70u), 0);
        t49 = g->ecx;
        t50 = g->edx;
        if (t48 != 0u)
        {
            eax = t48;
            edx = t50;
            goto L_100ae12e;
        }
        ecx = t49;
        edx = t50;
L_100ae147: ;
        if ((ebx & 0x30u) == 0u)
        {
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t51 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), ecx, 1, 0u);
            t52 = g->ecx;
            t53 = g->edx;
            if (t51 == 0u) goto L_100ae16c;
            eax = t51;
            ecx = t52;
            edx = t53;
            esi = loc_4;
L_100ae15e: ;
            if (rd32(eax + 0x14u) == esi) goto L_100ae16f;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t54 = cow_stdcall(g, COW_IMG(0x100e8c70u), 0);
            t55 = g->ecx;
            t56 = g->edx;
            if (t54 != 0u)
            {
                eax = t54;
                ecx = t55;
                edx = t56;
                goto L_100ae15e;
            }
L_100ae16c: ;
            ebx = (ebx & 0xffffff00u) | (uint8_t)(ebx | 0x80u);
        }
    }
L_100ae16f: ;
    return ebx;
L_100ae073: ;
    t24 = (rd32(sp0 + 4u) & 0xffffff00u) | (uint8_t)(rd32(sp0 + 4u) | 4u);
    wr32(sp0 + 4u, t24);
    eax = t24;
    goto L_100ae07d;
L_100ae0dc: ;
    ebx = rd32(sp0 + 4u);
    goto L_100ae0e0;
L_100ae144: ;
    ebx = ebx | 0x40u;
    goto L_100ae147;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100adf90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100adf90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
