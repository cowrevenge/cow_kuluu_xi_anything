/* f_0x1001b360 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1001b360(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 4u) == 0u)
    {
        eax = in_eax;
        goto L_1001b37a;
    }
    edx = in_edx;
    esi = rd32(self + 4u);
L_1001b368: ;
    g->eax = rd32(esi);
    g->edx = edx;
    t1 = rd32(esi);
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, rd32(t1 + 0x3cu), esi, 0);
    t3 = g->edx;
    if ((uint8_t)t2 != 0u)
    {
        eax = t2;
        goto L_1001b37e;
    }
    eax = t2;
    edx = t3;
    if (rd32(esi + 4u) != 0u)
    {
        esi = rd32(esi + 4u);
        goto L_1001b368;
    }
L_1001b37a: ;
    return eax & 0xffffff00u;
L_1001b37e: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001b360(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1001b360(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
