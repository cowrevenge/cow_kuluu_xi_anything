/* f_0x101c8bc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101c8bc0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg2 == 0u)
    {
        eax = arg2;
        edx = in_edx;
        goto L_101c8bfb;
    }
    if (arg3 == 0u)
    {
        eax = arg2;
        edx = in_edx;
        goto L_101c8bfb;
    }
    g->ecx = self;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x101c8730u), arg2, g->ecx, in_edx, 1, 3, arg1, arg2, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t3;
        goto L_101c8bf6;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x101c8730u), eax, g->ecx, edx, 1, 3, arg1, arg3, 0u);
    t5 = g->edx;
    if (t4 != 0u)
    {
        eax = t4;
        edx = t5;
        goto L_101c8bfb;
    }
    eax = t4;
    edx = t5;
L_101c8bf6: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_101c8bfb: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c8bc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c8bc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
