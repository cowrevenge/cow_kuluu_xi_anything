/* f_0x10067350 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_10067350(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 20u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_esi);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 - 0xcu, t1);
    wr8(self + 0x8035u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_call_regs(g, COW_IMG(0x100673a0u), t1, g->ecx, g->edx, 0, 1, t1);
    t3 = g->edx;
    if ((uint8_t)t2 != 1u)
    {
        eax = t2;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)t2;
    }
    else
    {
        eax = t2;
        edx = t3;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)t2;
        wr32(sp0 - 0xcu, 4u);
        wr32(sp0 - 0x10u, sp0 + 4u);
        wr8(sp0 + 4u, 0x7cu);
        wr8(sp0 + 7u, 0x70u);
        wr8(sp0 + 5u, 0u);
        wr8(sp0 + 6u, (uint8_t)eax);
        g->eax = eax;
        g->esp = sp0 - 8u;
        t4 = cow_thiscall(g, COW_IMG(0x10065d60u), self + 0x20u, 2, sp0 + 4u, 4u);
        eax = t4;
    }
    return (eax & 0xffffff00u) | (uint8_t)ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10067350(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10067350(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
