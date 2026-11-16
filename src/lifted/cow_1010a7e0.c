/* f_0x1010a7e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1010a7e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_ebp);
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x20u, self);
    wr32(sp0 - 0x30u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x30u;
    t1 = cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0x1cu, 0);
    t2 = g->edx;
    wr32(sp0 - 0x34u, 0x2eu);
    t3 = rd32(sp0 + 4u);
    t4 = cow_fastcall(g, COW_IMG(0x10109830u), t3, t2, 1, 0x2eu);
    t5 = g->edx;
    if ((int16_t)t4 <= 0) goto L_1010a96a;
    eax = t4;
    edx = t5;
    ebx = t3;
    esi = t4;
    wr32(sp0 - 0x34u, esi + 1u);
    wr32(sp0 + 4u, esi + 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t6 = cow_thiscall(g, COW_IMG(0x101093f0u), ebx, 1, esi + 1u);
    t7 = g->edx;
    if ((uint8_t)t6 == 0u) goto L_1010a96a;
    eax = t6;
    edx = t7;
    edi = esi + 1u;
    wr32(sp0 - 0x34u, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t8 = cow_thiscall(g, COW_IMG(0x101093f0u), ebx, 1, edi);
    t9 = g->edx;
    if ((uint8_t)t8 == 0x2au) goto L_1010a96a;
    edx = t9;
    wr32(sp0 - 0x34u, esi);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, sp0 - 0x14u);
    g->esi = esi;
    g->eax = sp0 - 0x14u;
    g->esp = sp0 - 0x30u;
    t10 = cow_thiscall(g, COW_IMG(0x10109430u), ebx, 3, sp0 - 0x14u, 0u, esi);
    if (rd32(t10 + 4u) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(t10 + 4u);
        eax = rd32(eax + 4u);
    }
    edx = eax;
    ebp = 3u;
    edi = sp0 - 0xcu;
L_1010a85b: ;
    wr32(edi, 0u);
    if (edx != 0u)
    {
        if (rd8(edx) != 0u)
        {
            ecx = 0u;
            esi = 5u;
L_1010a871: ;
            if (rd8(edx) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(edx);
                ecx = ecx << 6u;
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(edx);
                ecx = ecx << 6u;
                if ((uint8_t)eax <= 0x60u)
                {
                    eax = (uint8_t)eax - 0x20u;
                }
                else
                {
                    eax = (uint8_t)eax - 0x40u;
                }
                ecx = ecx | (eax & 0x3fu);
                eax = eax & 0x3fu;
                edx = edx + 1u;
            }
            if (esi != 1u)
            {
                esi = esi - 1u;
                goto L_1010a871;
            }
            esi = esi - 1u;
            wr32(edi, ecx);
        }
    }
    if (ebp != 1u)
    {
        ebp = ebp - 1u;
        edi = edi + 4u;
        goto L_1010a85b;
    }
    if (rd32(sp0 - 0x20u) == sp0 - 0xcu)
    {
        ebp = rd32(sp0 - 0x20u);
    }
    else
    {
        ebp = rd32(sp0 - 0x20u);
        t11 = rd32(sp0 - 0xcu);
        t12 = rd32(sp0 - 8u);
        wr32(ebp, t11);
        t13 = rd32(sp0 - 4u);
        wr32(ebp + 4u, t12);
        wr32(ebp + 8u, t13);
        eax = t13;
        edx = ebp;
    }
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t14 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x14u, 0);
    wr32(sp0 - 0x34u, 0xffffffffu);
    t15 = rd32(sp0 + 4u);
    wr32(sp0 - 0x38u, t15);
    wr32(sp0 - 0x3cu, sp0 - 0x14u);
    g->esi = esi;
    t16 = cow_thiscall(g, COW_IMG(0x10109430u), ebx, 3, sp0 - 0x14u, t15, 0xffffffffu);
    if (rd32(t16 + 4u) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(t16 + 4u);
        eax = rd32(eax + 4u);
    }
    edx = eax;
    ebx = 3u;
    esi = sp0 - 0xcu;
L_1010a8f8: ;
    wr32(esi, 0u);
    if (edx != 0u)
    {
        if (rd8(edx) != 0u)
        {
            ecx = 0u;
            edi = 5u;
L_1010a90e: ;
            if (rd8(edx) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(edx);
                ecx = ecx << 6u;
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(edx);
                ecx = ecx << 6u;
                if ((uint8_t)eax <= 0x60u)
                {
                    eax = (uint8_t)eax - 0x20u;
                }
                else
                {
                    eax = (uint8_t)eax - 0x40u;
                }
                ecx = ecx | (eax & 0x3fu);
                eax = eax & 0x3fu;
                edx = edx + 1u;
            }
            if (edi != 1u)
            {
                edi = edi - 1u;
                goto L_1010a90e;
            }
            wr32(esi, ecx);
        }
    }
    if (ebx != 1u)
    {
        ebx = ebx - 1u;
        esi = esi + 4u;
        goto L_1010a8f8;
    }
    if (ebp + 0xcu == sp0 - 0xcu)
    {
        eax = sp0 - 0xcu;
        ebx = ebp + 0xcu;
    }
    else
    {
        ebx = ebp + 0xcu;
        t17 = rd32(sp0 - 0xcu);
        t18 = rd32(sp0 - 8u);
        wr32(ebx, t17);
        t19 = rd32(sp0 - 4u);
        wr32(ebx + 4u, t18);
        wr32(ebx + 8u, t19);
        eax = t18;
        edx = t19;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t20 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x14u, 0);
    t21 = g->edx;
    eax = t20;
    edx = t21;
L_1010a989: ;
    wr32(sp0 - 0x34u, 0x3au);
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t22 = cow_fastcall(g, COW_IMG(0x10109830u), arg2, edx, 1, 0x3au);
    t23 = g->edx;
    if ((int16_t)t22 > 0)
    {
        eax = t22;
        edx = t23;
        wr32(sp0 - 0x34u, eax + 1u);
        wr32(sp0 - 0x38u, 0u);
        wr32(sp0 - 0x3cu, sp0 - 0x14u);
        g->esi = eax + 1u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t25 = cow_thiscall(g, COW_IMG(0x10109430u), arg2, 3, sp0 - 0x14u, 0u, eax + 1u);
        t26 = g->edx;
        wr32(sp0 - 0x34u, t25);
        g->edx = t26;
        t27 = cow_thiscall(g, COW_IMG(0x10109260u), sp0 - 0x1cu, 1, t25);
        t28 = g->edx;
        g->edx = t28;
        t29 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x14u, 0);
        t30 = g->edx;
        wr32(sp0 - 0x34u, COW_IMG(0x1036bf14u));
        g->ebx = ebx;
        g->edx = t30;
        t31 = cow_thiscall(g, COW_IMG(0x10109570u), sp0 - 0x1cu, 1, COW_IMG(0x1036bf14u));
        t32 = g->edx;
        if (t31 != 0u)
        {
            edx = t32;
            esi = eax + 1u;
            eax = t31;
            wr32(sp0 - 0x34u, COW_IMG(0x1036bf10u));
            g->ebx = ebx;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x30u;
            t34 = cow_thiscall(g, COW_IMG(0x10109570u), sp0 - 0x1cu, 1, COW_IMG(0x1036bf10u));
            t35 = g->edx;
            if (t34 != 0u)
            {
                eax = t34;
                edx = t35;
                wr32(sp0 - 0x34u, COW_IMG(0x1036bf0cu));
                g->ebx = ebx;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x30u;
                t36 = cow_thiscall(g, COW_IMG(0x10109570u), sp0 - 0x1cu, 1, COW_IMG(0x1036bf0cu));
                t37 = g->edx;
                if (t36 != 0u)
                {
                    t38 = rd32(sp0 - 0x20u);
                    wr32(t38 + 0x18u, 3u);
                    edx = t38;
                }
                else
                {
                    edx = t37;
                    wr32(rd32(sp0 - 0x20u) + 0x18u, 2u);
                }
            }
            else
            {
                edx = t35;
                wr32(rd32(sp0 - 0x20u) + 0x18u, 1u);
            }
        }
        else
        {
            esi = eax + 1u;
            eax = t31;
            t33 = rd32(sp0 - 0x20u);
            wr32(t33 + 0x18u, eax);
            edx = t33;
        }
        wr32(sp0 - 0x34u, 0xffffffffu);
        wr32(sp0 - 0x38u, esi);
        wr32(sp0 - 0x3cu, sp0 - 0x14u);
        g->esi = esi;
        g->eax = sp0 - 0x14u;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t39 = cow_thiscall(g, COW_IMG(0x10109430u), arg2, 3, sp0 - 0x14u, esi, 0xffffffffu);
        t40 = g->edx;
        wr32(sp0 - 0x34u, t39);
        g->edx = t40;
        t41 = cow_thiscall(g, COW_IMG(0x10109260u), sp0 - 0x1cu, 1, t39);
        t42 = g->edx;
        g->edx = t42;
        t43 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x14u, 0);
        t44 = g->edx;
        wr32(sp0 - 0x34u, COW_IMG(0x1036bf08u));
        g->ebx = ebx;
        g->edx = t44;
        t45 = cow_thiscall(g, COW_IMG(0x10109570u), sp0 - 0x1cu, 1, COW_IMG(0x1036bf08u));
        t46 = g->edx;
        if (t45 != 0u)
        {
            eax = t45;
            edx = t46;
            wr32(sp0 - 0x34u, COW_IMG(0x1036bf04u));
            g->ebx = ebx;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x30u;
            t47 = cow_thiscall(g, COW_IMG(0x10109570u), sp0 - 0x1cu, 1, COW_IMG(0x1036bf04u));
            t48 = g->edx;
            if (t47 != 0u)
            {
                eax = t47;
                edx = t48;
                wr32(sp0 - 0x34u, COW_IMG(0x1036bf00u));
                g->ebx = ebx;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x30u;
                t49 = cow_thiscall(g, COW_IMG(0x10109570u), sp0 - 0x1cu, 1, COW_IMG(0x1036bf00u));
                t50 = g->edx;
                if (t49 != 0u)
                {
                    eax = t49;
                    edx = t50;
                    wr32(sp0 - 0x34u, COW_IMG(0x1036befcu));
                    g->ebx = ebx;
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x30u;
                    t52 = cow_thiscall(g, COW_IMG(0x10109570u), sp0 - 0x1cu, 1, COW_IMG(0x1036befcu));
                    t53 = g->edx;
                    if (t52 != 0u)
                    {
                        eax = t52;
                        edx = t53;
                        wr32(sp0 - 0x34u, COW_IMG(0x1036bef8u));
                        g->ebx = ebx;
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x30u;
                        t54 = cow_thiscall(g, COW_IMG(0x10109570u), sp0 - 0x1cu, 1, COW_IMG(0x1036bef8u));
                        t55 = g->edx;
                        if (t54 != 0u)
                        {
                            eax = t54;
                            edx = t55;
                            wr32(sp0 - 0x34u, COW_IMG(0x1036bef4u));
                            g->ebx = ebx;
                            g->eax = eax;
                            g->esp = sp0 - 0x30u;
                            t56 = cow_thiscall(g, COW_IMG(0x10109570u), sp0 - 0x1cu, 1, COW_IMG(0x1036bef4u));
                            if (t56 != 0u)
                            {
                                eax = t56;
                                wr32(rd32(sp0 - 0x20u) + 0x1cu, 6u);
                            }
                            else
                            {
                                t57 = rd32(sp0 - 0x20u);
                                wr32(t57 + 0x1cu, 5u);
                                eax = t57;
                            }
                        }
                        else
                        {
                            eax = t54;
                            wr32(rd32(sp0 - 0x20u) + 0x1cu, 4u);
                        }
                    }
                    else
                    {
                        eax = t52;
                        wr32(rd32(sp0 - 0x20u) + 0x1cu, 3u);
                    }
                }
                else
                {
                    t51 = rd32(sp0 - 0x20u);
                    wr32(t51 + 0x1cu, 2u);
                    eax = t51;
                }
            }
            else
            {
                eax = t47;
                wr32(rd32(sp0 - 0x20u) + 0x1cu, 1u);
            }
        }
        else
        {
            eax = t45;
            wr32(rd32(sp0 - 0x20u) + 0x1cu, eax);
        }
    }
    else
    {
        t24 = rd32(sp0 - 0x20u);
        wr32(t24 + 0x18u, 3u);
        wr32(t24 + 0x1cu, 6u);
        eax = t24;
    }
    wr32(sp0 - 0x34u, arg3);
    g->edx = arg3;
    t58 = rd32(sp0 - 0x20u);
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, COW_IMG(0x10109260u), t58 + 0x20u, 1, arg3);
    t59 = g->edx;
    if (rd32(t58) != 0u)
    {
        eax = rd32(t58);
        edx = t59;
        esi = t58;
        goto L_1010ab4d;
    }
    eax = rd32(t58);
    edx = t59;
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t60 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1cu, 0);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return t60 & 0xffffff00u;
L_1010a96a: ;
    wr32(self, 0u);
    wr32(self + 4u, 0u);
    wr32(self + 8u, 0u);
    wr32(self + 0xcu, 0u);
    wr32(self + 0x10u, 0u);
    wr32(self + 0x14u, 0u);
    eax = self + 0xcu;
    edx = 0u;
    ebx = self + 0xcu;
    loc_24 = in_ebx;
    loc_28 = in_ebp;
    loc_2c = in_esi;
    loc_20 = self;
    loc_30 = in_edi;
    goto L_1010a989;
L_1010ab4d: ;
    if (rd32(ebx) != 0u) goto L_1010ab63;
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t61 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1cu, 0);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return t61 & 0xffffff00u;
L_1010ab63: ;
    if (rd32(esi + 0x18u) != 3u) goto L_1010ab7a;
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t62 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1cu, 0);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return t62 & 0xffffff00u;
L_1010ab7a: ;
    if (rd32(esi + 0x1cu) != 6u) goto L_1010ab91;
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t63 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1cu, 0);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return t63 & 0xffffff00u;
L_1010ab91: ;
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t64 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x1cu, 0);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return (t64 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010a7e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010a7e0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
