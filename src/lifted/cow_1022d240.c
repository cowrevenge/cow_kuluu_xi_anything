/* f_0x1022d240 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1022d240(Guest* g)
{
    uint32_t eax;
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
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint8_t)arg2 != 1u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        t1 = rd32(rd32(COW_IMG(0x10667a70u)) + 0x68u);
        t2 = rd32(rd32(COW_IMG(0x10667a70u)) + 0x64u);
        g->esp = sp0;
        cow_call_regs(g, COW_IMG(0x1022c070u), rd32(COW_IMG(0x10667a70u)), rd32(COW_IMG(0x10667a7cu)), g->edx, 0, 2, t2, t1);
        t3 = rd32(rd32(COW_IMG(0x10667a70u)) + 0x68u);
        t4 = rd32(rd32(COW_IMG(0x10667a70u)) + 0x64u);
        g->edx = t4;
        cow_thiscall(g, COW_IMG(0x1022c3a0u), rd32(COW_IMG(0x10667a70u)), 3, t4, 1u, t3);
        t5 = g->edx;
        t6 = rd32(rd32(COW_IMG(0x10667a70u)) + 8u);
        g->eax = rd32(COW_IMG(0x10667a70u));
        t7 = rd32(COW_IMG(0x10667a70u));
        t8 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t5, 2, t6, 0u);
        t9 = g->edx;
        eax = t8;
        edx = t9;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022d240(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022d240(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
