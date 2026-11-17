/* f_0x101d56a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101d56a0(Guest* g)
{
    double d6;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0xcu, 0x38353038u);
    wr32(sp0 - 8u, 0x39353038u);
    wr32(sp0 - 4u, 0x30363038u);
    wr32(sp0 - 0x10u, in_esi);
    t1 = rd32(arg1 * 4u + sp0 - 0xcu);
    wr32(sp0 - 0x14u, t1);
    wr32(sp0 - 0x18u, 0x3du);
    wr32(sp0 - 0x1cu, sp0 + 4u);
    g->eax = t1;
    g->edx = sp0 + 4u;
    t2 = rd32(rd32(self + 8u));
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall(g, COW_IMG(0x10072290u), t2, 3, sp0 + 4u, 0x3du, t1);
    t4 = g->ecx;
    t5 = g->edx;
    if (rd32(t3) != 0u)
    {
        eax = rd32(t3);
        ecx = t4;
        edx = t5;
        if (rd32(eax) != 0u)
        {
            esi = rd32(eax);
            g->edx = edx;
            d6 = fr(g, (double)rdf32(COW_IMG(0x10351700u)) * (double)rdf32(COW_IMG(0x1032a34cu)));
            fpush(g, d6);
            g->esp = sp0 - 0x10u;
            t7 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            t8 = g->edx;
            wr32(sp0 - 0x14u, t7);
            wr32(sp0 - 0x18u, 0x40u);
            cow_thiscall(g, COW_IMG(0x10036f00u), esi, 2, 0x40u, t7);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d56a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d56a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
