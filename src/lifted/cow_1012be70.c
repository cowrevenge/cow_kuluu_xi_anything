/* f_0x1012be70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1012be70(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 152u);

    if (rd32(COW_IMG(0x1057876cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x1057876cu));
        edx = in_edx;
    }
    else
    {
        if (arg1 == 0u)
        {
            eax = arg1;
            edx = in_edx;
        }
        else
        {
            if (arg2 == 0u)
            {
                eax = arg2;
                edx = in_edx;
            }
            else
            {
                t1 = rd32(arg2 + 4u);
                wr32(sp0 - 0x84u, t1);
                wr32(sp0 - 0x88u, COW_IMG(0x1036f5e8u));
                wr32(sp0 - 0x8cu, sp0 - 0x80u);
                g->ecx = sp0 - 0x80u;
                g->esp = sp0 - 0x78u;
                cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, COW_IMG(0x1036f5e8u), t1, rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu));
                t2 = g->ecx;
                wr32(sp0 - 0x90u, 0u);
                wr32(sp0 - 0x94u, sp0 - 0x80u);
                g->edx = sp0 - 0x80u;
                g->esp = sp0 - 0x8cu;
                t3 = cow_cdecl(g, COW_IMG(0x10080dc0u), 2, sp0 - 0x80u, 0u);
                t4 = g->edx;
                eax = t3;
                edx = t4;
            }
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012be70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012be70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
