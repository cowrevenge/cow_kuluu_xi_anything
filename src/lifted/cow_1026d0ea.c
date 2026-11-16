/* f_0x1026d0ea - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1026d0ea(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, self);
    wr32(sp0 - 8u, 0xccccccccu);
    t1 = rd32(arg1 + 0x4004u);
    wr32(sp0 - 8u, t1);
    if (t1 != rd32(arg1 + 0x4000u))
    {
        loc_8 = t1;
        wr32(sp0 - 0xcu, 0x10u);
        t2 = arg1 + loc_8 * 0x10u;
        wr32(sp0 - 0x10u, t2);
        wr32(sp0 - 0x14u, arg2);
        g->esp = sp0;
        cow_cdecl(g, COW_IMG(0x103169e0u), 5, arg2, t2, 0x10u, loc_8, in_ebp);
        t3 = rd32(sp0 - 8u) + 1u & 0x3ffu;
        wr32(sp0 - 8u, t3);
        wr32(arg1 + 0x4004u, t3);
        eax = 0u;
        ecx = t3;
    }
    else
    {
        eax = t1;
        ecx = t1;
        eax = 0xffffffffu;
    }
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->esp = sp0 - 4u;
    cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026d0ea(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1026d0ea(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
