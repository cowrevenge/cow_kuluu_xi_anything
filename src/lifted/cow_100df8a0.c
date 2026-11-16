/* f_0x100df8a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100df8a0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    t1 = cow_cdecl(g, COW_IMG(0x100df8e0u), 1, 1u);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_100df8db;
    }
    eax = t1;
    edx = t2;
    wr16(eax + 8u, 0x4254u);
    wr16(eax + 0xau, 0u);
    wr16(eax + 0xcu, 0u);
    wr16(eax + 0xeu, 0u);
    wr16(eax + 0x10u, 1u);
    wr16(eax + 0x12u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t3 = cow_cdecl(g, COW_IMG(0x100df930u), 2, eax, 0u);
    t4 = g->edx;
    g->edx = t4;
    return (t3 & 0xffffff00u) | 1u;
L_100df8db: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100df8a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100df8a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
