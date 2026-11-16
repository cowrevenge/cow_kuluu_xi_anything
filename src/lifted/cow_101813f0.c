/* f_0x101813f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_101813f0(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d6;
    double d7;
    uint32_t t4;
    uint32_t t5;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    wr32(sp0 - 0x18u, arg1);
    d1 = (double)rdf32(sp0 + 8u);
    wrf32(arg5, (float)d1);
    wr32(sp0 - 0x24u, arg1);
    wr32(sp0 - 0x10u, arg3);
    d2 = (double)(float)fr(g, (double)rdf32(sp0 + 8u) - (double)rdf32(COW_IMG(0x10336788u)));
    wrf32(sp0 - 0x14u, (float)d2);
    wr32(sp0 - 0x1cu, arg3);
    wr32(sp0 - 0x30u, sp0 - 0xcu);
    wr32(sp0 - 0x34u, sp0 - 0x24u);
    wr32(sp0 - 0x38u, sp0 - 0x18u);
    d3 = (double)(float)fr(g, (double)rdf32(sp0 + 8u) + (double)rdf32(sp0 + 0x10u));
    wrf32(sp0 - 0x20u, (float)d3);
    g->esp = sp0 - 0x2cu;
    t4 = cow_thiscall(g, COW_IMG(0x1016a2d0u), self + 0x178u, 3, sp0 - 0x18u, sp0 - 0x24u, sp0 - 0xcu);
    if ((uint8_t)t4 == 0u) goto L_10181463;
    t5 = rd32(sp0 - 8u);
    wr32(arg5, t5);
    return;
L_10181463: ;
    wr32(sp0 - 0x30u, sp0 - 0xcu);
    wr32(sp0 - 0x34u, sp0 - 0x24u);
    wr32(sp0 - 0x38u, sp0 - 0x18u);
    d6 = (double)(float)fr(g, (double)rdf32(sp0 + 8u) + (double)rdf32(COW_IMG(0x10336788u)));
    wrf32(sp0 - 0x14u, (float)d6);
    d7 = (double)(float)fr(g, (double)rdf32(sp0 + 8u) - (double)rdf32(COW_IMG(0x1033678cu)));
    wrf32(sp0 - 0x20u, (float)d7);
    g->esp = sp0 - 0x2cu;
    t8 = cow_thiscall(g, COW_IMG(0x1016a2d0u), self + 0x178u, 3, sp0 - 0x18u, sp0 - 0x24u, sp0 - 0xcu);
    if ((uint8_t)t8 != 0u)
    {
        t9 = rd32(sp0 - 8u);
        wr32(arg5, t9);
    }
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101813f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101813f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 20u);
}
/* COW_ADAPTER END */
