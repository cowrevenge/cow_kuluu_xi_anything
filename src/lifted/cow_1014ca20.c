/* f_0x1014ca20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1014ca20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u)
    {
        eax = arg1;
        goto L_1014ca50;
    }
    if (rd32(arg1) == 7u)
    {
        ecx = rd32(arg1);
        goto L_1014ca37;
    }
    ecx = rd32(arg1);
    if (ecx != 0xbu)
    {
        eax = arg1;
        goto L_1014ca50;
    }
L_1014ca37: ;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x10312980u), 3, arg1 + 4u, COW_IMG(0x10371a7cu), 3u);
    if (t1 == 0u)
    {
        eax = (t1 & 0xffffff00u) | 1u;
        goto L_1014ca52;
    }
    eax = (t1 & 0xffffff00u) | 1u;
L_1014ca50: ;
    eax = eax & 0xffffff00u;
L_1014ca52: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014ca20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014ca20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
