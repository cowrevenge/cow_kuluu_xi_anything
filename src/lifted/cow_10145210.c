/* f_0x10145210 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10145210(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint8_t)arg1 == 0u) goto L_1014522d;
    if ((uint8_t)arg1 != 1u)
    {
        eax = (uint8_t)arg1 - 1u;
        goto L_10145236;
    }
    t1 = rd32(COW_IMG(0x1057876cu));
    wr8(t1 + 0x74u, rd8(t1 + 0x74u) | 1u);
    return t1;
L_1014522d: ;
    t2 = rd32(COW_IMG(0x1057876cu));
    wr8(t2 + 0x74u, rd8(t2 + 0x74u) & 0xfeu);
    eax = t2;
L_10145236: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10145210(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10145210(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
