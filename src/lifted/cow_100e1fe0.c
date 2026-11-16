/* f_0x100e1fe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100e1fe0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg3 == 0u)
    {
        eax = arg3;
        edx = in_edx;
        goto L_100e2017;
    }
    t1 = rd32(arg3);
    g->esp = sp0;
    t2 = cow_call_regs(g, COW_IMG(0x100d9070u), g->eax, arg2 + 0x20u, t1, 1, 3, t1, arg2 + 0x20u, in_esi);
    t3 = g->edx;
    if (t2 != 0u)
    {
        eax = t2;
        edx = t3;
        goto L_100e2017;
    }
    edx = t3;
    wr16(arg1, (uint16_t)(rd16(arg1) + 1u));
    wr16(arg1 + 2u, 1u);
    wr16(arg2 + 0x1eu, 0u);
    g->edx = edx;
    return (arg1 & 0xffffff00u) | 1u;
L_100e2017: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e1fe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e1fe0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
