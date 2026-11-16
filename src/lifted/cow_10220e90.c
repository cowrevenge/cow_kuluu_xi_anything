/* f_0x10220e90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10220e90(Guest* g)
{
    double d1;
    double d5;
    double d6;
    uint32_t eax;
    uint32_t ecx;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 12u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    if (rd32(self + 4u) == 0u) goto L_10220ee0;
    eax = rd32(self + 4u);
    d1 = (double)(float)(double)(int32_t)rd32(self + 0xcu);
    wrf32(sp0 - 4u, (float)d1);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    d5 = cow_take_float(g);
    d6 = fr(g, (double)rdf32(sp0 - 4u) - d5);
    fpush(g, d6);
    t7 = cow_call_regs(g, COW_IMG(0x10311c6cu), t2, g->ecx, g->edx, 1, 0);
    wr32(self + 0xcu, t7);
    if ((int32_t)t7 > 0) goto L_10220ee0;
    t8 = rd32(self + 8u) + 1u;
    wr32(self + 8u, t8);
    if (rd32(t8 * 8u + rd32(self + 4u)) == 0xffffffffu)
    {
        eax = rd32(self + 4u);
        goto L_10220ed3;
    }
    eax = rd32(self + 4u);
    ecx = t8;
    t9 = rd32(eax + ecx * 8u + 4u);
    wr32(self + 0xcu, t9);
    g->esi = rd32(sp0 - 8u);
    return;
L_10220ed3: ;
    wr32(self + 8u, 0u);
    t10 = rd32(eax + 4u);
    wr32(self + 0xcu, t10);
L_10220ee0: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10220e90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10220e90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
