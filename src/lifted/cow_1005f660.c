/* f_0x1005f660 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1005f660(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
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

    wr32(self, COW_IMG(0x1032ba34u));
    wr32(self + 0x34u, COW_IMG(0x1032ba18u));
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
        g->edx = edx;
        g->esp = sp0 - 8u;
        t3 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
        t4 = g->edx;
        t5 = rd32(t3 + 0x840u) & 0xfffffffdu;
        wr32(t3 + 0x840u, t5);
        eax = t3;
        edx = t4;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t6 = cow_thiscall(g, COW_IMG(0x1003b5c0u), self + 0x34u, 0);
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x100747c0u), self, 0);
    t9 = g->ecx;
    t10 = g->edx;
    if (arg1 & 1u)
    {
        eax = t8;
        ecx = t9;
        edx = t10;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10028710u), 1, self);
    }
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1005f660(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1005f660(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
