/* f_0x10096040 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10096040(Guest* g)
{
    double d2;
    double d3;
    double d4;
    double d6;
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t5;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0x14u, in_esi);
    if (rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40d7cu) != 9u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_100960de;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    if (rd8(arg1 + 0xeeu) == 4u) goto L_100960de;
    g->esp = sp0 - 0x14u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc4f0u), eax, g->ecx, g->edx, 1, 0);
    if (t1 == 0u)
    {
        eax = t1;
        goto L_100960de;
    }
    eax = t1;
    ecx = t1;
    d2 = fr(g, (double)rdf32(arg1 + 8u) - (double)rdf32(ecx + 8u));
    if (!(d2 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        x1 = d2;
        x0 = d2;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        x1 = d2;
        x0 = d2;
        x1 = -x1;
    }
    if ((cow_fsw(g, x1, (double)rdf32(COW_IMG(0x1032a1acu)), 1u) & 0x4100u) != 0u) goto L_1009609e;
    eax = cow_fsw(g, x1, (double)rdf32(COW_IMG(0x1032a1acu)), 1u) & 0x4100u;
    g->esi = rd32(sp0 - 0x14u);
    return (eax & 0xffffff00u) | 1u;
L_1009609e: ;
    d3 = (double)(float)fr(g, (double)rdf32(arg1 + 4u) - (double)rdf32(ecx + 4u));
    wrf32(sp0 - 0x10u, (float)d3);
    wrf32(sp0 - 0xcu, (float)(double)(float)x0);
    wr32(sp0 - 0x18u, sp0 - 0x10u);
    wr32(sp0 - 0x1cu, sp0 - 0x10u);
    d4 = (double)(float)fr(g, (double)rdf32(arg1 + 0xcu) - (double)rdf32(ecx + 0xcu));
    wrf32(sp0 - 8u, (float)d4);
    g->esp = sp0 - 0x14u;
    t5 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x10u, sp0 - 0x10u);
    d6 = cow_take_float(g);
    if ((cow_fsw(g, d6, (double)rdf32(COW_IMG(0x1032d6c4u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d6, (double)rdf32(COW_IMG(0x1032d6c4u)), 0u) & 0x4100u;
        goto L_100960de;
    }
    eax = cow_fsw(g, d6, (double)rdf32(COW_IMG(0x1032d6c4u)), 0u) & 0x4100u;
    g->esi = rd32(sp0 - 0x14u);
    return (eax & 0xffffff00u) | 1u;
L_100960de: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10096040(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10096040(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
