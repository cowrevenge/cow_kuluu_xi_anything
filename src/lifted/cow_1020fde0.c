/* f_0x1020fde0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1020fde0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint8_t)arg2 != 0u)
    {
        t1 = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10664518u)) + 0x11u);
        g->esp = sp0;
        cow_cdecl(g, COW_IMG(0x100f8970u), 3, t1, arg1, 0u);
    }
    t2 = rd32(COW_IMG(0x10664518u));
    wr8(t2 + 0x10u, 0u);
    t3 = rd32(rd32(COW_IMG(0x10664508u)) + 8u);
    g->eax = t2;
    g->esp = sp0;
    t4 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t3, 2, t3, 0u);
    t5 = g->edx;
    g->edx = t5;
    return t4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020fde0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020fde0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
