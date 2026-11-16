/* f_0x10072c90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10072c90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x1047d124u)) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(COW_IMG(0x1047d124u));
        eax = rd32(eax);
    }
    if (eax == 0u)
    {
        edx = in_edx;
    }
    else
    {
        edx = in_edx;
L_10072ca4: ;
        if (rd32(eax + 0x20u) != 0x6e6f6c63u)
        {
            if (rd32(eax + 0x2cu) == 0u)
            {
                eax = 0u;
            }
            else
            {
                eax = rd32(eax + 0x2cu);
                eax = rd32(eax);
            }
        }
        else
        {
            if (rd32(eax + 0x2cu) == 0u)
            {
                g->edx = edx;
                g->esp = sp0 - 4u;
                cow_stdcall(g, COW_IMG(0x10073b80u), 1, eax);
                t3 = g->edx;
                eax = 0u;
                edx = t3;
            }
            else
            {
                ecx = rd32(eax + 0x2cu);
                g->edx = edx;
                t1 = rd32(ecx);
                g->esp = sp0 - 4u;
                cow_stdcall(g, COW_IMG(0x10073b80u), 1, eax);
                t2 = g->edx;
                eax = t1;
                edx = t2;
            }
        }
        if (eax != 0u) goto L_10072ca4;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10072c90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10072c90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
