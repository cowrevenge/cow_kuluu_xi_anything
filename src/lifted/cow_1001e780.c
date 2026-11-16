/* f_0x1001e780 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1001e780(Guest* g)
{
    double d5;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, self + 0x44u);
    wr32(sp0 - 0x20u, arg1);
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    g->ecx = sp0 - 0x10u;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x10u, arg1, self + 0x44u);
    t1 = g->ecx;
    wr32(sp0 - 0x28u, sp0 - 0x10u);
    g->ecx = t1;
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x24u;
    t2 = cow_cdecl(g, COW_IMG(0x10027600u), 1, sp0 - 0x10u);
    t3 = g->ecx;
    t4 = g->edx;
    d5 = cow_take_float(g);
    if ((cow_fsw(g, d5, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d5, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d5, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        ecx = t3;
        edx = t4;
        wr32(sp0 - 0x1cu, arg1);
        wr32(sp0 - 0x20u, self + 0x50u);
        g->eax = eax;
        g->esp = sp0 - 0x18u;
        t6 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x50u, arg1);
        eax = t6;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001e780(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1001e780(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
