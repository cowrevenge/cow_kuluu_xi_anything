/* f_0x1029a2a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=8 */
uint32_t cow_fn_1029a2a0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        if (arg3 == 0u)
        {
            eax = in_eax;
            edx = in_edx;
        }
        else
        {
            g->esp = sp0 - 8u;
            t1 = cow_stdcall(g, COW_IMG(0x102aeeb0u), 0);
            wr32(arg1 + 0x24u, t1);
            wr32(t1 + 0x14u, arg7);
            wr32(rd32(arg1 + 0x24u) + 0x28u, arg2);
            wr32(rd32(arg1 + 0x24u) + 0x18u, arg3);
            wr32(rd32(arg1 + 0x24u) + 0x20u, arg4);
            t2 = rd32(arg1 + 0x24u);
            wr32(t2 + 0x34u, arg8 & 0xffffffedu);
            wr32(arg1 + 0x28u, arg5);
            wr32(arg1 + 0x2cu, arg6);
            eax = arg5;
            edx = t2;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1029a2a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1029a2a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
