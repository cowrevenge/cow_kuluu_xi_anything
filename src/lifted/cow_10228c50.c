/* f_0x10228c50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10228c50(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 16u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, sp0 - 4u);
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x100e47a0u), 1, sp0 - 4u);
    t1 = rd32(self + 0x64u);
    wr32(self + 4u, t1);
    t2 = cow_stdcall(g, COW_IMG(0x100e4610u), 0);
    if ((uint8_t)t2 == 0u)
    {
        t3 = rd32(self + 0x68u);
        wr32(self + 4u, t3);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10228c50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10228c50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
