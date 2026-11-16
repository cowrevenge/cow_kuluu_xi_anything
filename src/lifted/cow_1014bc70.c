/* f_0x1014bc70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1014bc70(Guest* g)
{
    uint32_t eax;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x1014bd60u), self, 0);
    t2 = g->edx;
    if ((uint32_t)(int16_t)arg1 == 5u)
    {
        edx = t2;
        edi = t1;
        goto L_1014bca3;
    }
    edx = t2;
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        goto L_1014bd10;
    }
    t3 = rd32(self + 8u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x1015e790u), t3, COW_IMG(0x10621838u), g->edx, 0, 2, t3, 1u);
    t5 = g->edx;
    g->edx = t5;
    return t4 & 0xffffff00u;
L_1014bca3: ;
    if ((int32_t)edi >= 0) goto L_1014bcbe;
    t6 = rd32(self + 8u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_call_regs(g, COW_IMG(0x1015e790u), (uint32_t)(int16_t)arg1 - 5u, COW_IMG(0x10621838u), g->edx, 0, 2, t6, 1u);
    t8 = g->edx;
    g->edx = t8;
    return t7 & 0xffffff00u;
L_1014bcbe: ;
    g->eax = (uint32_t)(int16_t)arg1 - 5u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t9 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
    t10 = g->edx;
    wr8(self + 0x5au, (uint8_t)t9);
    if (rd8(self + 0x5bu) == 0u)
    {
        eax = (t9 & 0xffffff00u) | rd8(self + 0x5bu);
        edx = t10;
        goto L_1014bcfb;
    }
    eax = (t9 & 0xffffff00u) | rd8(self + 0x5bu);
    edx = t10;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t11 = cow_call_regs(g, COW_IMG(0x1014c020u), g->eax, g->ecx, edx, 0, 1, edi);
    t12 = g->edx;
    if ((uint8_t)t11 != 0u)
    {
        eax = t11;
        edx = t12;
        goto L_1014bd10;
    }
    eax = t11;
    edx = t12;
    g->eax = eax;
    g->ecx = self;
    g->esp = sp0 - 8u;
    t13 = cow_call_regs(g, COW_IMG(0x1014c070u), g->eax, g->ecx, edx, 0, 1, edi);
    t14 = g->ecx;
    t15 = g->edx;
    if ((uint8_t)t13 == 0u)
    {
        eax = t13;
        edx = t15;
        goto L_1014bd10;
    }
    eax = t13;
    ecx = t14;
    edx = t15;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t16 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t17 = g->edx;
    t18 = cow_call_regs(g, COW_IMG(0x1014c0f0u), t16, g->ecx, t17, 0, 1, edi);
    t19 = g->edx;
    g->edx = t19;
    return (t18 & 0xffffff00u) | 1u;
L_1014bcfb: ;
    g->eax = eax;
    g->edx = edx;
    t20 = rd32(COW_IMG(0x10578158u));
    g->esp = sp0 - 8u;
    t21 = cow_thiscall(g, COW_IMG(0x10129e30u), t20, 1, 0xb2u);
    t22 = g->ecx;
    t23 = g->edx;
    g->edx = t23;
    t24 = cow_thiscall(g, COW_IMG(0x10037c50u), t22, 0);
    t25 = g->edx;
    eax = t24;
    edx = t25;
L_1014bd10: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014bc70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014bc70(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
