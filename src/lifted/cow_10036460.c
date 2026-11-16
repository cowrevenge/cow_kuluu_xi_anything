/* f_0x10036460 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10036460(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x1046390cu)) < 0x14u)
    {
        ecx = rd32(COW_IMG(0x1046390cu));
        goto L_1003646e;
    }
    return in_eax & 0xffffff00u;
L_1003646e: ;
    if (ecx == 0u) goto L_10036486;
    eax = 0u;
L_10036478: ;
    if (rd32(COW_IMG(0x10462538u) + eax * 4u) == arg1) goto L_10036496;
    if (eax + 1u < ecx)
    {
        eax = eax + 1u;
        goto L_10036478;
    }
L_10036486: ;
    wr32(COW_IMG(0x1046390cu), ecx + 1u);
    wr32(COW_IMG(0x10462538u) + ecx * 4u, arg1);
    eax = COW_IMG(0x10462538u) + ecx * 4u;
L_10036496: ;
    g->edx = arg1;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10036460(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10036460(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
