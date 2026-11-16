/* f_0x100cfb00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100cfb00(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    t1 = cow_thiscall(g, COW_IMG(0x1002b5a0u), self + 0x674u, 0);
    t2 = g->edx;
    if (rd32(t1) == 0u)
    {
        edx = t2;
        goto L_100cfb1d;
    }
    eax = rd32(t1);
    edx = t2;
    g->edx = edx;
    g->esp = sp0;
    t3 = cow_thiscall(g, COW_IMG(0x10035250u), eax + 8u, 0);
    t4 = g->edx;
    if (t3 != 0u)
    {
        eax = t3;
        edx = t4;
        goto L_100cfb33;
    }
    edx = t4;
L_100cfb1d: ;
    if (arg1 == 0u) goto L_100cfb2e;
    if (arg1 != 1u) goto L_100cfb2e;
    g->edx = edx;
    return 0u;
L_100cfb2e: ;
    eax = COW_IMG(0x1048a390u);
L_100cfb33: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100cfb00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100cfb00(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
