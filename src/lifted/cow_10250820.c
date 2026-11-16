/* f_0x10250820 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10250820(Guest* g)
{
    double d14;
    double d29;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    if (!(rd8(arg1) & 1u))
    {
        edi = in_edi;
        goto L_102509d6;
    }
    wr32(sp0 - 0xcu, in_edi);
    wr32(sp0 - 0x10u, sp0 - 4u);
    g->eax = sp0 - 4u;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_cdecl(g, COW_IMG(0x102736f0u), 1, sp0 - 4u);
    t2 = g->edx;
    wr32(self, 0u);
    if ((rd8(arg1) & 0x20u) == 0u)
    {
        eax = (t1 & 0xffffff00u) | rd8(arg1);
        edx = t2;
        goto L_10250904;
    }
    eax = (t1 & 0xffffff00u) | rd8(arg1);
    edx = t2;
    wr32(sp0 - 0x10u, 2u);
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_call_regs(g, COW_IMG(0x102733d0u), eax, g->ecx, g->edx, 1, 1, 2u);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, arg1);
    g->ecx = t4;
    g->edx = t5;
    t6 = cow_call_regs(g, COW_IMG(0x102505a0u), t3, g->ecx, g->edx, 1, 3, arg1, 0u, 2u);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, arg1);
    g->ecx = t7;
    g->edx = t8;
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x102505a0u), t6, g->ecx, g->edx, 1, 3, arg1, 1u, arg1);
    t9 = g->ecx;
    t10 = g->edx;
    if (rd32(arg1 + 0x1cu) != 2u)
    {
        edi = 2u;
        goto L_102509d2;
    }
    eax = rd32(arg1 + 0x1cu);
    ecx = t9;
    edx = t10;
    wr32(sp0 - 0x10u, 1u);
    wr32(sp0 - 0x14u, 0x200u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t11 = cow_cdecl(g, COW_IMG(0x10271bb0u), 2, 0x200u, 1u);
    t12 = g->ecx;
    t13 = g->edx;
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, arg1);
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x102509e0u), 3, arg1, 1u, 0x200u);
    if (rd32(COW_IMG(0x10389338u) + rd32(arg1 + 0xcu) * 4u + rd32(arg1 + 8u) * 0x20u) != 0x3f800000u)
    {
        eax = rd32(arg1 + 0xcu) + rd32(arg1 + 8u) * 8u;
        ecx = rd32(arg1 + 8u);
        edx = rd32(arg1 + 0xcu);
        d14 = (double)rdf32(COW_IMG(0x10389338u) + eax * 4u);
        if (!(d14 < (double)rdf32(COW_IMG(0x1032961cu))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d14, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
            ecx = rd32(COW_IMG(0x103895a8u) + ecx * 4u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d14, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
            ecx = rd32(COW_IMG(0x103895c8u) + ecx * 4u);
        }
    }
    else
    {
        eax = rd32(arg1 + 0xcu) + rd32(arg1 + 8u) * 8u;
        ecx = rd32(arg1 + 8u);
        edx = rd32(arg1 + 0xcu);
        ecx = rd32(COW_IMG(0x10389588u) + ecx * 4u);
    }
    wr32(sp0 - 0x10u, ecx);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10271d90u), 1, ecx);
    t15 = g->edx;
    wr32(sp0 - 0x14u, sp0 + 4u);
    wr32(sp0 - 0x18u, arg1 + 0x198u);
    g->esp = sp0 - 0x10u;
    t16 = cow_call_regs(g, COW_IMG(0x10251430u), sp0 + 4u, g->ecx, g->edx, 1, 2, arg1 + 0x198u, sp0 + 4u);
    if (t16 != 0u)
    {
        edi = 2u;
        goto L_102509d2;
    }
    eax = t16;
    wr32(arg1 + 0x1cu, 2u);
    wr32(arg1 + 0x3cu, arg1);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return eax;
L_10250904: ;
    wr32(sp0 - 0x10u, arg2);
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t17 = cow_call_regs(g, COW_IMG(0x102733d0u), eax, g->ecx, g->edx, 1, 1, arg2);
    t18 = g->ecx;
    t19 = g->edx;
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, arg1);
    g->ecx = t18;
    g->edx = t19;
    t20 = cow_call_regs(g, COW_IMG(0x102505a0u), t17, g->ecx, g->edx, 1, 3, arg1, 0u, arg2);
    t21 = g->ecx;
    t22 = g->edx;
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, arg1);
    g->ecx = t21;
    g->edx = t22;
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x102505a0u), t20, g->ecx, g->edx, 1, 3, arg1, 1u, arg1);
    t23 = g->ecx;
    t24 = g->edx;
    if (rd32(arg1 + 0x1cu) != 2u)
    {
        eax = rd32(arg1 + 0x1cu);
        ecx = t23;
        edx = t24;
        wr32(sp0 - 0x10u, 0u);
        wr32(sp0 - 0x14u, 0x200u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t32 = cow_cdecl(g, COW_IMG(0x10271bb0u), 2, 0x200u, 0u);
        t33 = g->ecx;
        t34 = g->edx;
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x1cu, arg1);
        g->esp = sp0 - 0x10u;
        t35 = cow_cdecl(g, COW_IMG(0x102509e0u), 3, arg1, 0u, 0x200u);
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x24u, arg1 + 0x160u);
        g->esp = sp0 - 0x1cu;
        t36 = cow_call_regs(g, COW_IMG(0x10251430u), t35, g->ecx, g->edx, 1, 2, arg1 + 0x160u, sp0 + 4u);
        eax = t36;
    }
    else
    {
        eax = rd32(arg1 + 0x1cu);
        ecx = t23;
        edx = t24;
        wr32(sp0 - 0x10u, 1u);
        wr32(sp0 - 0x14u, 0x200u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t25 = cow_cdecl(g, COW_IMG(0x10271bb0u), 2, 0x200u, 1u);
        t26 = g->ecx;
        t27 = g->edx;
        wr32(sp0 - 0x18u, 1u);
        wr32(sp0 - 0x1cu, arg1);
        g->edx = t27;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x102509e0u), 3, arg1, 1u, 0x200u);
        t28 = g->edx;
        if (rd32(COW_IMG(0x10389338u) + rd32(arg1 + 0xcu) * 4u + rd32(arg1 + 8u) * 0x20u) != 0x3f800000u)
        {
            eax = rd32(arg1 + 0xcu) + rd32(arg1 + 8u) * 8u;
            ecx = rd32(arg1 + 8u);
            edx = t28;
            d29 = (double)rdf32(COW_IMG(0x10389338u) + eax * 4u);
            if (!(d29 < (double)rdf32(COW_IMG(0x1032961cu))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d29, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
                ecx = rd32(COW_IMG(0x103895a8u) + ecx * 4u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d29, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
                ecx = rd32(COW_IMG(0x103895c8u) + ecx * 4u);
            }
        }
        else
        {
            eax = rd32(arg1 + 0xcu) + rd32(arg1 + 8u) * 8u;
            ecx = rd32(arg1 + 8u);
            edx = t28;
            ecx = rd32(COW_IMG(0x10389588u) + ecx * 4u);
        }
        wr32(sp0 - 0x10u, ecx);
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t30 = cow_cdecl(g, COW_IMG(0x10271d90u), 1, ecx);
        wr32(sp0 - 0x14u, sp0 + 4u);
        wr32(sp0 - 0x18u, arg1 + 0x198u);
        g->esp = sp0 - 0x10u;
        t31 = cow_call_regs(g, COW_IMG(0x10251430u), t30, g->ecx, g->edx, 1, 2, arg1 + 0x198u, sp0 + 4u);
        eax = t31;
    }
    if (eax != 0u)
    {
        edi = arg2;
    }
    else
    {
        wr32(arg1 + 0x3cu, arg1);
        edi = arg2;
    }
L_102509d2: ;
    wr32(arg1 + 0x1cu, edi);
    edi = rd32(sp0 - 0xcu);
L_102509d6: ;
    g->edi = edi;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10250820(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10250820(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
