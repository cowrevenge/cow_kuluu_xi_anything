/* f_0x1025ed80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1025ed80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0xacu) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0xacu);
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        t1 = g->edx;
        wr32(self + 0xacu, 0u);
        edx = t1;
    }
    if (rd32(rd32(self + 0x78u) + 0x18u) != 0u)
    {
        eax = rd32(self + 0x78u);
        goto L_1025edae;
    }
    g->edx = edx;
    return 1u;
L_1025edae: ;
    if (rd32(self + 0x14u) == 0u) goto L_1025edc3;
    ecx = rd32(self + 0x14u);
    if (rd8(eax + 0x25u) != 0u) goto L_1025edc3;
    g->edx = edx;
    return 0x80040224u;
L_1025edc3: ;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t2 = cow_fastcall(g, COW_IMG(0x1025f6d0u), self, edx, 1, 0u);
    g->edx = rd32(self);
    t3 = rd32(self);
    cow_thiscall(g, rd32(t3 + 0x64u), self, 0);
    t4 = g->edx;
    g->edx = t4;
    cow_thiscall(g, rd32(rd32(self) + 0x70u), self, 0);
    t5 = g->edx;
    t6 = rd32(self + 0x14u);
    wr32(self + 0x60u, 0u);
    if (t6 != 2u)
    {
        edx = t5;
    }
    else
    {
        eax = t6;
        g->edx = rd32(self);
        t7 = rd32(self);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(t7 + 0x80u), self, 0);
        t8 = g->edx;
        edx = t8;
    }
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025ed80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025ed80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
