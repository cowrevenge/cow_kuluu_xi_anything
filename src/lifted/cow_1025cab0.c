/* f_0x1025cab0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1025cab0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x10669468u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10669468u));
        goto L_1025cadc;
    }
    eax = rd32(COW_IMG(0x10669468u));
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_thiscall(g, rd32(COW_IMG(0x10329134u)), self, 1, COW_IMG(0x1038ad90u));
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_1025cacb;
    }
    eax = t1;
    return eax & 0xffffff00u;
L_1025cacb: ;
    g->eax = eax;
    g->esp = sp0;
    t4 = cow_thiscall(g, rd32(COW_IMG(0x10329138u)), ecx, 2, eax, COW_IMG(0x1038ad40u));
    wr32(COW_IMG(0x1066946cu), t4);
    eax = t4;
L_1025cadc: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025cab0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025cab0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
