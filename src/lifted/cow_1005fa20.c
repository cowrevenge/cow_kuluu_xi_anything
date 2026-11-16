/* f_0x1005fa20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=7 */
uint32_t cow_fn_1005fa20(Guest* g)
{
    double d11;
    double d12;
    double d13;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->esp = sp0 - 0xcu;
    cow_fastcall(g, COW_IMG(0x10074790u), self, in_edx, 1, arg1);
    t1 = g->edx;
    g->edx = t1;
    t2 = cow_thiscall(g, COW_IMG(0x1003b540u), self + 0x34u, 0);
    t3 = g->edx;
    wr32(self + 0x7cu, arg3);
    wr32(self, COW_IMG(0x1032bac4u));
    wr32(self + 0x34u, COW_IMG(0x1032baa8u));
    t4 = cow_thiscall(g, COW_IMG(0x1003b7b0u), self + 0x34u, 1, arg2);
    wrf32(self + 0x74u, (float)(double)(int32_t)arg7);
    wrf32(self + 0x78u, (float)(double)(int32_t)arg7);
    t5 = cow_thiscall(g, rd32(rd32(arg2) + 0x1c0u), arg2, 0);
    t6 = rd32(t5);
    wr32(self + 0x80u, t6);
    g->eax = t6;
    t7 = cow_thiscall(g, rd32(rd32(arg2) + 0x1c0u), arg2, 0);
    t8 = rd32(t7 + 4u);
    wr32(self + 0x84u, t8);
    g->eax = t8;
    t9 = cow_thiscall(g, rd32(rd32(arg2) + 0x1c0u), arg2, 0);
    t10 = rd32(t9 + 8u);
    d11 = fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x1032a9f4u)));
    wr32(self + 0x9cu, 0x3f800000u);
    wr32(self + 0x88u, t10);
    wrf32(self + 0x90u, (float)d11);
    d12 = fr(g, (double)rdf32(sp0 + 0x14u) * (double)rdf32(COW_IMG(0x1032a9f4u)));
    wrf32(self + 0x94u, (float)d12);
    d13 = fr(g, (double)rdf32(sp0 + 0x18u) * (double)rdf32(COW_IMG(0x1032a9f4u)));
    wrf32(self + 0x98u, (float)d13);
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1005fa20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1005fa20(g);
    g->esp = sp0;
    rt_return(g, r, 28u);
}
/* COW_ADAPTER END */
