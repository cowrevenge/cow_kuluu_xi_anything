/* f_0x1005f2c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1005f2c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr32(self, COW_IMG(0x1032b9a4u));
    wr32(self + 0x34u, COW_IMG(0x1032b988u));
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        edx = t2;
        g->esp = sp0 - 8u;
        t3 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
        g->edx = rd32(t3);
        t4 = rd32(t3);
        t5 = cow_thiscall(g, rd32(t4 + 0x17cu), t3, 0);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_thiscall(g, COW_IMG(0x1003b5c0u), self + 0x34u, 0);
    t8 = g->edx;
    t9 = cow_fastcall(g, COW_IMG(0x100747c0u), self, t8, 0);
    t10 = g->ecx;
    t11 = g->edx;
    if (arg1 & 1u)
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10028710u), 1, self);
    }
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1005f2c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1005f2c0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
