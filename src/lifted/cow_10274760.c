/* f_0x10274760 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=3 */
uint32_t cow_fn_10274760(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d5;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x10u, in_esi);
    t1 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x14u, t1);
    wr32(sp0 - 0x18u, t1);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_cdecl(g, COW_IMG(0x10274890u), 2, t1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    d5 = cow_take_float(g);
    wrf32(sp0 + 0xcu, (float)d5);
    if (!(d5 < rdf64(COW_IMG(0x10340b18u))))
    {
        ecx = t3;
        edx = t4;
        esi = t1;
        goto L_1027478e;
    }
    eax = (t2 & 0xffff0000u) | (uint16_t)cow_fsw(g, d5, rdf64(COW_IMG(0x10340b18u)), 0u);
    edx = t4;
    g->edx = edx;
    fpush(g, (double)rdf32(COW_IMG(0x103295d8u)));
    return eax;
L_1027478e: ;
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, arg2);
    wr32(sp0 - 0x20u, arg1);
    wr32(sp0 - 0x24u, sp0 - 0xcu);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102749e0u), 3, sp0 - 0xcu, arg1, arg2);
    t6 = g->edx;
    wr32(sp0 - 0x28u, esi);
    wr32(sp0 - 0x2cu, sp0 - 0xcu);
    g->edx = t6;
    g->esp = sp0 - 0x24u;
    t7 = cow_cdecl(g, COW_IMG(0x10274890u), 2, sp0 - 0xcu, esi);
    t8 = g->edx;
    d9 = cow_take_float(g);
    d10 = fr(g, d9 / (double)rdf32(sp0 + 0xcu));
    d11 = (double)(float)fr(g, fr(g, d10 * (double)rdf32(esi + 4u)) + (double)rdf32(arg2 + 4u));
    wrf32(sp0 - 8u, (float)d11);
    d12 = (double)(float)fr(g, fr(g, d10 * (double)rdf32(esi + 8u)) + (double)rdf32(arg2 + 8u));
    wrf32(sp0 - 4u, (float)d12);
    d13 = fr(g, (double)rdf32(arg1 + 8u) - d12);
    d14 = fr(g, (double)rdf32(arg1 + 4u) - d11);
    d15 = fr(g, (double)rdf32(arg1) - fr(g, fr(g, d10 * (double)rdf32(esi)) + (double)rdf32(arg2)));
    g->edx = t8;
    fpush(g, fr(g, fr(g, fr(g, d13 * d13) + fr(g, d14 * d14)) + fr(g, d15 * d15)));
    return t7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10274760(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10274760(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
