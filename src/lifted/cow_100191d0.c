/* f_0x100191d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100191d0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x20u);
    t2 = g->edx;
    if (t1 == 0u) goto L_100191ec;
    eax = t1;
    edx = t2;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x10019490u), eax, 0);
    t4 = g->edx;
    if (t3 != 0u)
    {
        edx = t4;
        esi = t3;
        goto L_100191f0;
    }
L_100191ec: ;
    return 0u;
L_100191f0: ;
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(esi) + 0x1cu), esi, 0);
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100191d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100191d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
