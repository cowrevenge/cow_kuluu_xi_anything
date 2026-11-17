/* f_0x101772e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101772e0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, sp0 - 4u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 2u);
    g->eax = sp0 - 4u;
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t1 = cow_thiscall(g, COW_IMG(0x10177350u), self, 0);
    t2 = g->edx;
    wr32(sp0 - 0x1cu, t1);
    g->edx = t2;
    g->esp = sp0 - 0x1cu;
    t3 = cow_thiscall(g, COW_IMG(0x10177340u), self, 0);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x20u, t3);
    g->esp = sp0 - 8u;
    t6 = cow_stdcall(g, COW_IMG(0x102daa2du), 6, t3, rd32(sp0 - 0x1cu), 2u, 0u, sp0 - 4u, 0u);
    if ((int32_t)t6 < 0)
    {
        eax = t6;
    }
    else
    {
        wr32(sp0 - 0xcu, in_edi);
        wr32(sp0 - 0x10u, arg1);
        wr32(sp0 - 0x14u, self);
        g->eax = self;
        g->edx = arg1;
        t7 = rd32(self);
        t8 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        t9 = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
        g->esp = sp0 - 0xcu;
        t10 = cow_thiscall(g, rd32(t7 + 0xcu), t7, 2, self, arg1);
        t11 = g->ecx;
        t12 = g->edx;
        wr32(sp0 - 0x10u, t10);
        wr32(sp0 - 0x14u, t8);
        t13 = cow_thiscall(g, rd32(t9 + 0x15cu), t11, 2, t8, t10);
        t14 = g->ecx;
        wr32(sp0 - 0x10u, self);
        cow_thiscall(g, rd32(rd32(self) + 8u), t14, 1, self);
        eax = t13;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101772e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101772e0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
