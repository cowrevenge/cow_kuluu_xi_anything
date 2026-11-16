/* f_0x10145760 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10145760(Guest* g)
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

    if (rd16(sp0 + 4u) != 6u)
    {
        eax = (in_eax & 0xffff0000u) | rd16(sp0 + 4u);
        goto L_10145784;
    }
    t1 = rd32(self + 8u);
    wr32(sp0 + 8u, 1u);
    wr32(sp0 + 4u, t1);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x1015e790u), t1, COW_IMG(0x10621838u), in_edx);
L_10145784: ;
    if ((uint16_t)eax != 5u)
    {
        edx = in_edx;
        goto L_10145807;
    }
    g->ecx = self;
    g->esp = sp0;
    t2 = cow_call_regs(g, COW_IMG(0x101cc0d0u), eax, g->ecx, in_edx, 1, 2, 4u, 0u);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 != 0u)
    {
        ecx = t3;
        edx = t4;
        goto L_101457a2;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t5 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t6 = g->edx;
    g->edx = t6;
    return t5;
L_101457a2: ;
    g->edx = edx;
    t7 = rd32(COW_IMG(0x105782b4u));
    g->esp = sp0 - 4u;
    t8 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
    t9 = g->edx;
    if (rd32(t7 + 0x18u) < t8)
    {
        edx = t9;
        goto L_101457be;
    }
    eax = t8;
    ecx = rd32(t7 + 0x18u);
    edx = t9;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t10 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t11 = g->edx;
    g->edx = t11;
    return t10;
L_101457be: ;
    if ((uint32_t)(int16_t)rd16(sp0 + 8u) == 1u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 1u;
        goto L_101457f6;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 1u;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_101457e2;
    }
    eax = eax - 1u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_10145807;
    }
    g->edx = edx;
    g->esp = sp0;
    t12 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103715f8u), 1u, 0u);
    t13 = g->edx;
    g->edx = t13;
    return t12;
L_101457e2: ;
    if (rd32(COW_IMG(0x105782c8u)) == 0u) goto L_10145807;
    ecx = rd32(COW_IMG(0x105782c8u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t14 = cow_thiscall(g, COW_IMG(0x10145ba0u), ecx, 1, 1u);
    t15 = g->edx;
    g->edx = t15;
    return t14;
L_101457f6: ;
    if (rd32(COW_IMG(0x105782d0u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105782d0u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0;
        t16 = cow_thiscall(g, COW_IMG(0x10145c70u), ecx, 1, 1u);
        t17 = g->edx;
        eax = t16;
        edx = t17;
    }
L_10145807: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10145760(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10145760(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
