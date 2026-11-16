/* f_0x101fb790 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101fb790(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(arg3 + 4u) != 2u) goto L_101fb7c9;
    if (rd32(COW_IMG(0x105781f8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x105781f8u));
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x105781f8u));
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0;
        t1 = cow_thiscall(g, COW_IMG(0x10221300u), eax + 0x20u, 1, 0x80u);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    wr8(rd32(COW_IMG(0x10663894u)) + 0x64u, 1u);
    t3 = rd32(COW_IMG(0x10663894u));
    wr8(t3 + 0x65u, 0u);
    wr8(t3 + 0x66u, 1u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_101fb7c9: ;
    return (arg3 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fb790(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fb790(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
