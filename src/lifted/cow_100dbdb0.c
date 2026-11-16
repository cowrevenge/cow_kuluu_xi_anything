/* f_0x100dbdb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_100dbdb0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x10492db4u)) != 0u) goto L_100dbdbc;
    eax = rd32(COW_IMG(0x10492db4u));
    return eax & 0xffffff00u;
L_100dbdbc: ;
    g->eax = arg1;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_thiscall(g, rd32(COW_IMG(0x103290f8u)), self, 1, arg1);
    t2 = g->edx;
    g->edx = t2;
    return (t1 & 0xffffff00u) | rd8(rd32(COW_IMG(0x10492db4u)) + 0x2ee1u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100dbdb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100dbdb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
