/* f_0x10188970 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10188970(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    g->edx = 0u;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x10188900u), 0);
    t2 = g->edx;
    if (t1 == 0u) goto L_1018898b;
    eax = t1;
    edx = t2;
L_1018897e: ;
    if (eax == self) goto L_1018898f;
    if (rd32(eax + 4u) != 0u)
    {
        edx = eax;
        eax = rd32(eax + 4u);
        goto L_1018897e;
    }
L_1018898b: ;
    return 0u;
L_1018898f: ;
    return edx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10188970(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10188970(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
