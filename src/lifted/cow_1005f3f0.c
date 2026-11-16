/* f_0x1005f3f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1005f3f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd8(self + 0x78u);
    wr32(self, COW_IMG(0x1032b9ecu));
    wr32(self + 0x34u, COW_IMG(0x1032b9d0u));
    if ((uint8_t)t1 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | t1;
        edx = in_edx;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t2 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
        t3 = g->edx;
        if (t2 == 0u)
        {
            eax = t2;
            edx = t3;
        }
        else
        {
            edx = t3;
            g->esp = sp0 - 8u;
            t4 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
            g->edx = rd32(t4);
            t5 = rd32(t4);
            t6 = cow_thiscall(g, rd32(t5 + 0x30u), t4, 1, 0x80808080u);
            t7 = g->edx;
            eax = t6;
            edx = t7;
        }
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t8 = cow_thiscall(g, COW_IMG(0x1003b5c0u), self + 0x34u, 0);
    t9 = g->edx;
    t10 = cow_fastcall(g, COW_IMG(0x100747c0u), self, t9, 0);
    t11 = g->ecx;
    t12 = g->edx;
    if (arg1 & 1u)
    {
        eax = t10;
        ecx = t11;
        edx = t12;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10028710u), 1, self);
    }
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1005f3f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1005f3f0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
