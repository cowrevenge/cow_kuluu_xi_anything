/* f_0x100c3d50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_100c3d50(Guest* g)
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
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, in_esi);
    if (rd32(self + 0x5c4u) == 0u)
    {
        eax = rd32(self + 0x5c4u);
        edx = in_edx;
        edi = in_edi;
    }
    else
    {
        wr32(sp0 - 8u, in_edi);
        wr32(sp0 - 0xcu, arg2);
        g->eax = arg2;
        t1 = rd32(self + 0x5f8u);
        g->esp = sp0 - 8u;
        t2 = cow_thiscall(g, COW_IMG(0x1018bc40u), self + 0x5fcu, 1, arg2);
        wr32(sp0 - 0xcu, t1);
        wr32(sp0 - 0x10u, arg1);
        g->edx = rd32(rd32(self + 0x5f4u));
        t3 = rd32(rd32(self + 0x5f4u));
        t4 = cow_call_regs(g, COW_IMG(0x100c3ca0u), t2, rd32(self + 0x5f4u), g->edx, 1, 2, arg1, t1);
        t5 = g->edx;
        wr32(sp0 - 0xcu, t4);
        wr32(sp0 - 0x10u, 7u);
        wr32(sp0 - 0x14u, sp0 + 8u);
        g->edx = t5;
        t6 = cow_thiscall(g, COW_IMG(0x10072290u), t5, 3, sp0 + 8u, 7u, t4);
        t7 = g->edx;
        if (rd32(t6) == 0u)
        {
            eax = rd32(t6);
            edx = t7;
        }
        else
        {
            eax = rd32(t6);
            edx = t7;
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
                g->edx = edx;
                g->esp = sp0 - 8u;
                t8 = cow_call_regs(g, COW_IMG(0x10056c70u), eax, eax, g->edx, 0, 4, self, self, 0u, 0u);
                t9 = g->edx;
                eax = t8;
                edx = t9;
            }
        }
        wr32(self + 0x5f8u, arg1);
        edi = rd32(sp0 - 8u);
    }
    g->edi = edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100c3d50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100c3d50(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
