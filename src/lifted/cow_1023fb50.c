/* f_0x1023fb50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1023fb50(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 0x28u) == 1u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_1023fbd2;
    }
    if ((int32_t)((uint32_t)(int16_t)arg2 - 1u) <= 0)
    {
        ecx = rd32(COW_IMG(0x10662da0u));
        t2 = rd32(self + 0x34u);
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x101c6870u), ecx, 1, t2);
        t3 = g->edx;
        edx = t3;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10662da0u));
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x101c68a0u), (uint32_t)(int16_t)arg2, ecx, in_edx, 1, 0);
        t1 = g->edx;
        edx = t1;
    }
    if ((uint32_t)(int16_t)arg1 - 1u > 8u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        goto L_1023fbd2;
    }
    t4 = rd32(COW_IMG(0x1023fbd8u) + rd8(COW_IMG(0x1023fbe4u) + (uint32_t)(int16_t)arg1 - 1u) * 4u);
    switch (t4 - RD)
    {
    case 0x1023fb96u: ecx = rd8(COW_IMG(0x1023fbe4u) + (uint32_t)(int16_t)arg1 - 1u); goto L_1023fb96;
    case 0x1023fbadu: ecx = rd8(COW_IMG(0x1023fbe4u) + (uint32_t)(int16_t)arg1 - 1u); goto L_1023fbad;
    case 0x1023fbd2u: eax = (uint32_t)(int16_t)arg1 - 1u; goto L_1023fbd2;
    default: rt_fatal(g, COW_IMG(0x1023fb8fu), "switch");
    }
    return 0;
L_1023fb96: ;
    t11 = (uint32_t)(int16_t)arg2 - 1u;
    t12 = rd32(self + 0x30u);
    wr32(self + 0x24u, t11);
    if (t11 == t12)
    {
        eax = t12;
        goto L_1023fbd2;
    }
    eax = t12;
    esi = t11;
    wr32(self + 0x30u, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t13 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    t14 = g->edx;
    g->edx = t14;
    return t13;
L_1023fbad: ;
    t5 = (uint32_t)(int16_t)arg2 - 1u;
    wr32(self + 0x24u, t5);
    if ((int32_t)((uint32_t)(int16_t)arg2 - 1u) <= 0)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
    }
    else
    {
        t6 = rd32(self + 8u);
        wr8(t6 + 0x5du, 1u);
        wr32(self + 0x28u, 1u);
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        g->edx = t6;
        g->esp = sp0 - 8u;
        t7 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
        t8 = g->edx;
        t9 = cow_call_regs(g, COW_IMG(0x101c68a0u), t7, rd32(COW_IMG(0x10662da0u)), t8, 1, 0);
        t10 = g->edx;
        eax = t9;
        edx = t10;
    }
L_1023fbd2: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023fb50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1023fb50(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
