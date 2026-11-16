/* f_0x101b5cd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101b5cd0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0xf108u) == 4u)
    {
        eax = rd32(self + 0xf108u) - 4u;
        goto L_101b5cf1;
    }
    eax = rd32(self + 0xf108u) - 4u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        edx = in_edx;
    }
    else
    {
        g->eax = rd32(self);
        g->edx = in_edx;
        t1 = rd32(self);
        g->esp = sp0;
        t2 = cow_thiscall(g, rd32(t1 + 0x34u), self, 0);
        t3 = g->edx;
        eax = t2;
        edx = t3;
    }
    wr8(rd32(COW_IMG(0x1066268cu)) + 0x10du, 0u);
    g->edx = edx;
    return eax;
L_101b5cf1: ;
    t4 = rd32(self);
    wr32(self + 0xf108u, 3u);
    g->edx = t4;
    g->esp = sp0;
    cow_thiscall(g, rd32(t4 + 0x30u), self, 0);
    t5 = g->edx;
    t6 = rd32(COW_IMG(0x1066268cu));
    wr8(t6 + 0x10du, 0u);
    g->edx = t5;
    return t6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b5cd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101b5cd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
