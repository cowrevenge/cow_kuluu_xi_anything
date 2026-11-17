/* f_0x102b51c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=4 */
void cow_fn_102b51c0(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d4;
    double d8;
    double d9;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0xcu, in_esi);
    if (rd32(sp0 + 0x10u) != 1u)
    {
        esi = rd32(sp0 + 0x10u);
        goto L_102b51e9;
    }
    t1 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x10u, t1);
    t2 = rd32(sp0 + 8u);
    wr32(sp0 - 0x14u, t2);
    t3 = rd32(sp0 + 4u);
    wr32(sp0 - 0x18u, t3);
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x102b4d60u), t1, g->ecx, g->edx, 1, 3, t3, t2, t1);
    d4 = cow_take_float(g);
    fpush(g, d4);
    return;
L_102b51e9: ;
    wr32(sp0 + 0x10u, 0x3f800000u);
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 8u, 0u);
    if (esi == 0u)
    {
        loc_4 = 0u;
        goto L_102b5263;
    }
    loc_4 = 0u;
L_102b5205: ;
    t5 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x10u, t5);
    t6 = rd32(sp0 + 8u);
    wr32(sp0 - 0x14u, t6);
    t7 = rd32(sp0 + 4u);
    wr32(sp0 - 0x18u, t7);
    d8 = (double)(float)fr(g, cow_bits2f(loc_4) + (double)rdf32(sp0 + 0x10u));
    wrf32(sp0 - 4u, (float)d8);
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x102b4d60u), t5, g->ecx, g->edx, 1, 3, t7, t6, t5);
    d9 = cow_take_float(g);
    d10 = (double)(float)fr(g, fr(g, d9 * (double)rdf32(sp0 + 0x10u)) + (double)rdf32(sp0 - 8u));
    wrf32(sp0 - 8u, (float)d10);
    d11 = fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 + 0x10u, (float)d11);
    d12 = (double)rdf32(sp0 + 4u);
    wrf32(sp0 + 4u, (float)fr(g, d12 + d12));
    d13 = (double)rdf32(sp0 + 8u);
    wrf32(sp0 + 8u, (float)fr(g, d13 + d13));
    d14 = (double)rdf32(sp0 + 0xcu);
    wrf32(sp0 + 0xcu, (float)fr(g, d14 + d14));
    if (esi != 1u)
    {
        esi = esi - 1u;
        loc_4 = rd32(sp0 - 4u);
        goto L_102b5205;
    }
    loc_4 = rd32(sp0 - 4u);
L_102b5263: ;
    fpush(g, fr(g, (double)rdf32(sp0 - 8u) / cow_bits2f(loc_4)));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b51c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102b51c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
