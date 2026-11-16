/* f_0x1014e720 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1014e720(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0x10u, 0xfu);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0xfu, 0xeu);
    t4 = g->edx;
    g->edx = t4;
    t5 = rd32(self + 8u);
    cow_thiscall(g, COW_IMG(0x10118b60u), t5, 2, 0xfu, 0xdu);
    t6 = g->ecx;
    t7 = g->edx;
    t8 = rd32(self + 8u);
    wr8(t8 + 0x86u, 0u);
    g->edx = t7;
    cow_thiscall(g, COW_IMG(0x10037ef0u), t6, 0);
    t9 = g->ecx;
    t10 = g->edx;
    g->edx = t10;
    t11 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t12 = g->edx;
    if ((uint8_t)t11 == 0u)
    {
        eax = t11;
        edx = t12;
    }
    else
    {
        eax = t11;
        edx = t12;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t13 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 5u);
        t14 = g->edx;
        eax = t13;
        edx = t14;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014e720(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014e720(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
