/* f_0x100f7fa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100f7fa0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)arg1 < 13)
    {
        eax = arg1;
        goto L_100f7fd1;
    }
    if ((int32_t)arg1 <= 14) goto L_100f7fb8;
    if (arg1 != 0xfu)
    {
        eax = arg1;
        goto L_100f7fd1;
    }
L_100f7fbc: ;
    g->eax = arg1;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x100f7bc0u), 4, arg1, 0xffffffffu, 0xffffffffu, 0xffffffffu);
    if (t1 != 0u)
    {
        eax = (t1 & 0xffffff00u) | 1u;
        goto L_100f7fd3;
    }
    eax = (t1 & 0xffffff00u) | 1u;
L_100f7fd1: ;
    eax = eax & 0xffffff00u;
L_100f7fd3: ;
    return eax;
L_100f7fb8: ;
    if (arg1 == 0u)
    {
        eax = arg1;
        goto L_100f7fd1;
    }
    goto L_100f7fbc;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f7fa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f7fa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
