/* f_0x102bea3f - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102bea3f(Guest* g)
{
    double d1;
    double d4;
    double d5;
    double d6;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    d1 = fr(g, fr(g, rdf64(sp0 + 8u) * rdf64(sp0 + 0x10u)) - rdf64(COW_IMG(0x1032a100u)));
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall_cdecl(g, COW_IMG(0x1031731cu), self, 2, cow_dlo(d1), cow_dhi(d1));
    t3 = g->edx;
    d4 = cow_take_float(g);
    if ((cow_fsw(g, d4, rdf64(COW_IMG(0x1033cd90u)), 0u) >> 8u & 0x41u) == 0u)
    {
        edx = t3;
        goto L_102bea7a;
    }
    ecx = cow_dhi(d1);
    edx = t3;
    if ((rd8(arg1 + 0x126u) & 4u) != 0u) goto L_102bea7a;
    ecx = (ecx & 0xffffff00u) | rd8(arg1 + 0x126u);
    if ((uint8_t)ecx != 3u) goto L_102bea7e;
L_102bea7a: ;
    wr8(arg1 + 0x71u, rd8(arg1 + 0x71u) | 0x20u);
L_102bea7e: ;
    d5 = rdf64(sp0 + 0x10u);
    wrf32(arg1 + 0x15cu, (float)d5);
    d6 = rdf64(sp0 + 8u);
    wrf32(arg1 + 0x160u, (float)d6);
    g->edx = edx;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bea3f(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102bea3f(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
