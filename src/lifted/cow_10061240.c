/* f_0x10061240 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10061240(Guest* g)
{
    double d9;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->esp = sp0 - 4u;
    cow_fastcall(g, COW_IMG(0x100610c0u), self, arg1, 3, arg1, arg2, arg3);
    t1 = g->edx;
    wr32(self, COW_IMG(0x1032bce8u));
    wr32(self + 0x34u, COW_IMG(0x1032bcccu));
    wrf32(self + 0x80u, (float)(double)(int32_t)arg3);
    wr32(self + 0x7cu, arg4);
    g->eax = arg4;
    g->edx = t1;
    t2 = cow_thiscall(g, COW_IMG(0x100611d0u), self, 0);
    t3 = g->edx;
    if (t2 != 0u)
    {
        eax = t2;
        edx = t3;
        g->eax = eax;
        g->esp = sp0 - 4u;
        t4 = cow_thiscall(g, COW_IMG(0x100611d0u), self, 0);
        g->edx = rd32(t4);
        t5 = rd32(t4);
        t6 = cow_thiscall(g, rd32(t5 + 0x4cu), t4, 1, 2u);
        t7 = g->edx;
        t8 = cow_thiscall(g, COW_IMG(0x100611d0u), self, 0);
        d9 = (double)rdf32(t8 + 0x744u);
        wrf32(self + 0x78u, (float)d9);
    }
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10061240(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10061240(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
