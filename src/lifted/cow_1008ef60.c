/* f_0x1008ef60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1008ef60(Guest* g)
{
    uint32_t eax;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd32(self + 0x124u);
    if ((t1 >> 1u & 7u) != 4u)
    {
        eax = t1 >> 1u & 7u;
        ecx = t1;
        goto L_1008ef7c;
    }
    eax = t1 >> 1u & 7u;
    ecx = t1;
    if ((ecx & 0xf0u) == 0u) goto L_1008ef8d;
L_1008ef7c: ;
    if (eax != 0u)
    {
        edx = in_edx;
        goto L_1008efc5;
    }
    if ((ecx & 0xf0u) != 0x40u)
    {
        edx = ecx & 0xf0u;
        goto L_1008efc5;
    }
L_1008ef8d: ;
    t2 = ((ecx << 4u ^ ecx) & 0xf00u) ^ ecx;
    t3 = (t2 & 0xeu) << 3u | (t2 & 0xffffff00u) | (t2 & 0xfu);
    t4 = rd32(self + 0xa0u);
    wr32(self + 0x124u, t3);
    t5 = (t3 >> 1u & 0xffffff00u) | (t3 >> 1u & 7u);
    g->eax = rd32(t4);
    t6 = rd32(t4);
    g->esp = sp0 - 0xcu;
    t7 = cow_thiscall(g, rd32(t6 + 0xa8u), t4, 1, t5);
    return t7;
L_1008efc5: ;
    if (eax >= 4u) goto L_1008f0a2;
    if (rd8(self + 0xeeu) == 6u) goto L_1008f0a2;
    eax = (eax & 0xffffff00u) | rd8(self + 0xeeu);
    if ((uint8_t)eax == 7u) goto L_1008f0a2;
    t8 = rd32(self + 0x124u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t9 = cow_thiscall(g, rd32(rd32(rd32(self + 0xa0u)) + 0xa4u), rd32(self + 0xa0u), 0);
    if ((t8 >> 1u & 7u) != (uint32_t)(int8_t)t9)
    {
        edi = t8;
        goto L_1008f016;
    }
    eax = (uint32_t)(int8_t)t9;
    ebx = t8 >> 1u & 7u;
    edi = t8;
    if (ebx == (edi >> 4u & 0xfu)) goto L_1008f1c0;
L_1008f016: ;
    t10 = ((edi << 4u ^ edi) & 0xf00u) ^ edi;
    t11 = rd32(self + 0xa0u);
    wr32(self + 0x124u, t10);
    t12 = (t10 >> 1u & 0xffffff00u) | (t10 >> 1u & 7u);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(rd32(t11) + 0xa8u), t11, 1, t12);
    if ((rd32(self + 0x120u) >> 8u & 2u) == 0u) goto L_1008f1a8;
    eax = rd32(self + 0x120u);
    if ((eax >> 8u & 0x20u) != 0u) goto L_1008f062;
    if (!(rd32(self + 0x130u) >> 2u & 1u)) goto L_1008f1a8;
L_1008f062: ;
    t13 = rd32(self + 0x124u);
    if ((t13 & 0xf0u) == 0x80u) goto L_1008f1a8;
    eax = t13;
    t14 = rd32(self + 0xa0u);
    t15 = rd32(COW_IMG(0x1035af50u) + (eax >> 1u & 7u) * 4u);
    g->eax = t15;
    g->esp = sp0 - 0xcu;
    t16 = cow_thiscall(g, rd32(rd32(rd32(self + 0xa0u)) + 0x2a0u), t14, 2, t15, t14);
    if ((uint8_t)t16 != 0u) goto L_1008f1a8;
L_1008f184: ;
    t29 = rd32(self + 0xa0u);
    t30 = rd32(COW_IMG(0x1035af50u) + (rd32(self + 0x124u) >> 1u & 7u) * 4u);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(rd32(rd32(self + 0xa0u)) + 0x298u), t29, 3, t30, t29, 0u);
L_1008f1a8: ;
    t31 = rd32(self + 0x124u);
    t32 = (t31 & 0xeu) << 3u | (t31 & 0xffffff00u) | (t31 & 0xfu);
    wr32(self + 0x124u, t32);
    eax = (t31 & 0xffffff00u) | (t31 & 0xfu);
L_1008f1c0: ;
    return eax;
L_1008f0a2: ;
    if ((rd32(self + 0x120u) >> 8u & 2u) == 0u)
    {
        eax = rd32(self + 0x120u);
        goto L_1008f1c0;
    }
    eax = rd32(self + 0x120u);
    if ((eax >> 8u & 0x20u) != 0u) goto L_1008f0c8;
    if (!(rd32(self + 0x130u) >> 2u & 1u)) goto L_1008f1c0;
    edx = rd32(self + 0x130u) >> 2u;
L_1008f0c8: ;
    if (rd32(self + 0xa0u) == 0u) goto L_1008f1c0;
    ecx = rd32(self + 0xa0u);
    if ((rd32(self + 0x128u) & 0x20000000u) == 0u) goto L_1008f1c0;
    t17 = rd32(self + 0x124u);
    g->eax = rd32(ecx);
    t18 = rd32(ecx);
    g->esp = sp0 - 0xcu;
    t19 = cow_thiscall(g, rd32(t18 + 0xa4u), ecx, 0);
    if ((t17 >> 1u & 7u) != (uint32_t)(int8_t)t19)
    {
        edi = t17 >> 1u & 7u;
        goto L_1008f110;
    }
    eax = t19;
    ebx = t17;
    edi = t17 >> 1u & 7u;
    if (edi == (ebx >> 4u & 0xfu)) goto L_1008f1c0;
L_1008f110: ;
    t20 = rd32(self + 0xa0u);
    t21 = rd32(COW_IMG(0x1035af50u) + edi * 4u);
    g->eax = t21;
    g->esp = sp0 - 0xcu;
    t22 = cow_thiscall(g, rd32(rd32(t20) + 0x2a0u), t20, 2, t21, t20);
    if ((uint8_t)t22 != 0u)
    {
        eax = t22;
        goto L_1008f1c0;
    }
    t23 = rd32(self + 0x124u);
    t24 = ((t23 << 4u ^ t23) & 0xf00u) ^ t23;
    t25 = rd32(self + 0xa0u);
    wr32(self + 0x124u, t24);
    t26 = (t24 >> 1u & 0xffffff00u) | (t24 >> 1u & 7u);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(rd32(t25) + 0xa8u), t25, 1, t26);
    if ((rd32(self + 0x124u) >> 4u & 0xfu) != 8u)
    {
        eax = rd32(self + 0x124u) >> 4u & 0xfu;
        t27 = rd32(self + 0xa0u);
        t28 = rd32(COW_IMG(0x1035af50u) + eax * 4u);
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, rd32(rd32(t27) + 0x29cu), t27, 2, t28, t27);
    }
    goto L_1008f184;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008ef60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1008ef60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
