/* f_0x10318203 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10318203(Guest* g)
{
    double d1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 96u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, sp0 - 0x2cu);
    wr32(sp0 - 0x38u, sp0 - 0x14u);
    wr32(sp0 - 0x3cu, self);
    wr32(sp0 - 0x40u, self);
    wrf64(sp0 - 0x40u, rdf64(arg1));
    g->edx = in_edx;
    d1 = rdf64(arg1);
    g->esp = sp0 - 0x30u;
    cow_thiscall_cdecl(g, COW_IMG(0x103239dcu), self, 4, cow_dlo(d1), cow_dhi(d1), sp0 - 0x14u, sp0 - 0x2cu);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x44u, sp0 - 0x14u);
    t4 = arg3 + rd32(sp0 - 0x10u);
    wr32(sp0 - 0x48u, t4);
    t5 = arg2 + (rd32(sp0 - 0x14u) == 0x2du);
    wr32(sp0 - 0x4cu, t5);
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x38u;
    cow_cdecl(g, COW_IMG(0x10323965u), 5, t5, t4, sp0 - 0x14u, rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu));
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x54u, sp0 - 0x14u);
    wr32(sp0 - 0x58u, arg3);
    wr32(sp0 - 0x5cu, arg2);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x10318258u), 6, arg2, arg3, sp0 - 0x14u, 0u, rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u));
    return arg2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10318203(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10318203(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
