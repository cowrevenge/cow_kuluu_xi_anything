/* f_0x1020ea30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1020ea30(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    if (rd16(rd32(sp0 + 4u)) == 0u)
    {
        eax = rd32(sp0 + 4u);
        loc_4 = self;
    }
    else
    {
        eax = rd32(sp0 + 4u);
        ecx = self;
        edx = in_edx;
        loc_4 = eax;
L_1020ea49: ;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        t1 = rd16(eax);
        g->esp = sp0 - 0x14u;
        t2 = cow_cdecl(g, COW_IMG(0x100fc6e0u), 1, t1);
        t3 = g->ecx;
        t4 = g->edx;
        if ((uint8_t)t2 == 0u)
        {
            ecx = t3;
            edx = t4;
        }
        else
        {
            eax = t2;
            ecx = t3;
            edx = t4;
            ebp = t1;
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t5 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x14u, ebp);
            t6 = g->ecx;
            t7 = g->edx;
            if (t5 == 0u)
            {
                ecx = t6;
                edx = t7;
            }
            else
            {
                eax = t5;
                ecx = t6;
                edx = t7;
                ebx = t5;
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                t8 = cow_cdecl(g, COW_IMG(0x101070f0u), 1, ebp);
                t9 = g->ecx;
                t10 = g->edx;
                if ((t8 & 2u) == 0u)
                {
                    ecx = t9;
                    edx = t10;
                }
                else
                {
                    eax = t8;
                    ecx = t9;
                    edx = t10;
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x14u;
                    t11 = cow_cdecl(g, COW_IMG(0x101070f0u), 1, ebp);
                    t12 = g->ecx;
                    t13 = g->edx;
                    if (!(t11 & 1u))
                    {
                        ecx = t12;
                        edx = t13;
                    }
                    else
                    {
                        eax = t11;
                        edx = t13;
                        g->edx = edx;
                        g->esp = sp0 - 0x14u;
                        t14 = cow_call_regs(g, COW_IMG(0x1020f230u), eax, self, g->edx, 1, 0);
                        t15 = g->ecx;
                        t16 = g->edx;
                        if ((uint8_t)t14 == 0u)
                        {
                            eax = t14;
                            edx = t16;
                            goto L_1020eab6;
                        }
                        eax = t14;
                        ecx = t15;
                        edx = t16;
                        t17 = (eax & 0xffffff00u) | rd8(self + 0x70u);
                        g->eax = t17;
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 0x14u;
                        t18 = cow_cdecl(g, COW_IMG(0x1020e7d0u), 2, ebp, t17);
                        t19 = g->ecx;
                        t20 = g->edx;
                        if ((uint8_t)t18 == 0u)
                        {
                            ecx = t19;
                            edx = t20;
                            goto L_1020ebc7;
                        }
                        eax = t18;
                        edx = t20;
L_1020eab6: ;
                        g->edx = edx;
                        g->esp = sp0 - 0x14u;
                        t21 = cow_call_regs(g, COW_IMG(0x1020f250u), eax, self, g->edx, 1, 0);
                        t22 = g->ecx;
                        t23 = g->edx;
                        if ((uint8_t)t21 == 0u)
                        {
                            eax = t21;
                            edx = t23;
                            goto L_1020ead7;
                        }
                        eax = t21;
                        ecx = t22;
                        edx = t23;
                        g->eax = eax;
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 0x14u;
                        t24 = cow_cdecl(g, COW_IMG(0x1020e7d0u), 2, ebp, 0xffu);
                        t25 = g->ecx;
                        t26 = g->edx;
                        if ((uint8_t)t24 == 0u)
                        {
                            ecx = t25;
                            edx = t26;
                            goto L_1020ebc7;
                        }
                        eax = t24;
                        edx = t26;
L_1020ead7: ;
                        g->edx = edx;
                        g->esp = sp0 - 0x14u;
                        t27 = cow_call_regs(g, COW_IMG(0x1020f260u), eax, self, g->edx, 1, 0);
                        t28 = g->ecx;
                        t29 = g->edx;
                        if ((uint8_t)t27 == 0u) goto L_1020eaf3;
                        eax = t27;
                        ecx = t28;
                        edx = t29;
                        g->eax = eax;
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 0x14u;
                        t30 = cow_cdecl(g, COW_IMG(0x1020e800u), 1, ebp);
                        t31 = g->ecx;
                        t32 = g->edx;
                        if ((uint8_t)t30 == 0u)
                        {
                            ecx = t31;
                            edx = t32;
                            goto L_1020ebc7;
                        }
L_1020eaf3: ;
                        t33 = rd32(self + 0x54u);
                        t34 = rd32(self + 0x64u);
                        t35 = rd32(self + 0x60u);
                        wr32(t34 + t33 * 8u, ebp);
                        t36 = t33 * 0x54u + t35;
                        t37 = t33 * 8u + t34;
                        wr32(sp0 + 4u, t37);
                        g->eax = t37;
                        g->esp = sp0 - 0x14u;
                        t38 = cow_fastcall(g, COW_IMG(0x101f4b20u), t36, t34, 4, 0u, 1u, ebx, 0x80808080u);
                        t39 = g->edx;
                        g->edx = t39;
                        t40 = cow_call_regs(g, COW_IMG(0x1020f230u), t38, self, g->edx, 1, 0);
                        t41 = g->edx;
                        if ((uint8_t)t40 == 0u)
                        {
                            eax = t40;
                            edx = t41;
                            edi = t36;
                            g->edx = edx;
                            g->esp = sp0 - 0x14u;
                            t45 = cow_call_regs(g, COW_IMG(0x1020f250u), eax, self, g->edx, 1, 0);
                            t46 = g->ecx;
                            t47 = g->edx;
                            if ((uint8_t)t45 == 0u)
                            {
                                eax = t45;
                                ecx = t46;
                                edx = t47;
                                g->ebx = ebx;
                                g->eax = eax;
                                g->edx = edx;
                                g->esp = sp0 - 0x10u;
                                t50 = cow_cdecl(g, COW_IMG(0x101cbc10u), 4, ebp, 0u, 0x80808080u, in_edi);
                                t51 = g->edx;
                                g->esp = sp0 - 0x14u;
                                cow_fastcall(g, COW_IMG(0x101f4b20u), edi, t51, 4, 1u, 0x21u, t50, 0x80808080u);
                                t52 = g->ecx;
                                t53 = g->edx;
                                ecx = t52;
                                edx = t53;
                            }
                            else
                            {
                                eax = t45;
                                edx = t47;
                                g->esp = sp0 - 0x14u;
                                cow_fastcall(g, COW_IMG(0x101f4b20u), edi, edx, 4, 1u, 0x34u, ebp, 0x80808080u);
                                t48 = g->ecx;
                                t49 = rd32(sp0 + 4u);
                                wr8(t49 + 4u, 1u);
                                ecx = t48;
                                edx = t49;
                            }
                        }
                        else
                        {
                            eax = t40;
                            edx = t41;
                            edi = t36;
                            g->esp = sp0 - 0x14u;
                            cow_fastcall(g, COW_IMG(0x101f4b20u), edi, edx, 4, 1u, 0x34u, ebp, 0x80808080u);
                            t42 = g->ecx;
                            t43 = g->edx;
                            if (rd8(self + 0x6cu) != 1u)
                            {
                                edx = t43;
                                t44 = rd32(sp0 + 4u);
                                wr8(t44 + 4u, 1u);
                                ecx = t44;
                            }
                            else
                            {
                                ecx = t42;
                                edx = t43;
                                wr8(rd32(sp0 + 4u) + 4u, 0u);
                            }
                        }
                        t54 = rd32(sp0 + 4u);
                        wr32(edi + 0x48u, t54);
                        g->eax = t54;
                        g->ecx = ecx;
                        g->esp = sp0 - 0x14u;
                        t55 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x14u);
                        t56 = g->ecx;
                        wr32(edi + 0x4cu, t55);
                        t57 = (t56 & 0xffff0000u) | (uint16_t)(rd32(self + 0x54u) + 1u);
                        t58 = rd32(self + 0x60u);
                        t59 = rd32(self + 0x54u) + 1u;
                        wr32(self + 0x54u, t59);
                        g->esi = self;
                        g->edx = t58;
                        cow_thiscall(g, COW_IMG(0x101f7020u), self, 3, t58, t57, 1u);
                        t60 = g->ecx;
                        t61 = g->edx;
                        ecx = t60;
                        edx = t61;
                    }
                }
            }
        }
L_1020ebc7: ;
        if (rd16(loc_4 + 2u) != 0u)
        {
            eax = loc_4 + 2u;
            loc_4 = loc_4 + 2u;
            goto L_1020ea49;
        }
        eax = loc_4 + 2u;
        loc_4 = loc_4 + 2u;
    }
    g->ebx = in_ebx;
    g->esi = in_esi;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020ea30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020ea30(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
