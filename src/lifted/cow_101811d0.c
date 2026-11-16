/* f_0x101811d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101811d0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, sp0 + 0xcu);
    wr32(sp0 - 0xcu, 0x41200000u);
    wr32(sp0 - 0x10u, arg3);
    wr32(sp0 - 0x14u, arg2);
    wr32(sp0 - 0x18u, arg1);
    g->eax = arg1;
    g->edx = arg2;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10181290u), self, 5, arg1, arg2, arg3, 0x41200000u, sp0 + 0xcu);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        edx = t2;
        goto L_101811fd;
    }
    return 0u;
L_101811fd: ;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x10168fd0u), self + 0x178u, 0);
    return t3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101811d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101811d0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
