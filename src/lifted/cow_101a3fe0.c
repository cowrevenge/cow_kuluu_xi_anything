/* f_0x101a3fe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101a3fe0(Guest* g)
{
    uint32_t eax;
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

    if ((uint32_t)(int16_t)rd16(sp0 + 4u) - 1u > 5u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
        edx = in_edx;
        goto L_101a4089;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
    t1 = rd32(COW_IMG(0x101a4090u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x101a3ff9u: goto L_101a3ff9;
    case 0x101a4016u: goto L_101a4016;
    case 0x101a4043u: goto L_101a4043;
    case 0x101a4068u: goto L_101a4068;
    case 0x101a4089u: edx = in_edx; goto L_101a4089;
    default: rt_fatal(g, COW_IMG(0x101a3ff2u), "switch");
    }
    return 0;
L_101a3ff9: ;
    t18 = (eax & 0xffffff00u) | (uint8_t)(rd8(sp0 + 8u) - 1u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t19 = cow_call_regs(g, COW_IMG(0x101a3300u), t18, rd32(self + 0x24u), g->edx, 0, 2, 2u, t18);
    t20 = g->edx;
    g->edx = t20;
    t21 = cow_call_regs(g, COW_IMG(0x101a3350u), t19, rd32(self + 0x24u), g->edx, 1, 0);
    t22 = g->edx;
    g->edx = t22;
    return t21;
L_101a4016: ;
    t14 = (self & 0xffffff00u) | (uint8_t)(rd8(sp0 + 8u) - 1u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t15 = cow_call_regs(g, COW_IMG(0x101a3390u), eax, rd32(self + 0x24u), g->edx, 0, 2, 2u, t14);
    t16 = g->edx;
    t17 = rd32(COW_IMG(0x1057847cu));
    wr32(sp0 + 8u, 2u);
    wr32(sp0 + 4u, 0u);
    g->esp = sp0;
    g->edx = t16;
    return cow_tailcall(g, COW_IMG(0x10150cc0u), t15, t17, t16);
L_101a4043: ;
    if (rd8(self + 0x28u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x28u);
        edx = in_edx;
        goto L_101a4089;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x28u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t8 = cow_thiscall(g, COW_IMG(0x101a2a70u), rd32(self + 0x20u), 1, 2u);
    t9 = g->edx;
    g->edx = t9;
    t10 = cow_call_regs(g, COW_IMG(0x101a43b0u), t8, self, g->edx, 0, 1, 1u);
    t11 = g->edx;
    g->edx = t11;
    t12 = cow_thiscall(g, COW_IMG(0x101a43a0u), self, 0);
    t13 = g->edx;
    g->edx = t13;
    return t12;
L_101a4068: ;
    if (rd8(self + 0x28u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x28u);
        edx = in_edx;
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x28u);
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t2 = cow_thiscall(g, COW_IMG(0x101a2a50u), rd32(self + 0x20u), 1, 2u);
        t3 = g->edx;
        g->edx = t3;
        t4 = cow_call_regs(g, COW_IMG(0x101a43b0u), t2, self, g->edx, 0, 1, 1u);
        t5 = g->edx;
        g->edx = t5;
        t6 = cow_thiscall(g, COW_IMG(0x101a43a0u), self, 0);
        t7 = g->edx;
        eax = t6;
        edx = t7;
    }
L_101a4089: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a3fe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a3fe0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
