/* f_0x10275630 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10275630(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 0u) goto L_1027564f;
    eax = rd32(COW_IMG(0x1099cf4cu) + rd32(COW_IMG(0x1099d1f8u)) * 0x60u);
L_1027564a: ;
    return eax + 0x10u;
L_1027564f: ;
    g->ecx = self;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x10275690u), 1, arg1);
    t2 = g->ecx;
    if (t1 != 0u)
    {
        ecx = t2;
        edx = t1;
        goto L_10275660;
    }
    eax = t1;
    return eax;
L_10275660: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_cdecl(g, COW_IMG(0x10275310u), 1, arg1);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 != 3u)
    {
        ecx = t4;
        edx = t5;
        goto L_10275672;
    }
    return 0u;
L_10275672: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t6 = cow_cdecl(g, COW_IMG(0x10275340u), 1, arg1 - 0x10u);
    t7 = g->edx;
    if (t6 < rd32(t7 + 0x58u))
    {
        eax = t6;
        goto L_1027564a;
    }
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10275630(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10275630(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
