/* f_0x10113c50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10113c50(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        if (rd32(arg1) == 0u)
        {
            eax = rd32(arg1);
            ecx = self;
            edx = in_edx;
        }
        else
        {
            eax = rd32(arg1);
            t1 = rd32(arg1 + 4u);
            g->eax = eax;
            g->edx = t1;
            g->esp = sp0 - 4u;
            t2 = cow_thiscall_cdecl(g, eax, arg4, 2, t1, arg4);
            t3 = g->ecx;
            t4 = g->edx;
            wr32(arg1, 0u);
            eax = t2;
            ecx = t3;
            edx = t4;
        }
        if (arg3 == 1u)
        {
            if (arg1 == rd32(COW_IMG(0x104e1b68u)))
            {
                wr32(COW_IMG(0x104e1b68u), 0u);
            }
            g->eax = eax;
            g->esp = sp0 - 4u;
            t5 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, arg1);
            t6 = g->edx;
            eax = t5;
            edx = t6;
        }
    }
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10113c50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10113c50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
