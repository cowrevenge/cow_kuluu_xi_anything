/* f_0x101ccec0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101ccec0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = (uint32_t)(int8_t)rd8(self + 6u);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_cdecl(g, COW_IMG(0x101cce60u), 1, t1);
    t3 = g->edx;
    if ((int32_t)rd32(arg1) >= (int32_t)rd8(t2))
    {
        edx = t3;
        esi = t2;
    }
    else
    {
        eax = rd8(t2);
        edx = t3;
        esi = t2;
        wr32(arg1, eax);
    }
    if ((int32_t)rd32(arg3) < (int32_t)rd8(esi + 2u))
    {
        eax = rd8(esi + 2u);
        wr32(arg3, eax);
    }
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_thiscall(g, COW_IMG(0x101ceaf0u), self, 0);
    t5 = g->edx;
    if ((int32_t)(t4 + rd32(arg1)) < (int32_t)rd8(esi + 1u))
    {
        edx = t5;
    }
    else
    {
        edx = t5;
        g->esp = sp0 - 0x10u;
        t6 = cow_thiscall(g, COW_IMG(0x101ceaf0u), self, 0);
        t7 = rd8(esi + 1u) - t6;
        wr32(arg1, t7);
        edx = t7;
    }
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t8 = cow_thiscall(g, COW_IMG(0x101ceb40u), self, 0);
    t9 = g->edx;
    if ((int32_t)(t8 + rd32(arg3)) >= (int32_t)rd8(esi + 3u))
    {
        edx = t9;
        g->esp = sp0 - 0x10u;
        t10 = cow_thiscall(g, COW_IMG(0x101ceb40u), self, 0);
        t11 = rd8(esi + 3u) - t10;
        wr32(arg3, t11);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ccec0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101ccec0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
