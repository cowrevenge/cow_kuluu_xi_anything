/* f_0x1026d5ac - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1026d5ac(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 16u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, self);
    wr32(sp0 - 8u, 0xccccccccu);
    wr32(sp0 - 8u, 0u);
    if (rd32(arg1 + 0x10u) == 0xffffffffu)
    {
        edx = in_edx;
        loc_8 = 0u;
    }
    else
    {
        t1 = rd32(arg1 + 0x10u);
        wr32(sp0 - 0xcu, t1);
        g->eax = arg1;
        g->esp = sp0;
        t2 = cow_call_regs(g, COW_IMG(0x1026d568u), g->eax, arg1, t1, 1, 3, t1, 0u, in_ebp);
        t3 = g->edx;
        if (t2 != 0xffffffffu)
        {
            edx = t3;
            loc_8 = 0u;
        }
        else
        {
            edx = t3;
            wr32(sp0 - 8u, 0xffffffffu);
            loc_8 = 0xffffffffu;
        }
        wr32(arg1 + 0x10u, 0xffffffffu);
    }
    if (rd32(arg1 + 0x1004cu) == 0u)
    {
        ecx = arg1;
    }
    else
    {
        wr32(sp0 - 0xcu, arg1);
        g->eax = arg1;
        g->ecx = arg1;
        g->esp = sp0;
        t4 = cow_call_regs(g, COW_IMG(0x1026d62du), g->eax, g->ecx, arg1, 1, 3, arg1, loc_8, in_ebp);
        t5 = g->ecx;
        t6 = g->edx;
        if (t4 != 0u)
        {
            ecx = t5;
            edx = t6;
        }
        else
        {
            ecx = t5;
            edx = t6;
            wr32(sp0 - 8u, 0xffffffffu);
            loc_8 = 0xffffffffu;
        }
        wr32(arg1 + 0x1004cu, 0u);
    }
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->esp = sp0 - 4u;
    cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026d5ac(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1026d5ac(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
