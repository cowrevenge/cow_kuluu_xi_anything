/* f_0x10245480 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10245480(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 20u);

    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, arg2 + 0x17u);
    wr32(sp0 - 0xcu, sp0 + 8u);
    g->eax = arg2 + 0x17u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x100731b0u), rd32(COW_IMG(0x1047d128u)), 2, sp0 + 8u, arg2 + 0x17u);
    t2 = g->edx;
    if (rd32(t1) == 0u)
    {
        esi = rd32(t1);
        loc_4 = in_esi;
    }
    else
    {
        eax = t1;
        edx = t2;
        esi = rd32(t1);
        g->esp = sp0 - 4u;
        t3 = cow_call_regs(g, COW_IMG(0x10071e90u), eax, rd32(esi), g->edx, 1, 0);
        wr32(sp0 - 8u, 0x6e69616du);
        wr32(sp0 - 0xcu, 7u);
        wr32(sp0 - 0x10u, sp0 + 8u);
        g->edx = sp0 + 8u;
        t4 = cow_thiscall(g, COW_IMG(0x10072290u), rd32(esi), 3, sp0 + 8u, 7u, 0x6e69616du);
        t5 = g->edx;
        if (rd32(t4) == 0u)
        {
            loc_4 = in_esi;
        }
        else
        {
            eax = rd32(t4);
            edx = t5;
            if (rd32(eax) == 0u)
            {
                loc_4 = rd32(sp0 - 4u);
            }
            else
            {
                eax = rd32(eax);
                wr32(sp0 - 8u, 0u);
                wr32(sp0 - 0xcu, 0u);
                g->esp = sp0 - 4u;
                cow_call_regs(g, COW_IMG(0x10056b80u), eax, eax, g->edx, 0, 2, 0u, 0u);
                loc_4 = rd32(sp0 - 4u);
            }
        }
    }
    wr32(arg1, esi);
    g->esi = loc_4;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10245480(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10245480(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
