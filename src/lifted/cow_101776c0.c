/* f_0x101776c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_101776c0(Guest* g)
{
    double d4;
    double d6;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(sp0 + 0xcu);
    wr32(COW_IMG(0x1047bc88u), t1);
    wr32(COW_IMG(0x1047bc8cu), 0u);
    t2 = arg2 * 0x3cu - arg1 * 0x3cu;
    wr32(sp0 + 0xcu, t2);
    g->esp = sp0 - 4u;
    t3 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
    d4 = (double)rdf32(COW_IMG(0x1032961cu));
    t5 = rd32(sp0 + 0xcu);
    wr8(COW_IMG(0x1065ca28u), 1u);
    wr32(sp0 + 0xcu, t3 - arg1);
    wrf32(COW_IMG(0x10376ff0u), (float)fr(g, d4 / (double)(int32_t)t5));
    d6 = fr(g, fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x10329ce8u))) / (double)(int32_t)t5);
    wrf32(COW_IMG(0x1065ca2cu), (float)d6);
    return t3 - arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101776c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101776c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
