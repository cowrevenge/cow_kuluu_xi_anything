/* f_0x1023f940 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_1023f940(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(arg3 + 0x24u) != 0u)
    {
        eax = rd32(arg3 + 0x24u);
        edx = in_edx;
        goto L_1023f96d;
    }
    if (arg1 == 0u) goto L_1023f964;
    if (arg1 == 0u || (int32_t)arg1 < 0)
    {
        eax = arg1;
        edx = in_edx;
        goto L_1023f96d;
    }
    if ((int32_t)arg1 > 2)
    {
        eax = arg1;
        edx = in_edx;
        goto L_1023f96d;
    }
    g->eax = rd32(arg3);
    g->edx = in_edx;
    t1 = rd32(arg3);
    g->esp = sp0;
    t2 = cow_thiscall(g, rd32(t1 + 0x18u), arg3, 2, 5u, 3u);
    t3 = g->edx;
    g->edx = t3;
    return t2;
L_1023f964: ;
    g->eax = arg1;
    g->edx = rd32(arg3);
    t4 = rd32(arg3);
    g->esp = sp0;
    t5 = cow_thiscall(g, rd32(t4 + 0x18u), arg3, 2, 5u, 2u);
    t6 = g->edx;
    eax = t5;
    edx = t6;
L_1023f96d: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023f940(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1023f940(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
