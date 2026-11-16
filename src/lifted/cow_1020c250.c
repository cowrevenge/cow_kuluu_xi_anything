/* f_0x1020c250 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1020c250(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x1020a420u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t3;
        goto L_1020c355;
    }
    ecx = t2;
    edx = t3;
    edi = t1;
    if (rd32(edi) == 1u)
    {
        eax = rd32(edi);
        goto L_1020c355;
    }
    eax = rd32(edi);
    if (eax != 2u) goto L_1020c2f9;
    if (rd32(self + 0x58u) == 1u) goto L_1020c28a;
    esi = rd32(self + 0x58u);
    if (esi == eax) goto L_1020c28a;
    g->edx = edx;
    return eax & 0xffffff00u;
L_1020c28a: ;
    if (((uint32_t)((int32_t)rd32(edi + 0x44u) >> 4u) & 0xfu) - 1u != 6u)
    {
        eax = ((uint32_t)((int32_t)rd32(edi + 0x44u) >> 4u) & 0xfu) - 1u;
        goto L_1020c2a0;
    }
    eax = ((uint32_t)((int32_t)rd32(edi + 0x44u) >> 4u) & 0xfu) - 1u;
    g->edx = edx;
    return eax & 0xffffff00u;
L_1020c2a0: ;
    if (eax != 5u) goto L_1020c2ac;
    g->edx = edx;
    return eax & 0xffffff00u;
L_1020c2ac: ;
    t4 = eax * 0x10u + 0x10u;
    if (rd8(COW_IMG(0x10385a08u) + eax) == 3u)
    {
        eax = t4;
        loc_c = t4;
        goto L_1020c2e7;
    }
    ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x10385a08u) + eax);
    eax = t4;
    loc_c = t4;
    if ((uint8_t)ecx == 7u) goto L_1020c2d5;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, COW_IMG(0x1020d910u), rd32(COW_IMG(0x106644c8u)), 2, 2u, loc_c);
    t6 = g->edx;
    g->edx = t6;
    return (t5 & 0xffffff00u) | 1u;
L_1020c2d5: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_thiscall(g, COW_IMG(0x1020dab0u), rd32(COW_IMG(0x106644d0u)), 2, 2u, loc_c);
    t8 = g->edx;
    g->edx = t8;
    return (t7 & 0xffffff00u) | 1u;
L_1020c2e7: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t9 = cow_thiscall(g, COW_IMG(0x1020d9e0u), rd32(COW_IMG(0x106644ccu)), 2, 2u, loc_c);
    t10 = g->edx;
    g->edx = t10;
    return (t9 & 0xffffff00u) | 1u;
L_1020c2f9: ;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t11 = cow_call_regs(g, COW_IMG(0x1020b3e0u), edi + 4u, g->ecx, g->edx, 0, 1, edi + 4u);
    t12 = g->ecx;
    t13 = g->edx;
    if ((uint8_t)t11 != 0u)
    {
        edx = t13;
    }
    else
    {
        eax = t11;
        ecx = t12;
        edx = t13;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
        t14 = g->edx;
        edx = t14;
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    t15 = cow_thiscall(g, COW_IMG(0x1020c440u), self, 0);
    t16 = g->edx;
    if ((uint8_t)t15 == 0u)
    {
        edx = t16;
        goto L_1020c33b;
    }
    edx = t16;
    if ((rd32(edi + 0x34u) & 0x20000000u) == 0u) goto L_1020c33b;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t17 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385a3cu), 1u, 0u);
    t18 = g->edx;
    g->edx = t18;
    return (t17 & 0xffffff00u) | 1u;
L_1020c33b: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t19 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385a50u), 1u, 0u);
    t20 = g->edx;
    g->edx = t20;
    return (t19 & 0xffffff00u) | 1u;
L_1020c355: ;
    if (rd32(self + 0x58u) == 1u) goto L_1020c369;
    esi = rd32(self + 0x58u);
    if (esi == 2u) goto L_1020c369;
    g->edx = edx;
    return eax & 0xffffff00u;
L_1020c369: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t21 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385a64u), 1u, 0u);
    t22 = g->edx;
    g->edx = t22;
    return (t21 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020c250(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020c250(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
