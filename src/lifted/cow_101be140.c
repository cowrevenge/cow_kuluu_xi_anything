/* f_0x101be140 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_101be140(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_stdcall(g, COW_IMG(0x101be1c0u), 2, arg1, arg2);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        edx = t2;
        goto L_101be160;
    }
    eax = t1;
    return (eax & 0xffffff00u) | 1u;
L_101be160: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_stdcall(g, COW_IMG(0x101be1e0u), 2, arg1, arg2);
    t4 = g->edx;
    if ((uint8_t)t3 == 0u)
    {
        edx = t4;
        goto L_101be175;
    }
    eax = t3;
    return (eax & 0xffffff00u) | 1u;
L_101be175: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t5 = cow_stdcall(g, COW_IMG(0x101be200u), 2, arg1, arg2);
    t6 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        edx = t6;
        goto L_101be18a;
    }
    eax = t5;
    return (eax & 0xffffff00u) | 1u;
L_101be18a: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t7 = cow_stdcall(g, COW_IMG(0x101be220u), 2, arg1, arg2);
    t8 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        edx = t8;
        goto L_101be19f;
    }
    eax = t7;
    return (eax & 0xffffff00u) | 1u;
L_101be19f: ;
    g->esp = sp0 - 0xcu;
    t9 = cow_stdcall(g, COW_IMG(0x101be240u), 2, arg1, arg2);
    return (t9 & 0xffffff00u) | (uint8_t)t9 != 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101be140(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101be140(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
