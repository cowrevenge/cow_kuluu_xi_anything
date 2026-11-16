/* f_0x10200230 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10200230(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr8(COW_IMG(0x10663ac8u), 0u);
    if (arg3 != 0u)
    {
        edx = in_edx;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0;
        cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, arg1);
        t1 = g->edx;
        if (rd32(COW_IMG(0x10663abcu)) == 0u)
        {
            edx = t1;
        }
        else
        {
            eax = rd32(COW_IMG(0x10663abcu));
            edx = t1;
            wr8(eax + 0x64u, 1u);
        }
    }
    if (rd32(COW_IMG(0x105781f8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x105781f8u));
    }
    else
    {
        eax = rd32(COW_IMG(0x105781f8u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0;
        t2 = cow_thiscall(g, COW_IMG(0x10221300u), eax + 0x20u, 1, 0x10u);
        t3 = g->edx;
        eax = t2;
        edx = t3;
    }
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10200230(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10200230(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
