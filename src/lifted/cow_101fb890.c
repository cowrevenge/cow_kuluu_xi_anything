/* f_0x101fb890 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101fb890(Guest* g)
{
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
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;

    wr32(self + 0x34u, 0u);
    wr8(self + 0x49u, 1u);
    g->esi = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x101f7020u), self, 3, 0u, 0u, 1u);
    t2 = g->edx;
    wr32(self + 0x3cu, 0u);
    wr8(self + 0x44u, 0x20u);
    wr8(self + 0x45u, 0x18u);
    wr16(self + 0x70u, 0xffffu);
    wr8(self + 0x64u, 1u);
    t3 = cow_fastcall(g, COW_IMG(0x101fb330u), self, t2, 0);
    t4 = g->edx;
    g->edx = t4;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385040u));
    t5 = g->edx;
    t6 = rd32(rd32(COW_IMG(0x10663884u)) + 8u);
    cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t5, 2, t6, 0u);
    t7 = g->edx;
    if (rd32(COW_IMG(0x105781f8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x105781f8u));
        edx = t7;
    }
    else
    {
        eax = rd32(COW_IMG(0x105781f8u));
        edx = t7;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0;
        t8 = cow_thiscall(g, COW_IMG(0x10221300u), eax + 0x20u, 1, 0x80u);
        t9 = g->edx;
        eax = t8;
        edx = t9;
    }
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fb890(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fb890(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
