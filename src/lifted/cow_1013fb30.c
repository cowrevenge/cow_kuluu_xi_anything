/* f_0x1013fb30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1013fb30(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint16_t)arg1 != 5u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_1013fb62;
    }
    if ((uint32_t)(int16_t)arg2 == 1u) goto L_1013fb54;
    if ((uint32_t)(int16_t)arg2 != 2u)
    {
        eax = (uint32_t)(int16_t)arg2 - 2u;
        edx = in_edx;
        goto L_1013fb62;
    }
    g->eax = (uint32_t)(int16_t)arg2 - 2u;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x10222b90u), 3, 1u, 0u, 1u);
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_1013fb54: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0;
    t3 = cow_cdecl(g, COW_IMG(0x10222b90u), 3, 0x14u, 0u, 1u);
    t4 = g->edx;
    eax = t3;
    edx = t4;
L_1013fb62: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013fb30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1013fb30(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
