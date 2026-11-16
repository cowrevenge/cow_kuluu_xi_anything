/* f_0x1008f2f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1008f2f0(Guest* g)
{
    uint32_t eax;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if (arg1 == 0u)
    {
        eax = in_eax;
    }
    else
    {
        g->eax = rd32(arg1);
        t1 = rd32(arg1);
        g->esp = sp0 - 0x18u;
        t2 = cow_thiscall(g, rd32(t1 + 0x1bcu), arg1, 0);
        wr32(sp0 - 0x10u, rd32(t2));
        t3 = cow_thiscall(g, rd32(rd32(arg1) + 0x1bcu), arg1, 0);
        t4 = rd32(t3 + 4u);
        wr32(sp0 - 0xcu, t4);
        g->eax = t4;
        t5 = cow_thiscall(g, rd32(rd32(arg1) + 0x1bcu), arg1, 0);
        t6 = rd32(t5 + 8u);
        wr32(sp0 - 8u, t6);
        g->eax = t6;
        g->edx = rd32(arg1);
        t7 = rd32(arg1);
        t8 = cow_thiscall(g, rd32(t7 + 0x1bcu), arg1, 0);
        t9 = g->edx;
        wr32(sp0 - 0x1cu, sp0 - 0x10u);
        t10 = rd32(t8 + 0xcu);
        wr32(sp0 - 4u, t10);
        g->esi = arg1;
        g->eax = t10;
        t11 = cow_thiscall(g, COW_IMG(0x1008f360u), self, 1, sp0 - 0x10u);
        eax = t11;
    }
    g->esi = in_esi;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008f2f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1008f2f0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
