/* f_0x1018b620 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1018b620(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t in_esi = g->esi;

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x10081a30u), 0);
    t2 = g->edx;
    t3 = cow_call_regs(g, COW_IMG(0x10187030u), t1, self, t2, 1, 0);
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x10186db0u), rd32(COW_IMG(0x10631f24u)), 0);
    t6 = g->edx;
    g->esi = self;
    t7 = cow_call_regs(g, COW_IMG(0x10188a10u), t5, self, t6, 1, 0);
    t8 = g->edx;
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x1018bc40u), self + 0x1c8u, 1, 0xffffffffu);
    t10 = g->edx;
    wr16(self + 0x1ccu, 0u);
    t11 = rd32(COW_IMG(0x10631f24u));
    cow_thiscall(g, COW_IMG(0x10178f70u), t11, 0);
    t12 = g->ecx;
    wr32(self + 0x1acu, 0u);
    if (rd32(COW_IMG(0x104568fcu)) == 0u)
    {
        eax = rd32(COW_IMG(0x104568fcu));
    }
    else
    {
        eax = rd32(COW_IMG(0x104568fcu));
        ecx = t12;
        wr32(eax + 0x330u, 0x3f800000u);
        wr8(eax + 0x32eu, 0x80u);
        wr8(eax + 0x32du, 0x80u);
        wr8(eax + 0x32cu, 0x80u);
        wr8(eax + 0x32fu, 0u);
    }
    g->esi = in_esi;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018b620(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018b620(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
