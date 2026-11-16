/* f_0x10311eaa - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10311eaa(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd16(arg2);
    wr16(arg1, (uint16_t)t1);
    ecx = arg2;
    edx = (in_edx & 0xffff0000u) | t1;
    esi = arg1 + 2u;
L_10311ebc: ;
    if ((uint16_t)edx == 0u) goto L_10311ecd;
    ecx = ecx + 2u;
    t2 = rd16(ecx);
    wr16(esi, (uint16_t)t2);
    edx = (edx & 0xffff0000u) | t2;
    esi = esi + 2u;
    goto L_10311ebc;
L_10311ecd: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10311eaa(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10311eaa(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
