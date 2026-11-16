/* f_0x100c3cf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100c3cf0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, in_esi);
    if (rd32(self + 0x5c4u) == 0u)
    {
        eax = rd32(self + 0x5c4u);
        edi = in_edi;
    }
    else
    {
        wr32(sp0 - 8u, in_edi);
        t1 = rd32(self + 0x5f8u);
        wr32(sp0 - 0xcu, t1);
        wr32(sp0 - 0x10u, arg1);
        g->edx = rd32(rd32(self + 0x5f4u));
        t2 = rd32(rd32(self + 0x5f4u));
        g->esp = sp0 - 8u;
        t3 = cow_call_regs(g, COW_IMG(0x100c3ca0u), t1, rd32(self + 0x5f4u), g->edx, 1, 2, arg1, t1);
        t4 = g->edx;
        wr32(sp0 - 0xcu, t3);
        wr32(sp0 - 0x10u, 7u);
        wr32(sp0 - 0x14u, sp0 + 4u);
        g->edx = t4;
        t5 = cow_thiscall(g, COW_IMG(0x10072290u), t4, 3, sp0 + 4u, 7u, t3);
        t6 = g->edx;
        if (rd32(t5) == 0u)
        {
            eax = rd32(t5);
        }
        else
        {
            eax = rd32(t5);
            edx = t6;
            if (rd32(eax) == 0u)
            {
                eax = rd32(eax);
            }
            else
            {
                eax = rd32(eax);
                wr32(sp0 - 0xcu, 0u);
                wr32(sp0 - 0x10u, 0u);
                wr32(sp0 - 0x14u, self);
                wr32(sp0 - 0x18u, self);
                g->esp = sp0 - 8u;
                t7 = cow_call_regs(g, COW_IMG(0x10056c70u), eax, eax, g->edx, 0, 4, self, self, 0u, 0u);
                eax = t7;
            }
        }
        wr32(self + 0x5f8u, arg1);
        edi = rd32(sp0 - 8u);
    }
    g->edi = edi;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100c3cf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100c3cf0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
