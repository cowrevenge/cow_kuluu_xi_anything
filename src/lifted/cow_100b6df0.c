/* f_0x100b6df0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b6df0(Guest* g)
{
    uint32_t ecx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if (rd16(COW_IMG(0x10482f1cu)) != rd16(COW_IMG(0x10485fe4u) + (uint32_t)(int8_t)rd8(COW_IMG(0x10482f1fu)) * 2u)) goto L_100b6e24;
    ecx = (self & 0xffff0000u) | rd16(COW_IMG(0x10482f1cu));
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x10037320u), 0);
    wr8(self + 0x25au, 1u);
    if ((uint8_t)t1 != 0u) goto L_100b6e2b;
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 1u));
    return;
L_100b6e24: ;
    wr8(self + 0x25au, 1u);
L_100b6e2b: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b6df0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b6df0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
