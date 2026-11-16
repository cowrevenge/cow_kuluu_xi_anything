/* f_0x1023d5b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1023d5b0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x14u) == 1u)
    {
        eax = rd32(self + 0x14u);
        edx = 1u;
        goto L_1023d607;
    }
    if ((uint32_t)(int16_t)arg1 - 1u > 8u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = 1u;
        goto L_1023d607;
    }
    t1 = rd32(COW_IMG(0x1023d60cu) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x1023d5ceu: goto L_1023d5ce;
    case 0x1023d5dcu: goto L_1023d5dc;
    case 0x1023d5f1u: goto L_1023d5f1;
    case 0x1023d5f9u: goto L_1023d5f9;
    case 0x1023d607u: eax = (uint32_t)(int16_t)arg1 - 1u; edx = 1u; goto L_1023d607;
    default: rt_fatal(g, COW_IMG(0x1023d5c7u), "switch");
    }
    return 0;
L_1023d5ce: ;
    if (rd32(self + 0x18u) == 0u)
    {
        eax = rd32(self + 0x18u);
        edx = 1u;
        goto L_1023d607;
    }
    eax = rd32(self + 0x18u);
    wr32(self + 0x18u, eax - 1u);
    g->edx = 1u;
    return eax - 1u;
L_1023d5dc: ;
    if (rd32(self + 0x18u) == rd32(self + 0xa5bcu) - 1u)
    {
        eax = rd32(self + 0x18u);
        edx = rd32(self + 0xa5bcu) - 1u;
        goto L_1023d607;
    }
    eax = rd32(self + 0x18u);
    edx = rd32(self + 0xa5bcu) - 1u;
    wr32(self + 0x18u, eax + 1u);
    g->edx = edx;
    return eax + 1u;
L_1023d5f1: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = 1u;
    g->esp = sp0;
    t5 = cow_thiscall(g, COW_IMG(0x10037b30u), self, 0);
    t6 = g->edx;
    g->edx = t6;
    return t5;
L_1023d5f9: ;
    t2 = rd32(self + 8u);
    wr32(self + 0x14u, 1u);
    wr8(t2 + 0x5du, 1u);
    g->eax = t2;
    g->edx = 1u;
    g->esp = sp0;
    t3 = cow_thiscall(g, COW_IMG(0x10037b90u), self, 0);
    t4 = g->edx;
    eax = t3;
    edx = t4;
L_1023d607: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023d5b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1023d5b0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
