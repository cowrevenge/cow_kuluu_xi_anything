/* f_0x102e72b1 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102e72b1(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 8u) == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 8u);
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        cow_stdcall(g, rd32(COW_IMG(0x10329250u)), 1, eax);   /* kernel32.dll!UnmapViewOfFile */
        t1 = g->ecx;
        t2 = g->edx;
        wr32(self + 8u, 0u);
        wr32(self + 0xcu, 0u);
        ecx = t1;
        edx = t2;
    }
    if (rd32(self + 4u) == 0xffffffffu)
    {
        edi = rd32(COW_IMG(0x10329104u));
    }
    else
    {
        eax = rd32(self + 4u);
        edi = rd32(COW_IMG(0x10329104u));
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, edi, ecx, 1, eax);
        t3 = g->ecx;
        t4 = g->edx;
        wr32(self + 4u, 0xffffffffu);
        ecx = t3;
        edx = t4;
    }
    if (rd32(self) != 0xffffffffu)
    {
        eax = rd32(self);
        g->esp = sp0 - 8u;
        cow_thiscall(g, edi, ecx, 1, eax);
        wr32(self, 0xffffffffu);
    }
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e72b1(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e72b1(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
