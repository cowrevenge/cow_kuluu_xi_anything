/* f_0x10135270 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10135270(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if (rd8(self + 4u) != 0u) goto L_101352b9;
    if (rd32(rd32(COW_IMG(0x105781bcu)) + 0x1cu) != 1u) goto L_101352b9;
    eax = rd32(COW_IMG(0x105781bcu));
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x10134f00u), 2, 0xffffu, 2u);
    wr32(rd32(COW_IMG(0x105781bcu)) + 0x1cu, 2u);
    t1 = rd32(rd32(COW_IMG(0x105781bcu)) + 8u);
    g->eax = t1;
    t2 = rd32(COW_IMG(0x105781bcu));
    t3 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t2, 2, t1, 0u);
    t4 = g->ecx;
    t5 = g->edx;
    g->edx = t5;
    cow_tailcall(g, COW_IMG(0x10037e90u), t3, t4, t5);
    return;
L_101352b9: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10135270(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10135270(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
