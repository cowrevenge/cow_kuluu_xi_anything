/* f_0x101e1530 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101e1530(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
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

    if ((uint32_t)(int16_t)rd16(sp0 + 4u) == 5u) goto L_101e156a;
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 5u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        edx = in_edx;
        goto L_101e15b1;
    }
    eax = eax - 1u;
    if (rd32(self + 8u) == 0u) goto L_101e155d;
    ecx = rd32(self + 8u);
    wr32(sp0 + 8u, 1u);
    wr32(sp0 + 4u, 0xau);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x10118db0u), eax, ecx, in_edx);
L_101e155d: ;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t3 = cow_fastcall(g, COW_IMG(0x101e0f20u), self, in_edx, 1, 1u);
    t4 = g->edx;
    g->edx = t4;
    return t3;
L_101e156a: ;
    if ((uint32_t)(int16_t)rd16(sp0 + 8u) == 9u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 9u;
        goto L_101e1596;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 9u;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_101e155d;
    }
    t1 = rd32(COW_IMG(0x10663740u));
    wr32(sp0 + 8u, 0u);
    t2 = rd32(t1 + 8u);
    wr32(sp0 + 4u, t2);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x1015db80u), t1, COW_IMG(0x10621838u), in_edx);
L_101e1596: ;
    g->esp = sp0 - 4u;
    t5 = cow_call_regs(g, COW_IMG(0x101e08e0u), eax, self, in_edx, 1, 0);
    t6 = g->ecx;
    t7 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        goto L_101e15ac;
    }
    eax = t5;
    edx = t7;
    wr32(self + 0x4cu, 0u);
    g->edx = edx;
    return eax;
L_101e15ac: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t8 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t9 = g->edx;
    eax = t8;
    edx = t9;
L_101e15b1: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e1530(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e1530(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
