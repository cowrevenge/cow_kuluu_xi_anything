/* f_0x101d6d10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101d6d10(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint32_t)(int16_t)arg1 == 5u) goto L_101d6d4c;
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        edx = in_edx;
        goto L_101d6d62;
    }
    if (rd32(self + 0x14u) == 0u)
    {
        eax = rd32(self + 0x14u);
        edx = in_edx;
        goto L_101d6d5b;
    }
    eax = rd32(self + 0x14u);
    t1 = ((uint16_t)arg2 != 1u) * 8u + 1u;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall_cdecl(g, eax, t1, 2, t1, 1u);
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x101d6cc0u), self, 0);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_101d6d4c: ;
    if (rd32(self + 0x14u) == 0u)
    {
        eax = rd32(self + 0x14u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x14u);
        t6 = ((uint16_t)arg2 != 1u) * 8u + 1u;
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t7 = cow_thiscall_cdecl(g, eax, t6, 2, t6, 0u);
        t8 = g->edx;
        eax = t7;
        edx = t8;
    }
L_101d6d5b: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t9 = cow_thiscall(g, COW_IMG(0x101d6cc0u), self, 0);
    t10 = g->edx;
    eax = t9;
    edx = t10;
L_101d6d62: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d6d10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d6d10(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
