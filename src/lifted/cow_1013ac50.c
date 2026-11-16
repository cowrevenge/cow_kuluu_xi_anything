/* f_0x1013ac50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1013ac50(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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

    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x1013cba0u), arg1, self, in_edx, 0, 1, arg1);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x1013ad50u), self, 0);
    t4 = g->edx;
    if ((rd8(self + 0x3a8u) & 3u) == 0u)
    {
        eax = rd8(self + 0x3a8u) & 3u;
        edx = t4;
        goto L_1013acc5;
    }
    eax = rd8(self + 0x3a8u) & 3u;
    edx = t4;
    if (eax == 1u) goto L_1013ac9e;
    eax = eax - 1u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_1013ad34;
    }
    eax = eax - 1u;
    t5 = rd32(self + 8u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t6 = cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, t5, 1u);
    t7 = g->edx;
    t8 = rd8(self + 0x3a8u);
    wr8(self + 0x3a8u, t8 & 0xfcu);
    g->edx = t7;
    return (t6 & 0xffffff00u) | (t8 & 0xfcu);
L_1013ac9e: ;
    t9 = rd32(rd32(self + 8u) + 0x34u) | 1u;
    t10 = rd32(self + 8u);
    wr32(t10 + 0x34u, t9);
    t11 = rd8(self + 0x3a8u);
    wr8(self + 0x3a8u, (uint8_t)(((t11 + 1u ^ t11) & 3u) ^ t11));
    g->edx = (t9 & 0xffffff00u) | (((t11 + 1u ^ t11) & 3u) ^ t11);
    return (t10 & 0xffffff00u) | t11;
L_1013acc5: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t12 = cow_call_regs(g, COW_IMG(0x10160700u), eax, COW_IMG(0x10621838u), g->edx, 1, 0);
    t13 = g->ecx;
    t14 = g->edx;
    if ((uint8_t)t12 != 0u)
    {
        eax = t12;
        ecx = t13;
        edx = t14;
        goto L_1013ad02;
    }
    eax = t12;
    ecx = t13;
    edx = t14;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t15 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x76u, 4u, 0xffffffffu);
    t16 = g->ecx;
    t17 = g->edx;
    if ((uint8_t)t15 != 0u)
    {
        eax = t15;
        ecx = t16;
        edx = t17;
        goto L_1013acfe;
    }
    eax = t15;
    ecx = t16;
    edx = t17;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t18 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x89u, 4u, 0xffffffffu);
    t19 = g->ecx;
    t20 = g->edx;
    if ((uint8_t)t18 == 0u)
    {
        eax = t18;
        ecx = t19;
        edx = t20;
        goto L_1013ad02;
    }
    eax = t18;
    ecx = t19;
    edx = t20;
L_1013acfe: ;
    eax = (eax & 0xffffff00u) | 1u;
L_1013ad04: ;
    t21 = rd8(self + 0x3a9u);
    wr8(self + 0x3a9u, (uint8_t)eax);
    if ((uint8_t)t21 != (uint8_t)eax)
    {
        ecx = ((ecx | t21) & 0xffffff00u) | (uint8_t)t21 != (uint8_t)eax;
        if ((uint8_t)eax != 0u)
        {
            t22 = rd8(self + 0x3a8u);
            wr8(self + 0x3a8u, (uint8_t)(((t22 + 1u ^ t22) & 3u) ^ t22));
            eax = (eax & 0xffffff00u) | t22;
        }
    }
L_1013ad34: ;
    g->edx = edx;
    return eax;
L_1013ad02: ;
    eax = eax & 0xffffff00u;
    goto L_1013ad04;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013ac50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1013ac50(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
