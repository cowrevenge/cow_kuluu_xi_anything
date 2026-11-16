/* f_0x102ad490 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102ad490(Guest* g)
{
    double d13;
    double d14;
    double d39;
    double d43;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_4c;
    uint32_t loc_50;
    uint32_t loc_54;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 132u);

    wr32(sp0 - 0x5cu, in_ebx);
    wr32(sp0 - 0x60u, in_ebp);
    wr32(sp0 - 0x64u, in_edi);
    if (rd32(arg1 + 0x34u) == 0u)
    {
        eax = rd32(arg1 + 0x34u);
        edx = in_edx;
        goto L_102ad75e;
    }
    eax = rd32(arg1 + 0x34u);
    if (rd32(eax + 0x14u) == 0u)
    {
        edx = rd32(eax + 0x14u);
        goto L_102ad75e;
    }
    edx = rd32(eax + 0x14u);
    t1 = rd32(eax + 0x54u);
    wr32(sp0 - 0x40u, t1);
    if (rd32(eax + 0x54u) != 0u)
    {
        edi = t1;
        loc_40 = t1;
        goto L_102ad4e3;
    }
    wr32(sp0 - 0x68u, 0x123u);
    wr32(sp0 - 0x6cu, COW_IMG(0x103bef68u));
    wr32(sp0 - 0x70u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = arg1;
    g->edx = edx;
    g->esp = sp0 - 0x68u;
    t2 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bef68u));
    t3 = g->ecx;
    t4 = g->edx;
    wr32(sp0 - 0x74u, COW_IMG(0x103bf050u));
    g->edx = t4;
    g->esp = sp0 - 0x6cu;
    t5 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf050u), COW_IMG(0x103b379cu));
    t6 = g->edx;
    g->edx = t6;
    return t5;
L_102ad4e3: ;
    t7 = rd32(eax + 0x58u);
    wr32(sp0 - 0x50u, t7);
    if (rd32(eax + 0x58u) != 0u)
    {
        eax = t7;
        loc_50 = t7;
        goto L_102ad516;
    }
    eax = t7;
    wr32(sp0 - 0x68u, 0x127u);
    wr32(sp0 - 0x6cu, COW_IMG(0x103bef68u));
    wr32(sp0 - 0x70u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = arg1;
    g->edx = edx;
    g->esp = sp0 - 0x68u;
    t8 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bef68u));
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x74u, COW_IMG(0x103bf03cu));
    g->edx = t10;
    g->esp = sp0 - 0x6cu;
    t11 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf03cu), COW_IMG(0x103b379cu));
    t12 = g->edx;
    g->edx = t12;
    return t11;
L_102ad516: ;
    d13 = (double)rdf32(sp0 + 8u);
    if (d13 <= rdf64(COW_IMG(0x1032a108u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d13, rdf64(COW_IMG(0x1032a108u)), 0u);
        goto L_102ad784;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d13, rdf64(COW_IMG(0x1032a108u)), 0u);
    d14 = (double)rdf32(sp0 + 8u);
    if ((cow_fsw(g, d14, rdf64(COW_IMG(0x1032a100u)), 0u) & 0x100u) != 0u)
    {
        wr8(sp0 - 0x55u, 0xffu);
    }
    else
    {
        wr32(sp0 + 8u, 0x3f800000u);
        wr8(sp0 - 0x55u, 0u);
    }
    wr32(sp0 - 0x48u, 0u);
    if ((int32_t)rd32(arg1 + 0x44u) <= 0)
    {
        eax = rd32(arg1 + 0x44u);
        goto L_102ad784;
    }
    wr32(sp0 - 0x68u, in_esi);
    ebx = 0u;
    ebp = 0u;
    loc_48 = 0u;
L_102ad56c: ;
    t15 = rd32(ebx * 4u + rd32(arg1 + 0x48u));
    wr32(sp0 - 0x4cu, t15);
    if (rd32(ebx * 4u + rd32(arg1 + 0x48u)) != 0u)
    {
        eax = rd32(arg1 + 0x48u);
        esi = t15;
        loc_4c = t15;
        if (esi != 1u)
        {
            t24 = ebp * 0xcu + edi;
            wr32(sp0 - 0x6cu, t24);
            t25 = ebp * 0xcu + edi + 0xcu;
            wr32(sp0 - 0x70u, t25);
            wr32(sp0 - 0x74u, sp0 - 0x24u);
            g->esp = sp0 - 0x68u;
            cow_cdecl(g, COW_IMG(0x102749e0u), 3, sp0 - 0x24u, t25, t24);
            if ((int32_t)(esi - 1u) <= 1)
            {
                eax = esi - 1u;
                ebp = ebp + 1u;
            }
            else
            {
                ebp = ebp + 1u;
                t26 = ebp * 0xcu + edi;
                wr32(sp0 - 0x54u, t26);
                t27 = rd32(sp0 - 0x50u);
                wr32(sp0 - 0x44u, edi - t27);
                eax = edi - t27;
                ebx = 1u;
                esi = ebp * 0xcu + rd32(sp0 - 0x50u) + 4u;
                loc_54 = t26;
                loc_44 = edi - t27;
L_102ad61f: ;
                t28 = rd32(esi - 4u);
                wr32(sp0 - 0xcu, t28);
                wr32(sp0 - 8u, rd32(esi));
                t29 = rd32(esi + 4u);
                wr32(sp0 - 4u, t29);
                wr32(sp0 - 0x6cu, loc_54);
                t30 = eax + esi + 8u;
                wr32(sp0 - 0x70u, t30);
                wr32(sp0 - 0x74u, sp0 - 0x30u);
                g->esp = sp0 - 0x68u;
                cow_cdecl(g, COW_IMG(0x102749e0u), 3, sp0 - 0x30u, t30, loc_54);
                wr32(sp0 - 0x78u, sp0 - 0x30u);
                wr32(sp0 - 0x7cu, sp0 - 0x24u);
                wr32(sp0 - 0x80u, sp0 - 0x3cu);
                g->eax = sp0 - 0x24u;
                g->esp = sp0 - 0x74u;
                t31 = cow_cdecl(g, COW_IMG(0x102749e0u), 3, sp0 - 0x3cu, sp0 - 0x24u, sp0 - 0x30u);
                if (rd8(sp0 - 0x55u) != 0u)
                {
                    edi = esi - 4u;
                    t34 = rd32(sp0 + 8u);
                    wr32(sp0 - 0x6cu, t34);
                    wr32(sp0 - 0x70u, sp0 - 0x3cu);
                    wr32(sp0 - 0x74u, edi);
                    wr32(sp0 - 0x78u, sp0 - 0x18u);
                    g->esp = sp0 - 0x68u;
                    cow_cdecl(g, COW_IMG(0x10274a40u), 4, sp0 - 0x18u, edi, sp0 - 0x3cu, t34);
                    t35 = rd32(sp0 - 0x18u);
                    wr32(edi, t35);
                    t36 = rd32(sp0 - 0x14u);
                    wr32(esi, t36);
                    eax = t36;
                    ecx = rd32(sp0 - 0x10u);
                    edx = t35;
                }
                else
                {
                    edi = esi - 4u;
                    t32 = rd32(sp0 - 0x3cu);
                    wr32(edi, t32);
                    t33 = rd32(sp0 - 0x38u);
                    wr32(esi, t33);
                    eax = t33;
                    ecx = rd32(sp0 - 0x34u);
                    edx = t32;
                }
                wr32(sp0 - 0x6cu, edi);
                wr32(esi + 4u, ecx);
                g->eax = eax;
                g->ecx = ecx;
                g->esp = sp0 - 0x68u;
                t37 = cow_cdecl(g, COW_IMG(0x10274910u), 1, edi);
                t38 = g->ecx;
                d39 = cow_take_float(g);
                wr32(sp0 - 0x70u, sp0 - 0xcu);
                wr32(sp0 - 0x74u, edi);
                g->ecx = t38;
                g->edx = sp0 - 0xcu;
                g->esp = sp0 - 0x6cu;
                t40 = cow_cdecl(g, COW_IMG(0x10274890u), 2, edi, sp0 - 0xcu);
                t41 = g->ecx;
                t42 = g->edx;
                d43 = cow_take_float(g);
                if (d43 < (double)rdf32(COW_IMG(0x103295d8u)))
                {
                    eax = (t40 & 0xffff0000u) | (uint16_t)cow_fsw(g, d43, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                    ecx = t41;
                    edx = t42;
                    wr32(sp0 - 0x6cu, edi);
                    g->esp = sp0 - 0x68u;
                    cow_cdecl(g, COW_IMG(0x102748f0u), 1, edi);
                }
                if (ebx != 1u)
                {
                    if (ebx == rd32(sp0 - 0x4cu) - 2u)
                    {
                        t46 = rd32(esi + 4u);
                        t47 = rd32(esi);
                        wr32(esi + 8u, rd32(edi));
                        wr32(esi + 0xcu, t47);
                        wr32(esi + 0x10u, t46);
                    }
                }
                else
                {
                    t44 = rd32(esi);
                    t45 = rd32(esi + 4u);
                    wr32(esi - 0x10u, rd32(edi));
                    wr32(esi - 0xcu, t44);
                    wr32(esi - 8u, t45);
                }
                t48 = rd32(sp0 - 0x28u);
                wr32(sp0 - 0x1cu, t48);
                t49 = rd32(sp0 - 0x30u);
                wr32(sp0 - 0x24u, t49);
                t50 = rd32(sp0 - 0x54u) + 0xcu;
                wr32(sp0 - 0x54u, t50);
                t51 = rd32(sp0 - 0x2cu);
                wr32(sp0 - 0x20u, t51);
                if ((int32_t)(ebx + 1u) < (int32_t)(rd32(sp0 - 0x4cu) - 1u))
                {
                    ebx = ebx + 1u;
                    ebp = ebp + 1u;
                    esi = esi + 0xcu;
                    loc_54 = t50;
                    goto L_102ad61b;
                }
                eax = rd32(sp0 - 0x4cu) - 1u;
                ebp = ebp + 1u;
                edi = rd32(sp0 - 0x40u);
            }
            ebx = rd32(sp0 - 0x48u);
        }
        else
        {
            wr32(sp0 - 0x6cu, 0x13au);
            wr32(sp0 - 0x70u, COW_IMG(0x103bef68u));
            wr32(sp0 - 0x74u, COW_IMG(0x103b27fcu));
            g->eax = eax;
            g->ecx = arg1;
            g->edx = edx;
            g->esp = sp0 - 0x6cu;
            t20 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b27fcu), COW_IMG(0x103bef68u));
            t21 = g->ecx;
            t22 = g->edx;
            wr32(sp0 - 0x78u, COW_IMG(0x103bf0acu));
            g->esp = sp0 - 0x70u;
            t23 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf0acu), COW_IMG(0x103b27fcu));
            eax = t23;
        }
        ebp = ebp + 1u;
    }
    else
    {
        eax = rd32(arg1 + 0x48u);
        wr32(sp0 - 0x6cu, 0x137u);
        wr32(sp0 - 0x70u, COW_IMG(0x103bef68u));
        wr32(sp0 - 0x74u, COW_IMG(0x103b27fcu));
        g->eax = eax;
        g->ecx = arg1;
        g->edx = edx;
        g->esp = sp0 - 0x6cu;
        t16 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b27fcu), COW_IMG(0x103bef68u));
        t17 = g->ecx;
        t18 = g->edx;
        wr32(sp0 - 0x78u, COW_IMG(0x103bf0c4u));
        g->esp = sp0 - 0x70u;
        t19 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf0c4u), COW_IMG(0x103b27fcu));
        eax = t19;
    }
    wr32(sp0 - 0x48u, ebx + 1u);
    if ((int32_t)(ebx + 1u) < (int32_t)rd32(arg1 + 0x44u))
    {
        loc_48 = ebx + 1u;
        ebx = ebx + 1u;
        goto L_102ad568;
    }
    g->ebx = rd32(sp0 - 0x5cu);
    g->esi = rd32(sp0 - 0x68u);
    g->edi = rd32(sp0 - 0x64u);
    g->ebp = rd32(sp0 - 0x60u);
    g->edx = arg1;
    return eax;
L_102ad568: ;
    edx = arg1;
    goto L_102ad56c;
L_102ad61b: ;
    eax = rd32(sp0 - 0x44u);
    goto L_102ad61f;
L_102ad75e: ;
    wr32(sp0 - 0x68u, 0x119u);
    wr32(sp0 - 0x6cu, COW_IMG(0x103bef68u));
    wr32(sp0 - 0x70u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = arg1;
    g->edx = edx;
    g->esp = sp0 - 0x68u;
    t52 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bef68u));
    t53 = g->ecx;
    t54 = g->edx;
    wr32(sp0 - 0x74u, COW_IMG(0x103bf090u));
    wr32(sp0 - 0x78u, COW_IMG(0x103beaa4u));
    g->edx = t54;
    g->esp = sp0 - 0x70u;
    t55 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103beaa4u), COW_IMG(0x103bf090u));
    t56 = g->edx;
    eax = t55;
    edx = t56;
L_102ad784: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ad490(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ad490(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
