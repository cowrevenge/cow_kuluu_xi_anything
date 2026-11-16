/* f_0x100f8030 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100f8030(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(arg1 + 0x2c7d0u);
    if ((t1 & 0x3ff000u) == 0u)
    {
        eax = 0xffffffffu;
        edx = in_edx;
        goto L_100f806d;
    }
    esi = t1 & 0x3ff000u;
    edi = t1;
    ecx = 0x1000u;
    edx = 0u;
L_100f8051: ;
    if ((esi & ecx) != 0u) goto L_100f8061;
    if ((int32_t)(edx + 1u) < 8)
    {
        ecx = ecx * 2u;
        edx = edx + 1u;
        goto L_100f8051;
    }
    edx = edx + 1u;
    g->edx = edx;
    return 0xffffffffu;
L_100f8061: ;
    t2 = ~ecx & edi;
    wr32(arg1 + 0x2c7d0u, t2);
    eax = edx;
L_100f806d: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f8030(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f8030(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
