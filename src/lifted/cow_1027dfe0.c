/* f_0x1027dfe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_1027dfe0(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d7;
    double d8;
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (!(rd32(arg3) >> 8u & 1u))
    {
        t4 = rd32(arg3 + 0xacu);
        g->eax = arg2;
        g->edx = t4;
        g->esp = sp0 - 8u;
        t5 = cow_cdecl(g, COW_IMG(0x1028d910u), 2, arg2, t4);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
    else
    {
        t1 = (uint32_t)((int32_t)rd32(arg3 + 0x98u) >> 1u);
        g->eax = t1;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t2 = cow_thiscall_cdecl(g, COW_IMG(0x1028d930u), arg2, 3, arg2, t1, in_edi);
        t3 = g->edx;
        eax = t2;
        edx = t3;
    }
    if (rd32(arg3 + 0x9cu) == 0x3f800000u)
    {
        esi = eax;
        eax = rd32(arg3 + 0x9cu);
    }
    else
    {
        esi = eax;
        eax = rd32(arg3 + 0x9cu);
        d7 = fr(g, (double)rdf32(esi) * (double)rdf32(arg3 + 0x9cu));
        wrf32(esi, (float)d7);
        d8 = fr(g, (double)rdf32(arg3 + 0x9cu) * (double)rdf32(esi + 8u));
        wrf32(esi + 8u, (float)d8);
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x1027ca10u), 2, arg1, esi);
    t9 = g->edx;
    if (rd32(arg3 + 0x9cu) == 0x3f800000u)
    {
        eax = rd32(arg3 + 0x9cu);
        edx = t9;
    }
    else
    {
        eax = rd32(arg3 + 0x9cu);
        edx = t9;
        d10 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(arg3 + 0x9cu));
        d11 = fr(g, d10 * (double)rdf32(esi));
        wrf32(esi, (float)d11);
        d12 = fr(g, d10 * (double)rdf32(esi + 8u));
        wrf32(esi + 8u, (float)d12);
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027dfe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1027dfe0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
