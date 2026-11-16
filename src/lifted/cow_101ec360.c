/* f_0x101ec360 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101ec360(Guest* g)
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
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint32_t)(int16_t)rd16(self + 0x1cu) != arg1)
    {
        edx = in_edx;
        goto L_101ec37b;
    }
    if ((uint32_t)(int16_t)rd16(self + 0x1eu) == arg2)
    {
        eax = arg1;
        edx = (uint32_t)(int16_t)rd16(self + 0x1eu);
        goto L_101ec3bb;
    }
    edx = (uint32_t)(int16_t)rd16(self + 0x1eu);
L_101ec37b: ;
    wr16(self + 0x1cu, (uint16_t)arg1);
    wr16(self + 0x1eu, (uint16_t)arg2);
    if ((uint16_t)arg1 != 0xffffu)
    {
        g->eax = arg1;
        g->edx = (uint32_t)(int16_t)arg1;
        g->esp = sp0 - 4u;
        t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, (uint32_t)(int16_t)arg1, (uint32_t)(int16_t)arg2);
        t2 = g->edx;
        wr32(self + 0x20u, t1);
        edx = t2;
    }
    else
    {
        wr32(self + 0x20u, 0u);
    }
    t3 = rd32(self + 8u);
    wr16(self + 0x2cu, 0u);
    if (t3 == 0u)
    {
        eax = t3;
    }
    else
    {
        g->eax = rd32(self);
        g->edx = edx;
        t4 = rd32(self);
        g->esp = sp0 - 4u;
        t5 = cow_thiscall(g, rd32(t4 + 0x28u), self, 1, 0u);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
L_101ec3bb: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ec360(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ec360(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
