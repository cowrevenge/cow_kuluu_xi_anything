/* f_0x101d88d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101d88d0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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

    t1 = rd32(rd32(COW_IMG(0x10578204u)) + 8u);
    g->edx = in_edx;
    t2 = rd32(COW_IMG(0x10578204u));
    g->esp = sp0 - 8u;
    t3 = cow_call_regs(g, COW_IMG(0x1015e790u), t1, COW_IMG(0x10621838u), g->edx, 0, 2, t1, 1u);
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x1013bf40u), t2, 0);
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037eea0u));
    t8 = g->edx;
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037ee8cu));
    t10 = g->edx;
    if ((int16_t)rd16(self + 0x89au) < 0)
    {
        eax = (t9 & 0xffff0000u) | rd16(self + 0x89au);
        edx = t10;
    }
    else
    {
        eax = (t9 & 0xffff0000u) | rd16(self + 0x89au);
        edx = t10;
        g->edx = edx;
        g->esp = sp0;
        t11 = cow_call_regs(g, COW_IMG(0x101d8140u), eax, rd32(COW_IMG(0x10663428u)), g->edx, 0, 2, (uint32_t)(int16_t)eax, 1u);
        t12 = g->edx;
        eax = t11;
        edx = t12;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d88d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d88d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
