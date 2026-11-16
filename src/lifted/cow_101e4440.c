/* f_0x101e4440 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101e4440(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint16_t)arg1 != 8u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        t1 = rd32(rd32(COW_IMG(0x10663554u)) + 8u);
        g->eax = rd32(COW_IMG(0x10663554u));
        t2 = rd32(COW_IMG(0x10663554u));
        g->esp = sp0;
        t3 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), in_edx, 2, t1, 0u);
        t4 = g->ecx;
        t5 = g->edx;
        g->edx = t5;
        t6 = cow_thiscall(g, COW_IMG(0x10037e90u), t4, 0);
        t7 = g->edx;
        eax = t6;
        edx = t7;
    }
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e4440(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e4440(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
