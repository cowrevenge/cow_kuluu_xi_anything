/* f_0x101a44d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101a44d0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd8(self + 0xcu) != 1u) goto L_101a4511;
    g->edx = in_edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037aaa8u), 1u, 0u);
    t1 = g->edx;
    g->edx = t1;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103762ecu), 1u, 0u);
    t2 = g->edx;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10376314u), 1u, 0u);
    return;
L_101a4511: ;
    g->edx = in_edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037aaa8u), 1u, 0u);
    t3 = g->edx;
    g->edx = t3;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10376314u), 1u, 0u);
    t4 = g->edx;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103762ecu), 1u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a44d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101a44d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
