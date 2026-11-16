/* f_0x1013fc70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1013fc70(Guest* g)
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
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const double xin0 = ST(0);

    g->edx = in_edx;
    t1 = cow_call_regs(g, COW_IMG(0x10140850u), in_eax, g->ecx, g->edx, 1, 1, 0xffffffffu);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x10150cc0u), rd32(COW_IMG(0x1057847cu)), 2, 0u, 2u);
    t4 = g->edx;
    g->edx = t4;
    cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, 0u, 2u);
    t5 = g->edx;
    t6 = rd32(arg1 + 0x70u);
    g->eax = t6;
    g->edx = t5;
    fpush(g, xin0);
    t7 = cow_stdcall(g, COW_IMG(0x1013fd30u), 1, t6);
    t8 = g->edx;
    if ((uint8_t)t7 != 0u)
    {
        eax = t7;
        edx = t8;
    }
    else
    {
        eax = t7;
        t9 = rd32(rd32(COW_IMG(0x1057823cu)) + 8u);
        g->edx = t9;
        g->esp = sp0;
        cow_call_regs(g, COW_IMG(0x1015e530u), eax, COW_IMG(0x10621838u), g->edx, 0, 1, t9);
        t10 = g->edx;
        t11 = rd32(rd32(COW_IMG(0x10578170u)) + 8u);
        g->edx = t10;
        t12 = rd32(COW_IMG(0x10578170u));
        t13 = cow_call_regs(g, COW_IMG(0x1015e530u), t12, COW_IMG(0x10621838u), g->edx, 0, 1, t11);
        t14 = g->edx;
        eax = t13;
        edx = t14;
    }
    g->edx = edx;
    g->top = (g->top + 1u) & 7u;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013fc70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1013fc70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
