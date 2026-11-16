/* f_0x10226ae0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10226ae0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint32_t)(int16_t)arg1 == 5u) goto L_10226b08;
    if ((uint32_t)(int16_t)arg1 == 6u) goto L_10226b0f;
    if ((uint32_t)(int16_t)arg1 - 6u == 2u) goto L_10226b16;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10222150u), self, 2, arg1, arg2);
    return;
L_10226b08: ;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x102267f0u), self, 0);
L_10226b0f: ;
    wr32(self + 0x64u, 1u);
L_10226b16: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10226ae0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10226ae0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
