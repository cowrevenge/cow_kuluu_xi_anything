/* f_0x101f3740 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101f3740(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x14u) != rd32(rd32(COW_IMG(0x10663740u)) + 0x60u)) goto L_101f375e;
    eax = rd32(COW_IMG(0x10663740u));
    t1 = rd32(eax + 8u);
    g->esp = sp0;
    cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t1, 2, t1, 0u);
    return;
L_101f375e: ;
    t2 = rd32(rd32(COW_IMG(0x10663468u)) + 8u);
    g->esp = sp0;
    cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), in_edx, 2, t2, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f3740(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101f3740(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
