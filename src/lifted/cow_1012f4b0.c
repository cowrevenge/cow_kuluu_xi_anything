/* f_0x1012f4b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1012f4b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if ((int32_t)rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2ca18u) <= 0) goto L_1012f4eb;
    eax = rd32(COW_IMG(0x104dfd98u));
    ecx = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2ca18u);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x100f7df0u), 0);
    if ((uint8_t)t1 == 0u) goto L_1012f4e0;
    wr32(self + 0x1c0u, 0x12cu);
    wr16(self + 0x1b4u, 4u);
    return;
L_1012f4e0: ;
    wr16(self + 0x1b4u, 0x1au);
    return;
L_1012f4eb: ;
    wr16(self + 0x1b4u, 5u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012f4b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1012f4b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
