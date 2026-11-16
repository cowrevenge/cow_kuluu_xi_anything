/* f_0x100aa3e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
uint32_t cow_fn_100aa3e0(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d7;
    double d9;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 108u);

    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, arg2);
    wr32(sp0 - 0x30u, arg3);
    wr32(sp0 - 0x34u, sp0 - 0xcu);
    g->edx = sp0 - 0xcu;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0xcu, arg3, arg2);
    t1 = g->edx;
    wr32(sp0 - 0x38u, arg4);
    wr32(sp0 - 0x3cu, arg5);
    wr32(sp0 - 0x40u, sp0 - 0x24u);
    g->ecx = sp0 - 0x24u;
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x24u, arg5, arg4);
    t2 = g->ecx;
    wr32(sp0 - 0x44u, sp0 - 0xcu);
    wr32(sp0 - 0x48u, sp0 - 0xcu);
    g->eax = sp0 - 0xcu;
    g->esp = sp0 - 0x3cu;
    t3 = cow_cdecl(g, COW_IMG(0x10027510u), 3, sp0 - 0xcu, sp0 - 0xcu, sp0 - 0x24u);
    wr32(sp0 - 0x4cu, sp0 - 0x24u);
    wr32(sp0 - 0x50u, sp0 - 0x24u);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x10027510u), 3, sp0 - 0x24u, sp0 - 0x24u, sp0 - 0xcu);
    wr32(sp0 - 0x54u, sp0 - 0x24u);
    wr32(sp0 - 0x58u, sp0 - 0xcu);
    wr32(sp0 - 0x5cu, sp0 - 0x18u);
    g->esp = sp0 - 0x50u;
    cow_cdecl(g, COW_IMG(0x10027550u), 3, sp0 - 0x18u, sp0 - 0xcu, sp0 - 0x24u);
    wr32(sp0 - 0x60u, sp0 - 0xcu);
    wr32(sp0 - 0x64u, sp0 - 0x18u);
    wr32(sp0 - 0x68u, sp0 - 0x18u);
    g->eax = sp0 - 0xcu;
    g->ecx = sp0 - 0x18u;
    g->edx = sp0 - 0x18u;
    g->esp = sp0 - 0x5cu;
    t4 = cow_cdecl(g, COW_IMG(0x10027550u), 3, sp0 - 0x18u, sp0 - 0x18u, sp0 - 0xcu);
    t5 = g->ecx;
    t6 = g->edx;
    d7 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x1cu) * (double)rdf32(sp0 - 0x10u)) + fr(g, (double)rdf32(sp0 - 0x20u) * (double)rdf32(sp0 - 0x14u))) + fr(g, (double)rdf32(sp0 - 0x24u) * (double)rdf32(sp0 - 0x18u)));
    if (d7 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        x0 = d7;
        goto L_100aa493;
    }
    ecx = t5;
    edx = t6;
    x0 = d7;
    wr32(sp0 - 0x2cu, arg4);
    wr32(sp0 - 0x30u, arg1);
    g->eax = arg1;
    g->esp = sp0 - 0x28u;
    t8 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, arg1, arg4);
    return t8;
L_100aa493: ;
    d9 = fr(g, fr(g, (double)rdf32(sp0 - 0x24u) * -fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x10u) * (double)rdf32(arg4 + 8u)) + fr(g, (double)rdf32(sp0 - 0x14u) * (double)rdf32(arg4 + 4u))) + fr(g, (double)rdf32(sp0 - 0x18u) * (double)rdf32(arg4))) / x0)) + (double)rdf32(arg4));
    d10 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x10u) * (double)rdf32(arg4 + 8u)) + fr(g, (double)rdf32(sp0 - 0x14u) * (double)rdf32(arg4 + 4u))) + fr(g, (double)rdf32(sp0 - 0x18u) * (double)rdf32(arg4))) / x0);
    wrf32(arg1, (float)d9);
    d11 = fr(g, fr(g, (double)rdf32(sp0 - 0x20u) * -d10) + (double)rdf32(arg4 + 4u));
    wrf32(arg1 + 4u, (float)d11);
    d12 = fr(g, fr(g, (double)rdf32(sp0 - 0x1cu) * -d10) + (double)rdf32(arg4 + 8u));
    wrf32(arg1 + 8u, (float)d12);
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100aa3e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100aa3e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
