/* f_0x100a77a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100a77a0(Guest* g)
{
    double d3;
    double d4;
    double d6;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t5;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x104e1d4cu)) == 0u)
    {
        eax = rd32(sp0 - 4u);
        ecx = rd32(sp0 - 8u);
        edx = rd32(sp0 - 4u);
        esi = rd32(sp0 - 8u);
    }
    else
    {
        eax = rd32(COW_IMG(0x104e1d4cu));
        ecx = rd32(eax + 4u);
        edx = rd32(eax + 0x3cu);
        esi = rd32(eax + 0x38u);
        eax = rd32(eax + 8u);
    }
    t1 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
    t2 = (uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u)));
    d3 = fr(g, (double)(int32_t)(ecx - esi) / fr(g, (double)(int32_t)t1 * (double)rdf32(COW_IMG(0x1032df9cu))));
    if (!(d3 < (double)rdf32(COW_IMG(0x1032961cu))))
    {
        ecx = t1;
        x1 = -fr(g, (double)(int32_t)(eax - edx) / fr(g, (double)(int32_t)t2 * (double)rdf32(COW_IMG(0x1032df9cu))));
        eax = (t2 & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, (double)rdf32(COW_IMG(0x1032961cu)), 2u);
        edx = (edx & 0xffff0000u) | (uint16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u)));
        x0 = d3;
        goto L_100a786c;
    }
    ecx = t1;
    x1 = -fr(g, (double)(int32_t)(eax - edx) / fr(g, (double)(int32_t)t2 * (double)rdf32(COW_IMG(0x1032df9cu))));
    eax = (t2 & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, (double)rdf32(COW_IMG(0x1032961cu)), 2u);
    edx = (edx & 0xffff0000u) | (uint16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u)));
    x0 = d3;
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3f0u)), 2u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3f0u)), 2u) & 0x4100u;
        goto L_100a786c;
    }
    eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3f0u)), 2u) & 0x4100u;
    if (!(x1 < (double)rdf32(COW_IMG(0x1032961cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x1, (double)rdf32(COW_IMG(0x1032961cu)), 2u);
        goto L_100a786c;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x1, (double)rdf32(COW_IMG(0x1032961cu)), 2u);
    if ((cow_fsw(g, x1, (double)rdf32(COW_IMG(0x1032a3f0u)), 2u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x1, (double)rdf32(COW_IMG(0x1032a3f0u)), 2u) & 0x4100u;
        goto L_100a786c;
    }
    eax = cow_fsw(g, x1, (double)rdf32(COW_IMG(0x1032a3f0u)), 2u) & 0x4100u;
    return eax & 0xffffff00u;
L_100a786c: ;
    d4 = fr(g, fr(g, fr(g, fr(g, fr(g, atan2(x1, x0)) + (double)rdf32(COW_IMG(0x1032df98u))) * (double)rdf32(COW_IMG(0x1032df94u))) + (double)rdf32(COW_IMG(0x1032b088u))) * (double)rdf32(COW_IMG(0x1032a1acu)));
    fpush(g, d4);
    g->esp = sp0 - 8u;
    t5 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    d6 = fr(g, fr(g, fr(g, (double)(int32_t)(t5 & 0xfu) * (double)rdf32(COW_IMG(0x1032a9f0u))) * (double)rdf32(COW_IMG(0x1032df90u))) - (double)rdf32(COW_IMG(0x1032df98u)));
    wrf32(arg2, (float)fr(g, cos(d6)));
    wrf32(arg3, (float)fr(g, sin(d6)));
    wrf32(arg1, (float)d6);
    return (arg1 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a77a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a77a0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
