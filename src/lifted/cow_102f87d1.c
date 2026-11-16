/* f_0x102f87d1 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102f87d1(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t5;
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
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(arg1 + 0xd4u, rd32(arg1 + 0xd4u) + 1u);
    if (rd32(arg1 + 0xd4u) < rd32(arg1 + 0xc0u))
    {
        edx = in_edx;
        ebx = in_ebx;
        ebp = in_ebp;
        edi = in_edi;
    }
    else
    {
        ecx = rd32(arg1 + 0xd4u);
        wr32(sp0 - 0xcu, in_ebx);
        wr32(sp0 - 0x10u, in_ebp);
        wr32(sp0 - 0x14u, in_edi);
        if (rd8(arg1 + 0x113u) == 0u)
        {
            eax = arg1 + 0xd4u;
            edx = in_edx;
            goto L_102f889e;
        }
        wr32(arg1 + 0xd4u, 0u);
        t1 = rd32(arg1 + 0xc8u) + 1u;
        wr32(sp0 - 0x18u, t1);
        wr32(sp0 - 0x1cu, 0u);
        t2 = rd32(arg1 + 0xd8u);
        wr32(sp0 - 0x20u, t2);
        wr32(sp0 - 0x24u, arg1);
        g->ecx = ecx;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t3 = cow_call_regs(g, COW_IMG(0x102f76a9u), t1, g->ecx, g->edx, 1, 8, arg1, t2, 0u, t1, in_edi, in_ebp, in_ebx, in_esi);
        t4 = g->ecx;
        t5 = g->edx;
        eax = t3;
        ecx = t4;
        edx = t5;
        ebx = in_ebx;
L_102f8819: ;
        wr8(arg1 + 0x114u, (uint8_t)(rd8(arg1 + 0x114u) + 1u));
        if (rd8(arg1 + 0x114u) >= 7u) goto L_102f889e;
        ebx = (ebx & 0xffffff00u) | rd8(arg1 + 0x114u);
        t6 = cow_divu(g, rd32(arg1 + 0xb8u) + rd32(COW_IMG(0x10348928u) + (uint8_t)ebx * 4u) - rd32(COW_IMG(0x1034890cu) + (uint8_t)ebx * 4u) - 1u, rd32(COW_IMG(0x10348928u) + (uint8_t)ebx * 4u));
        t7 = cow_modu(g, rd32(arg1 + 0xb8u) + rd32(COW_IMG(0x10348928u) + (uint8_t)ebx * 4u) - rd32(COW_IMG(0x1034890cu) + (uint8_t)ebx * 4u) - 1u, rd32(COW_IMG(0x10348928u) + (uint8_t)ebx * 4u));
        t8 = rd8(arg1 + 0x119u);
        t9 = rd8(arg1 + 0x60u);
        wr32(arg1 + 0xd0u, t6);
        t10 = ((t8 * t6 + 7u) >> 3u) + 1u;
        wr32(arg1 + 0xccu, t10);
        if ((t9 & 2u) != 0u)
        {
            eax = t6;
            ecx = (uint8_t)ebx << 2u;
            edx = t10;
            goto L_102f8895;
        }
        ecx = (uint8_t)ebx << 2u;
        t11 = cow_divu(g, rd32(arg1 + 0xbcu) + rd32(COW_IMG(0x10348960u) + ecx) - rd32(COW_IMG(0x10348944u) + ecx) - 1u, rd32(COW_IMG(0x10348960u) + ecx));
        t12 = cow_modu(g, rd32(arg1 + 0xbcu) + rd32(COW_IMG(0x10348960u) + ecx) - rd32(COW_IMG(0x10348944u) + ecx) - 1u, rd32(COW_IMG(0x10348960u) + ecx));
        t13 = rd32(arg1 + 0xd0u);
        wr32(arg1 + 0xc0u, t11);
        if (t13 == 0u)
        {
            eax = t11;
            edx = t12;
            goto L_102f8819;
        }
        eax = t11;
        edx = t12;
L_102f8895: ;
        if ((uint8_t)ebx < 7u) goto L_102f89ef;
L_102f889e: ;
        if ((rd8(arg1 + 0x5cu) & 0x20u) == 0u)
        {
            wr32(arg1 + 0x70u, sp0 + 4u);
            wr32(arg1 + 0x74u, 1u);
L_102f88b9: ;
            if (rd32(arg1 + 0x68u) == 0u)
            {
                if (rd32(arg1 + 0xfcu) == 0u)
                {
L_102f88d0: ;
                    wr32(sp0 - 0x18u, 0u);
                    wr32(sp0 - 0x1cu, arg1);
                    g->ecx = ecx;
                    g->esp = sp0 - 8u;
                    cow_call_regs(g, COW_IMG(0x102f7fe0u), g->eax, g->ecx, edx, 1, 5, arg1, 0u, in_edi, in_ebp, in_ebx);
                    t14 = g->ecx;
                    t15 = g->edx;
                    wr32(sp0 - 0x20u, 4u);
                    wr32(sp0 - 0x24u, sp0 - 4u);
                    wr32(sp0 - 0x28u, arg1);
                    g->ecx = t14;
                    g->esp = sp0 - 0x1cu;
                    cow_call_regs(g, COW_IMG(0x102f1f8fu), g->eax, g->ecx, t15, 1, 3, arg1, sp0 - 4u, 4u);
                    t16 = g->ecx;
                    t17 = g->edx;
                    wr32(sp0 - 0x2cu, sp0 - 4u);
                    g->ecx = t16;
                    g->edx = t17;
                    g->esp = sp0 - 0x28u;
                    t18 = cow_cdecl(g, COW_IMG(0x102f76dau), 1, sp0 - 4u);
                    t19 = g->ecx;
                    t20 = g->edx;
                    wr32(sp0 - 0x30u, arg1);
                    wr32(arg1 + 0xfcu, t18);
                    g->ecx = t19;
                    g->edx = t20;
                    g->esp = sp0 - 0x2cu;
                    t21 = cow_cdecl(g, COW_IMG(0x102f20e1u), 1, arg1);
                    t22 = g->ecx;
                    t23 = g->edx;
                    wr32(sp0 - 0x34u, 4u);
                    wr32(sp0 - 0x38u, arg1 + 0x10cu);
                    wr32(sp0 - 0x3cu, arg1);
                    g->esp = sp0 - 0x28u;
                    cow_call_regs(g, COW_IMG(0x102f7710u), g->eax, g->ecx, t23, 1, 5, arg1, arg1 + 0x10cu, 4u, arg1, sp0 - 4u);
                    t24 = g->edx;
                    if (rd32(arg1 + 0x10cu) == rd32(COW_IMG(0x1034897cu)))
                    {
                        ecx = rd32(arg1 + 0x10cu);
                        edx = t24;
                    }
                    else
                    {
                        ecx = rd32(arg1 + 0x10cu);
                        edx = t24;
                        wr32(sp0 - 0x18u, COW_IMG(0x10348040u));
                        wr32(sp0 - 0x1cu, arg1);
                        g->esp = sp0 - 0x14u;
                        cow_call_regs(g, COW_IMG(0x102ef234u), g->eax, ecx, edx, 1, 2, arg1, COW_IMG(0x10348040u));
                        t25 = g->edx;
                        ecx = COW_IMG(0x10348040u);
                        edx = t25;
                    }
                    if (rd32(arg1 + 0xfcu) == 0u) goto L_102f88d0;
                }
                t26 = rd32(arg1 + 0xa0u);
                t27 = rd32(arg1 + 0x9cu);
                t28 = rd32(arg1 + 0xfcu);
                t29 = rd32(arg1 + 0xa0u);
                wr32(arg1 + 0x68u, t26);
                wr32(arg1 + 0x64u, t27);
                if (t29 <= t28)
                {
                    eax = t26;
                    ecx = t27;
                    edx = t28;
                }
                else
                {
                    eax = t26;
                    ecx = t27;
                    edx = t28;
                    wr32(arg1 + 0x68u, edx);
                }
                t30 = rd32(arg1 + 0x68u);
                wr32(sp0 - 0x18u, t30);
                wr32(sp0 - 0x1cu, ecx);
                wr32(sp0 - 0x20u, arg1);
                g->ecx = ecx;
                g->esp = sp0 - 0xcu;
                cow_call_regs(g, COW_IMG(0x102f7710u), g->eax, g->ecx, edx, 1, 5, arg1, ecx, t30, in_edi, in_ebp);
                t31 = g->ecx;
                t32 = g->edx;
                wr32(arg1 + 0xfcu, rd32(arg1 + 0xfcu) - rd32(arg1 + 0x68u));
                ecx = t31;
                edx = t32;
            }
            wr32(sp0 - 0x18u, 1u);
            wr32(sp0 - 0x1cu, arg1 + 0x64u);
            g->edx = edx;
            g->esp = sp0;
            t33 = cow_cdecl(g, COW_IMG(0x102f7138u), 7, arg1 + 0x64u, 1u, in_edi, in_ebp, in_ebx, in_esi, self);
            t34 = g->edx;
            if (t33 == 1u)
            {
                eax = t33;
                edx = t34;
                goto L_102f899d;
            }
            eax = t33;
            edx = t34;
            if (eax == 0u)
            {
                ecx = 1u;
            }
            else
            {
                if (rd32(arg1 + 0x7cu) != 0u)
                {
                    eax = rd32(arg1 + 0x7cu);
                }
                else
                {
                    eax = COW_IMG(0x10348df8u);
                }
                wr32(sp0 - 0x18u, eax);
                wr32(sp0 - 0x1cu, arg1);
                g->eax = eax;
                g->esp = sp0 - 0x14u;
                t35 = cow_call_regs(g, COW_IMG(0x102ef234u), g->eax, 1u, edx, 1, 2, arg1, eax);
                t36 = g->edx;
                eax = t35;
                ecx = rd32(sp0 - 0x18u);
                edx = t36;
            }
            if (rd32(arg1 + 0x74u) == 0u)
            {
                wr32(sp0 - 0x18u, COW_IMG(0x10348014u));
                wr32(sp0 - 0x1cu, arg1);
                g->esp = sp0 - 0x14u;
                cow_call_regs(g, COW_IMG(0x102ef234u), g->eax, ecx, edx, 1, 2, arg1, COW_IMG(0x10348014u));
                t37 = g->edx;
                ecx = COW_IMG(0x10348014u);
                edx = t37;
            }
            goto L_102f88b9;
        }
L_102f89c7: ;
        if (rd32(arg1 + 0xfcu) != 0u) goto L_102f89d4;
        if (rd32(arg1 + 0x68u) == 0u) goto L_102f89e1;
L_102f89d4: ;
        wr32(sp0 - 0x18u, COW_IMG(0x10348de0u));
        wr32(sp0 - 0x1cu, arg1);
        g->esp = sp0 - 0x14u;
        cow_call_regs(g, COW_IMG(0x102ef234u), g->eax, ecx, edx, 1, 2, arg1, COW_IMG(0x10348de0u));
        t40 = g->edx;
        ecx = COW_IMG(0x10348de0u);
        edx = t40;
L_102f89e1: ;
        wr32(sp0 - 0x18u, arg1 + 0x64u);
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x102f6fbfu), 1, arg1 + 0x64u);
        t41 = g->edx;
        wr32(arg1 + 0x58u, rd32(arg1 + 0x58u) | 8u);
        edx = t41;
L_102f89ef: ;
        ebx = rd32(sp0 - 0xcu);
        ebp = rd32(sp0 - 0x10u);
        edi = rd32(sp0 - 0x14u);
    }
    g->ebx = ebx;
    g->edi = edi;
    g->ebp = ebp;
    g->edx = edx;
    return;
L_102f899d: ;
    if (rd32(arg1 + 0x74u) == 0u) goto L_102f89af;
    if (rd32(arg1 + 0x68u) != 0u) goto L_102f89af;
    if (rd32(arg1 + 0xfcu) == 0u)
    {
        ecx = 1u;
        goto L_102f89bc;
    }
L_102f89af: ;
    wr32(sp0 - 0x18u, COW_IMG(0x10348014u));
    wr32(sp0 - 0x1cu, arg1);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t38 = cow_call_regs(g, COW_IMG(0x102ef234u), g->eax, 1u, edx, 1, 2, arg1, COW_IMG(0x10348014u));
    t39 = g->edx;
    eax = t38;
    ecx = COW_IMG(0x10348014u);
    edx = t39;
L_102f89bc: ;
    wr32(arg1 + 0x58u, rd32(arg1 + 0x58u) | 8u);
    wr32(arg1 + 0x5cu, rd32(arg1 + 0x5cu) | 0x20u);
    wr32(arg1 + 0x74u, 0u);
    goto L_102f89c7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f87d1(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102f87d1(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
