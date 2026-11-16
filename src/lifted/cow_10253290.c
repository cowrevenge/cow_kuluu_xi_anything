/* f_0x10253290 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10253290(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(sp0 + 4u) == 0u)
    {
        eax = in_eax;
        goto L_102532ae;
    }
    ecx = rd32(sp0 + 4u);
    if ((rd32(ecx) & 4u) == 0u)
    {
        eax = rd32(ecx);
        goto L_102532ae;
    }
    eax = rd32(ecx);
    if ((eax & 8u) == 0u) goto L_102532ae;
    wr32(sp0 + 4u, ecx + 0x18u);
    if (arg2 != 0xffffffffu)
    {
        eax = arg2;
        ecx = rd32(sp0 + 4u);
    }
    else
    {
        ecx = rd32(sp0 + 4u);
        eax = rd32(ecx + 0x1cu) - 1u;
    }
    wr32(ecx + 0x18u, eax);
    return eax;
L_102532ae: ;
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10253290(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10253290(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
