/* f_0x10264ba0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10264ba0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->eax = arg1;
    g->edx = in_edx;
    t1 = cow_thiscall(g, rd32(COW_IMG(0x103291c8u)), self, 2, arg1, 0xffffffffu);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u) goto L_10264bc1;
    eax = t1;
    ecx = t2;
    edx = t3;
    if (eax == 0xffffffffu) goto L_10264bbc;
    return 0x8000ffffu;
L_10264bbc: ;
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x10266ad0u), eax, ecx, edx);
L_10264bc1: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10264ba0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10264ba0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
