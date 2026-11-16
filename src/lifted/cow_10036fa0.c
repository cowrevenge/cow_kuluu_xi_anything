/* f_0x10036fa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_10036fa0(Guest* g)
{
    double d2;
    double d6;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, 0u);
    t1 = (uint32_t)(int16_t)rd16(sp0 + 0x14u);
    wr32(sp0 + 0x14u, t1);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, arg4);
    wr32(sp0 - 0x24u, arg3);
    wr32(sp0 - 0x28u, arg2);
    d2 = (double)(float)(double)(int32_t)rd32(sp0 + 0x14u);
    wrf32(sp0 - 0x10u, (float)d2);
    wr32(sp0 - 0x2cu, arg1);
    wr32(sp0 - 0x30u, sp0 + 0x18u);
    wr32(sp0 - 0x34u, sp0 - 0x10u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 4u, 0u);
    g->ecx = arg1;
    g->edx = sp0 + 0x18u;
    g->esp = sp0 - 0x14u;
    t3 = cow_cdecl(g, COW_IMG(0x10036c70u), 8, sp0 - 0x10u, sp0 + 0x18u, arg1, arg2, arg3, arg4, 0u, 0u);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 != 0u)
    {
        eax = t3;
        ecx = t4;
        edx = t5;
        g->edx = edx;
        d6 = fr(g, (double)(int32_t)arg6 * (double)rdf32(COW_IMG(0x10351704u)));
        fpush(g, d6);
        g->esp = sp0 - 0x14u;
        t7 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t8 = g->edx;
        wr32(sp0 - 0x18u, t7);
        wr32(sp0 - 0x1cu, sp0 - 0x10u);
        cow_call_regs(g, COW_IMG(0x10036f50u), t7, self, g->edx, 0, 2, sp0 - 0x10u, t7);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10036fa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10036fa0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 24u);
}
/* COW_ADAPTER END */
