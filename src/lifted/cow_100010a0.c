/* f_0x100010a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_100010a0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)(arg3 - 1u) < 0)
    {
        eax = arg3 - 1u;
        edx = in_edx;
    }
    else
    {
        eax = arg3 - 1u;
        edx = in_edx;
        esi = arg1 + arg2 * arg3;
        edi = arg3;
L_100010c1: ;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t1 = cow_thiscall(g, arg4, esi - arg2, 0);
        t2 = g->edx;
        if (edi != 1u)
        {
            eax = t1;
            edx = t2;
            esi = esi - arg2;
            edi = edi - 1u;
            goto L_100010c1;
        }
        eax = t1;
        edx = t2;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100010a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100010a0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
