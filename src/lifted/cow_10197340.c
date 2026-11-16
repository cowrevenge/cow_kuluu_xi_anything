/* f_0x10197340 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10197340(Guest* g)
{
    uint32_t eax;
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

    if (rd8(self + 0x20u) == 1u)
    {
        edx = (in_edx & 0xffffff00u) | rd8(self + 0x20u);
        goto L_10197353;
    }
    edx = (in_edx & 0xffffff00u) | rd8(self + 0x20u);
    if (rd8(self + 0x21u) == 1u) goto L_10197353;
    if (rd8(self + 0x48u) != 1u)
    {
        eax = (in_eax & 0xffffff00u) | 1u;
        goto L_1019736d;
    }
L_10197353: ;
    t1 = (in_eax & 0xffff0000u) | rd16(self + 0x28u);
    t2 = rd32(self + 8u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_call_regs(g, COW_IMG(0x10118db0u), t1, t2, g->edx, 0, 2, t1, 0u);
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x101186a0u), t2, 0);
    t6 = g->edx;
    eax = t5;
    edx = t6;
L_1019736d: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10197340(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10197340(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
