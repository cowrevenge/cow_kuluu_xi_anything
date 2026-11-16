/* f_0x102e88fe - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_102e88fe(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 != 0u)
    {
        wr32(self + 8u, arg1);
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, rd32(rd32(arg1) + 4u), rd32(arg1), 1, arg1);
        wr32(self + 0xcu, arg2);
        wr32(self + 0x1cu, arg3);
        wr32(self + 0x10u, arg4);
        t1 = rd32(self + 8u);
        wr32(self + 0x14u, arg5);
        wr32(self + 0x18u, arg6);
        cow_stdcall(g, COW_IMG(0x102d2f60u), 7, t1, self + 0xcu, self + 0xcu, self + 0x1cu, 0u, self + 0x10u, 0u);
        t2 = rd32(self + 0xcu);
        wrf32(self + 0x484u, (float)0.0);
        wr32(self + 0x474u, 0u);
        wr32(self + 0x478u, 0u);
        wrf32(self + 0x488u, (float)1.0);
        wr32(self + 0x47cu, t2);
        wr32(self + 0x480u, t2);
        eax = 0u;
    }
    else
    {
        eax = 0x8876086cu;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e88fe(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e88fe(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
