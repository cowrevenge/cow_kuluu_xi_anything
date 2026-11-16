/* f_0x10284920 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10284920(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)rd32(COW_IMG(0x109a273cu)) <= 0)
    {
        eax = rd32(COW_IMG(0x109a273cu));
        ecx = 0u;
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x109a273cu));
        ecx = 0u;
L_1028492f: ;
        if (rd32(COW_IMG(0x109a2734u) + ecx * 4u) == arg1)
        {
            edx = arg1;
            goto L_1028493d;
        }
        if ((int32_t)(ecx + 1u) < (int32_t)eax)
        {
            ecx = ecx + 1u;
            goto L_1028492f;
        }
        ecx = ecx + 1u;
        edx = arg1;
    }
L_1028493d: ;
    if (ecx != eax)
    {
        wr32(COW_IMG(0x109a2734u) + ecx * 4u, 0u);
        if ((int32_t)eax > 0)
        {
            ecx = COW_IMG(0x109a2730u) + eax * 4u;
L_10284957: ;
            if (rd32(ecx) != 0u) goto L_10284964;
            if ((int32_t)(eax - 1u) > 0)
            {
                eax = eax - 1u;
                ecx = ecx - 4u;
                goto L_10284957;
            }
            eax = eax - 1u;
L_10284964: ;
            wr32(COW_IMG(0x109a273cu), eax);
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10284920(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10284920(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
