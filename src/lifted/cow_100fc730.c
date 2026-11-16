/* f_0x100fc730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100fc730(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->edx = in_edx;
    t1 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0xe9u, 0u, 0u);
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        edx = t2;
        goto L_100fc748;
    }
    eax = t1;
    edx = t2;
    g->edx = edx;
    return eax & 0xffffff00u;
L_100fc748: ;
    wr32(eax + 4u, arg1);
    wr16(eax + 8u, (uint16_t)arg2);
    g->eax = eax;
    g->edx = (edx & 0xffff0000u) | (uint16_t)arg2;
    g->esp = sp0;
    t3 = cow_cdecl(g, COW_IMG(0x100ddd20u), 3, eax, 0xcu, 0u);
    t4 = g->edx;
    g->edx = t4;
    return (t3 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fc730(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100fc730(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
