/* f_0x10274390 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10274390(Guest* g)
{
    double d7;
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(arg1 + 0x20u) + rd32(sp0 + 8u) * 0xd8u + 0x70u;
    g->edx = rd32(arg1 + 0x20u);
    t2 = rd32(sp0 + 8u);
    t3 = rd32(arg1 + 0x20u);
    g->esp = sp0 - 4u;
    t4 = cow_cdecl(g, COW_IMG(0x1027e460u), 1, t1);
    t5 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        goto L_102743f5;
    }
    edx = t5;
    esi = t1;
    if (rd32(esi + 0x3cu) == 0u)
    {
        eax = rd32(esi + 0x3cu);
        goto L_102743f5;
    }
    eax = rd32(esi + 0x3cu);
    t6 = rd32(eax + 0x28u);
    d7 = fr(g, fr(g, (double)rdf32(esi + 0x10u) - (double)rdf32(esi + 8u)) / (double)rdf32(eax + 0x24u));
    wrf32(sp0 + 8u, (float)d7);
    t8 = rd32(sp0 + 8u);
    g->esp = sp0;
    t9 = cow_call_regs(g, COW_IMG(0x10284f70u), g->eax, g->ecx, edx, 1, 3, t6, t8, in_esi);
    if (arg3 == 0u)
    {
        eax = t9;
    }
    else
    {
        eax = t9;
        t10 = rd32(eax + 4u);
        wr32(arg3, t10);
    }
    if (arg4 != 0u)
    {
        wr32(arg4, rd32(eax));
    }
    return 0u;
L_102743f5: ;
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10274390(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10274390(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
