/* f_0x102053f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102053f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x1057876cu)) == 0u)
    {
        eax = in_eax;
        goto L_10205419;
    }
    ecx = rd32(COW_IMG(0x1057876cu));
    g->esp = sp0;
    t1 = cow_call_regs(g, COW_IMG(0x101597f0u), in_eax, ecx, in_edx, 1, 0);
    if (t1 == 0u)
    {
        eax = t1;
        goto L_10205419;
    }
    eax = t1;
    if (rd32(eax + 4u) == 0u)
    {
        eax = rd32(eax + 4u);
        goto L_10205419;
    }
    eax = rd32(eax + 4u);
    if ((eax & 0xff000000u) == 0x1000000u)
    {
        eax = eax & 0xff000000u;
        goto L_10205419;
    }
    eax = eax & 0xff000000u;
    return (eax & 0xffffff00u) | 1u;
L_10205419: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102053f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102053f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
