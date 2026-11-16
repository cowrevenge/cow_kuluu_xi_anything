/* f_0x10230740 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10230740(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr32(self + 0x68u, arg1);
    if (arg1 > 6u) goto L_102307bd;
    t1 = rd32(COW_IMG(0x102307ccu) + arg1 * 4u);
    switch (t1 - RD)
    {
    case 0x10230756u: goto L_10230756;
    case 0x10230774u: goto L_10230774;
    case 0x1023078au: goto L_1023078a;
    case 0x102307a0u: goto L_102307a0;
    case 0x102307b6u: goto L_102307b6;
    default: rt_fatal(g, COW_IMG(0x1023074fu), "switch");
    }
    return;
L_10230756: ;
    t2 = (uint32_t)(int8_t)rd8(COW_IMG(0x1047fe8eu));
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x102307f0u), self, 1, t2);
    wr32(self + 0x64u, 0u);
    wr8(self + 0x90u, 0u);
    return;
L_10230774: ;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10231550u), self, 0);
    wr32(self + 0x64u, 0u);
    wr8(self + 0x90u, 0u);
    return;
L_1023078a: ;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10231610u), self, 0);
    wr32(self + 0x64u, 0u);
    wr8(self + 0x90u, 0u);
    return;
L_102307a0: ;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x102316e0u), self, 0);
    wr32(self + 0x64u, 0u);
    wr8(self + 0x90u, 0u);
    return;
L_102307b6: ;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10231c20u), self, 0);
L_102307bd: ;
    wr32(self + 0x64u, 0u);
    wr8(self + 0x90u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10230740(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10230740(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
