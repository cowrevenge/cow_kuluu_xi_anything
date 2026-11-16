/* f_0x102925f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102925f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t3;
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

    if (rd32(arg1 + 0x34u) == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(arg1 + 0x34u);
        if (rd8(arg1 + 0x55u) == 0u)
        {
            ecx = (self & 0xffffff00u) | rd8(arg1 + 0x55u);
            if ((int32_t)(rd32(arg1 + 0x1cu) - 1u) < 0)
            {
                edx = in_edx;
                goto L_10292662;
            }
            edi = rd32(arg1 + 0x1cu) - 1u;
L_10292650: ;
            t9 = edi * 4u + rd32(arg1 + 0x34u);
            g->ecx = ecx;
            g->edx = rd32(arg1 + 0x34u);
            t10 = rd32(arg1 + 0x34u);
            g->esp = sp0;
            cow_cdecl(g, COW_IMG(0x10292720u), 3, t9, in_edi, in_esi);
            t11 = g->ecx;
            t12 = g->edx;
            if ((int32_t)(edi - 1u) >= 0)
            {
                ecx = t11;
                edi = edi - 1u;
                goto L_10292650;
            }
            edx = t12;
L_10292662: ;
            t13 = rd32(arg1 + 0x34u);
            g->ecx = t13;
            g->edx = edx;
            g->esp = sp0 - 8u;
            cow_cdecl(g, COW_IMG(0x10276110u), 3, t13, COW_IMG(0x103bb254u), 0x168u);
            t14 = g->ecx;
            t15 = g->edx;
            ecx = t14;
            edx = t15;
        }
        else
        {
            t1 = rd32(rd32(eax) + 4u);
            g->ecx = t1;
            g->esp = sp0 - 4u;
            cow_cdecl(g, COW_IMG(0x10276110u), 3, t1, COW_IMG(0x103bb254u), 0x160u);
            t2 = g->ecx;
            t3 = rd32(rd32(arg1 + 0x34u));
            g->edx = rd32(arg1 + 0x34u);
            t4 = rd32(arg1 + 0x34u);
            g->esp = sp0 - 0x10u;
            cow_cdecl(g, COW_IMG(0x10276110u), 3, t3, COW_IMG(0x103bb254u), 0x161u);
            t5 = g->edx;
            t6 = rd32(arg1 + 0x34u);
            g->ecx = t6;
            g->edx = t5;
            g->esp = sp0 - 0x1cu;
            cow_cdecl(g, COW_IMG(0x10276110u), 3, t6, COW_IMG(0x103bb254u), 0x162u);
            t7 = g->ecx;
            t8 = g->edx;
            wr8(arg1 + 0x55u, 0u);
            ecx = t7;
            edx = t8;
        }
    }
    if (rd32(arg1 + 0x2cu) != 0u)
    {
        eax = rd32(arg1 + 0x2cu);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103bb254u), 0x16du);
        t16 = g->ecx;
        t17 = g->edx;
        ecx = t16;
        edx = t17;
    }
    if (rd32(arg1 + 0x38u) != 0u)
    {
        eax = rd32(arg1 + 0x38u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103bb254u), 0x170u);
        t18 = g->ecx;
        t19 = g->edx;
        ecx = t18;
        edx = t19;
    }
    if (rd32(arg1 + 0x3cu) != 0u)
    {
        eax = rd32(arg1 + 0x3cu);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103bb254u), 0x173u);
        t20 = g->ecx;
        t21 = g->edx;
        ecx = t20;
        edx = t21;
    }
    if (rd32(arg1 + 0x40u) != 0u)
    {
        eax = rd32(arg1 + 0x40u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103bb254u), 0x176u);
        t22 = g->ecx;
        t23 = g->edx;
        ecx = t22;
        edx = t23;
    }
    if (rd32(arg1 + 0x4cu) != 0u)
    {
        eax = rd32(arg1 + 0x4cu);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103bb254u), 0x179u);
        t24 = g->ecx;
        t25 = g->edx;
        ecx = t24;
        edx = t25;
    }
    if (rd32(arg1 + 0x50u) != 0u)
    {
        esi = rd32(arg1 + 0x50u);
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, esi, COW_IMG(0x103bb254u), 0x17cu);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102925f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102925f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
