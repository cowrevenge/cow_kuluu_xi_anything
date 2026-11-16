/* f_0x102993d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102993d0(Guest* g)
{
    double d33;
    double d34;
    double d35;
    double d36;
    double d37;
    double d38;
    double d39;
    double d40;
    double d41;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_38;
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
    uint32_t t4;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 76u);

    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_ebp);
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, in_edi);
    if (rd32(arg1 + 0x50u) == 0u) goto L_1029961e;
    if ((rd32(arg1 + 0x4cu) & 2u) == 0u)
    {
        ecx = rd32(arg1 + 0x4cu);
        goto L_102993fb;
    }
    ecx = rd32(arg1 + 0x4cu);
    if ((ecx & 4u) != 0u) goto L_1029961e;
L_102993fb: ;
    if (rd32(rd32(arg2)) != 0xa000bu)
    {
        eax = rd32(arg2);
        ebx = rd32(eax + 0x34u);
    }
    else
    {
        eax = rd32(arg2);
        ebx = 0u;
    }
    if (ecx == 0u)
    {
        edx = in_edx;
        goto L_1029942b;
    }
    wr32(sp0 - 0x38u, eax);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x34u;
    t1 = cow_cdecl(g, COW_IMG(0x102a1fc0u), 1, eax);
    t2 = g->ecx;
    if (t1 != 2u)
    {
        ecx = t2;
        edx = (uint32_t)((int32_t)t1 >> 0x1fu);
        goto L_1029942b;
    }
    ecx = t2;
    edx = (uint32_t)((int32_t)t1 >> 0x1fu);
    if (edx == 0u) goto L_1029961e;
L_1029942b: ;
    if (rd32(arg1 + 0x58u) != 0u)
    {
        if (rd32(arg1) != 0xa000bu)
        {
            if (ebx != 0u)
            {
                if (rd32(ebx + 0x64u) == 0u)
                {
                    eax = rd32(ebx + 0x64u);
                    wr32(sp0 - 0x38u, rd32(arg2));
                    g->ecx = arg2;
                    g->edx = rd32(arg2);
                    t3 = rd32(arg2);
                    g->esp = sp0 - 0x34u;
                    cow_cdecl(g, COW_IMG(0x10291310u), 1, t3);
                    t4 = g->ecx;
                    t5 = g->edx;
                    ecx = t4;
                    edx = t5;
                }
            }
        }
    }
    if ((rd32(arg1 + 0x4cu) & 2u) == 0u)
    {
        eax = rd32(arg1 + 0x4cu);
        edi = 0u;
    }
    else
    {
        eax = rd32(arg1 + 0x4cu);
        edi = 0x4000u;
    }
    if ((eax & 4u) != 0u)
    {
        edi = edi | 0x8000u;
    }
    wr32(sp0 - 0x38u, arg1 + 0x14u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x102a34f0u), 1, arg1 + 0x14u);
    t6 = g->ecx;
    t7 = g->edx;
    if (rd32(arg1 + 0x60u) == 0u)
    {
        ecx = t6;
        edx = t7;
        wr32(sp0 - 0x38u, 0u);
        t19 = (edi & 0xffffff00u) | (uint8_t)(edi | 2u);
        wr32(sp0 - 0x3cu, t19);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        cow_cdecl(g, COW_IMG(0x10284b40u), 2, t19, 0u);
        t20 = g->ecx;
        t21 = g->edx;
        ecx = t20;
        edx = t21;
    }
    else
    {
        eax = rd32(arg1 + 0x60u);
        edx = t7;
        t8 = rd32(eax + 0x14u);
        wr32(sp0 - 0x38u, t8);
        g->ecx = t8;
        g->esp = sp0 - 0x34u;
        cow_cdecl(g, COW_IMG(0x10281c40u), 1, t8);
        t9 = g->ecx;
        t10 = rd32(rd32(arg1 + 0x60u) + 0x18u);
        wr32(sp0 - 0x3cu, t10);
        g->eax = t10;
        g->ecx = t9;
        g->edx = rd32(arg1 + 0x60u);
        t11 = rd32(arg1 + 0x60u);
        g->esp = sp0 - 0x38u;
        t12 = cow_cdecl(g, COW_IMG(0x10281d80u), 1, t10);
        t13 = g->ecx;
        t14 = g->edx;
        wr32(sp0 - 0x40u, 0u);
        g->edx = t14;
        g->esp = sp0 - 0x3cu;
        t15 = cow_cdecl(g, COW_IMG(0x10281c70u), 1, 0u);
        t16 = g->edx;
        wr32(sp0 - 0x44u, 0u);
        wr32(sp0 - 0x48u, edi | 6u);
        g->esp = sp0 - 0x40u;
        cow_cdecl(g, COW_IMG(0x10284b40u), 2, edi | 6u, 0u);
        if (rd32(rd32(rd32(arg1 + 0x60u) + 0x1cu) + 0x24u) == 2u)
        {
            eax = rd32(rd32(rd32(arg1 + 0x60u) + 0x1cu) + 0x24u);
            ecx = rd32(rd32(arg1 + 0x60u) + 0x1cu);
            edx = rd32(arg1 + 0x60u);
            goto L_102994c3;
        }
        eax = rd32(rd32(rd32(arg1 + 0x60u) + 0x1cu) + 0x24u);
        ecx = rd32(rd32(arg1 + 0x60u) + 0x1cu);
        edx = rd32(arg1 + 0x60u);
        if (eax == 4u) goto L_102994c3;
        if (rd32(ecx + 0x30u) != 4u) goto L_102994d8;
L_102994c3: ;
        g->ecx = ecx;
        g->esp = sp0 - 0x34u;
        cow_call_regs(g, COW_IMG(0x10282bb0u), g->eax, g->ecx, edx, 1, 0);
        t17 = g->ecx;
        t18 = g->edx;
        ecx = t17;
        edx = t18;
    }
L_102994d8: ;
    if (rd32(arg1 + 0x54u) == 0u)
    {
        eax = rd32(arg1 + 0x54u);
    }
    else
    {
        eax = rd32(arg1 + 0x54u);
        wr32(sp0 - 0x38u, 0x5fu);
        wr32(sp0 - 0x3cu, 1u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x2cu;
        t22 = cow_cdecl(g, COW_IMG(0x10282410u), 4, 1u, 0x5fu, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
        t23 = g->ecx;
        t24 = g->edx;
        eax = t22;
        ecx = t23;
        edx = t24;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t25 = cow_stdcall(g, COW_IMG(0x102a3790u), 0);
    t26 = g->ecx;
    t27 = g->edx;
    wr32(sp0 - 0x38u, 0u);
    g->edx = t27;
    t28 = cow_cdecl(g, COW_IMG(0x10281c70u), 1, 0u);
    t29 = g->edx;
    t30 = rd32(arg1 + 0x3cu);
    wr32(sp0 - 0x3cu, t30);
    g->ecx = t30;
    g->esp = sp0 - 0x3cu;
    cow_call_regs(g, COW_IMG(0x102827f0u), g->eax, g->ecx, t29, 1, 0);
    t31 = g->ecx;
    t32 = g->edx;
    if (rd32(arg1 + 0x64u) != 0u)
    {
        eax = rd32(arg1 + 0x64u);
        ecx = t31;
        edx = t32;
    }
    else
    {
        eax = rd32(arg1 + 0x64u);
        d33 = (double)(float)fr(g, (double)rdf32(arg1 + 0x28u) * (double)rdf32(arg1 + 0x34u));
        wrf32(sp0 - 0xcu, (float)d33);
        d34 = (double)(float)fr(g, (double)rdf32(arg1 + 0x2cu) * (double)rdf32(arg1 + 0x34u));
        wrf32(sp0 - 8u, (float)d34);
        d35 = (double)(float)fr(g, (double)rdf32(arg1 + 0x30u) * (double)rdf32(arg1 + 0x34u));
        wrf32(sp0 - 4u, (float)d35);
        d36 = (double)(float)fr(g, (double)rdf32(arg1 + 0x28u) * (double)rdf32(arg1 + 0x38u));
        wrf32(sp0 - 0x18u, (float)d36);
        d37 = (double)(float)fr(g, (double)rdf32(arg1 + 0x2cu) * (double)rdf32(arg1 + 0x38u));
        wrf32(sp0 - 0x14u, (float)d37);
        d38 = (double)(float)fr(g, (double)rdf32(arg1 + 0x30u) * (double)rdf32(arg1 + 0x38u));
        wrf32(sp0 - 0x10u, (float)d38);
        if (rd8(arg1 + 0x48u) == 0u)
        {
            t42 = rd32(arg1 + 0x3cu);
            wr32(sp0 - 0x24u, t42);
            wr32(sp0 - 0x20u, t42);
            wr32(sp0 - 0x1cu, t42);
        }
        else
        {
            d39 = (double)(float)fr(g, (double)rdf32(arg1 + 0x28u) * (double)rdf32(arg1 + 0x3cu));
            wrf32(sp0 - 0x24u, (float)d39);
            d40 = (double)(float)fr(g, (double)rdf32(arg1 + 0x2cu) * (double)rdf32(arg1 + 0x3cu));
            wrf32(sp0 - 0x20u, (float)d40);
            d41 = (double)(float)fr(g, (double)rdf32(arg1 + 0x30u) * (double)rdf32(arg1 + 0x3cu));
            wrf32(sp0 - 0x1cu, (float)d41);
        }
        wr32(sp0 - 0x38u, sp0 - 0x24u);
        wr32(sp0 - 0x3cu, sp0 - 0x18u);
        wr32(sp0 - 0x40u, sp0 - 0xcu);
        t43 = rd32(arg1 + 0x40u);
        wr32(sp0 - 0x44u, t43);
        wr32(sp0 - 0x48u, 0x80u);
        g->eax = sp0 - 0x18u;
        g->ecx = sp0 - 0xcu;
        g->edx = t43;
        g->esp = sp0 - 0x34u;
        t44 = cow_cdecl(g, COW_IMG(0x10298e30u), 5, 0x80u, t43, sp0 - 0xcu, sp0 - 0x18u, sp0 - 0x24u);
        t45 = g->ecx;
        t46 = g->edx;
        wr32(arg1 + 0x64u, t44);
        eax = t44;
        ecx = t45;
        edx = t46;
    }
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, edi | 0x100000u);
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x10284b40u), 2, edi | 0x100000u, 0u);
    t47 = g->edx;
    t48 = rd32(rd32(arg1 + 0x64u) + 0x14u);
    wr32(sp0 - 0x40u, t48);
    g->eax = rd32(arg1 + 0x64u);
    g->ecx = t48;
    g->edx = t47;
    t49 = rd32(arg1 + 0x64u);
    g->esp = sp0 - 0x3cu;
    t50 = cow_cdecl(g, COW_IMG(0x10281c40u), 1, t48);
    t51 = g->ecx;
    t52 = g->edx;
    wr32(sp0 - 0x44u, 0xffffffffu);
    g->ecx = t51;
    g->edx = t52;
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x10281d80u), 1, 0xffffffffu);
    t53 = g->ecx;
    t54 = g->edx;
    if (rd32(arg1 + 0x58u) == 0u)
    {
        eax = rd32(arg1 + 0x58u);
        ecx = t53;
        edx = t54;
        goto L_102995df;
    }
    eax = rd32(arg1 + 0x58u);
    ecx = t53;
    edx = t54;
    if (eax != 1u) goto L_102995da;
    wr32(sp0 - 0x38u, 0u);
    loc_38 = 0u;
L_102995e1: ;
    g->ecx = ecx;
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x1029c480u), 1, loc_38);
    t55 = g->ecx;
    ecx = t55;
L_102995e9: ;
    wr32(sp0 - 0x38u, 4u);
    wr32(sp0 - 0x3cu, rd32(arg2));
    g->ecx = ecx;
    g->edx = arg2;
    g->esp = sp0 - 0x38u;
    cow_cdecl(g, COW_IMG(0x10285870u), 1, rd32(arg2));
    t56 = g->ecx;
    t57 = g->edx;
    if (rd32(arg1 + 0x54u) == 0u)
    {
        eax = rd32(arg1 + 0x54u);
        ecx = t56;
        edx = t57;
    }
    else
    {
        eax = rd32(arg1 + 0x54u);
        ecx = t56;
        edx = t57;
        wr32(sp0 - 0x38u, 0u);
        wr32(sp0 - 0x3cu, 0u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x2cu;
        t58 = cow_cdecl(g, COW_IMG(0x10282410u), 4, 0u, 0u, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
        t59 = g->ecx;
        t60 = g->edx;
        eax = t58;
        ecx = t59;
        edx = t60;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x34u;
    t61 = cow_call_regs(g, COW_IMG(0x10283240u), g->eax, g->ecx, edx, 1, 0);
    t62 = g->ecx;
    t63 = g->edx;
    g->esp = sp0;
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    g->ebp = rd32(sp0 - 0x2cu);
    g->edx = t63;
    cow_tailcall(g, COW_IMG(0x102a3780u), t61, t62, t63);
    return;
L_102995da: ;
    if (eax != 2u) goto L_102995e9;
L_102995df: ;
    wr32(sp0 - 0x38u, 1u);
    loc_38 = 1u;
    goto L_102995e1;
L_1029961e: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102993d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102993d0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
