/* f_0x1027d130 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_1027d130(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d6;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    d1 = (double)rdf32(sp0 + 4u);
    d2 = (double)rdf32(COW_IMG(0x103295d8u));
    wr8(arg3, 0u);
    if (!(d1 <= d2))
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, d2, 0u);
        goto L_1027d151;
    }
    return 0u;
L_1027d151: ;
    d3 = (double)rdf32(sp0 + 4u);
    if ((cow_fsw(g, d3, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d3, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u;
        goto L_1027d16d;
    }
    return rd32(sp0 + 8u) - 1u;
L_1027d16d: ;
    t4 = rd32(sp0 + 8u) - 1u;
    t5 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, t4);
    d6 = fr(g, (double)(int32_t)rd32(sp0 + 8u) * (double)rdf32(sp0 + 4u));
    fpush(g, d6);
    g->esp = sp0 - 0xcu;
    t7 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    wr32(sp0 + 4u, t7);
    d8 = fr(g, d6 - (double)(int32_t)rd32(sp0 + 4u));
    wrf32(arg4, (float)d8);
    d9 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - d8);
    if (!(d9 < rdf64(COW_IMG(0x10340b40u))))
    {
        eax = (t7 & 0xffff0000u) | (uint16_t)cow_fsw(g, d9, rdf64(COW_IMG(0x10340b40u)), 1u);
        ecx = t7;
        esi = t5;
        edi = t4;
        x0 = d8;
        goto L_1027d1bc;
    }
    ecx = t7;
    esi = t5;
    x0 = d8;
    if (ecx + 1u != esi)
    {
        eax = ecx + 1u;
        goto L_1027d1e2;
    }
    eax = ecx + 1u;
    return eax - 1u;
L_1027d1bc: ;
    if (!(x0 < rdf64(COW_IMG(0x10340b40u)))) goto L_1027d1d3;
    if ((int32_t)ecx < (int32_t)esi) goto L_1027d1e0;
    return edi;
L_1027d1d3: ;
    if ((int32_t)ecx >= (int32_t)edi)
    {
        eax = ecx;
        goto L_1027d1e2;
    }
    eax = ecx;
    wr8(arg3, 0xffu);
    return eax;
L_1027d1e0: ;
    eax = ecx;
L_1027d1e2: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027d130(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1027d130(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
