/* f_0x1017a560 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1017a560(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    eax = self + 0xbcu;
    edx = 0u;
L_1017a56d: ;
    if (rd32(eax - 0x5cu) == 0u) goto L_1017a578;
    if (rd32(eax) == arg1) goto L_1017a587;
L_1017a578: ;
    if ((int32_t)(edx + 1u) < 2)
    {
        eax = eax + 0x78u;
        edx = edx + 1u;
        goto L_1017a56d;
    }
    edx = edx + 1u;
    g->edx = edx;
    return 0u;
L_1017a587: ;
    g->edx = edx;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1017a560(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1017a560(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
