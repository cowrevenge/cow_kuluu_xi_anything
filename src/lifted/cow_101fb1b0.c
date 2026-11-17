/* f_0x101fb1b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101fb1b0(Guest* g)
{
    double d14;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = rd32(self + 0xa4cu) + rd8(self + 0xa51u);
    g->eax = t1;
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall_cdecl(g, COW_IMG(0x101cc620u), self + 0x6c4u, 2, t1, self + 0x6c4u);
    if (t2 == 0u) goto L_101fb2b0;
    eax = t2;
    wr16(self + 0x6cu, 0u);
    wr16(self + 0x54u, 0xff00u);
    wr16(self + 0x56u, 0xff00u);
    wr16(self + 0x6eu, 0u);
    t3 = rd32(rd32(eax));
    wr32(self + 0x8cu, self + 0x168u);
    wr32(self + 0x168u, t3);
    wr16(self + 0x14u, rd16(self + 0x14u) | 1u);
    wr16(self + 0x78u, 1u);
    wr8(self + 0xa2u, 1u);
    t4 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
    t5 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
    t6 = rd32(COW_IMG(0x106218b4u));
    d7 = fr(g, (double)(int32_t)t4 * (double)rdf32(COW_IMG(0x1032ac88u)));
    wr16(self + 0x14u, (rd16(self + 0x14u) & 0xffffff00u) | (uint8_t)(rd16(self + 0x14u) | 2u));
    d8 = fr(g, (double)(int32_t)t5 * (double)rdf32(COW_IMG(0x1032ac88u)));
    d9 = fr(g, d7 * (double)rdf32(COW_IMG(0x1032a3a0u)));
    wrf32(self + 0x60u, (float)d8);
    wrf32(self + 0x64u, (float)d9);
    t10 = rd32(COW_IMG(0x106218b4u));
    t11 = rd32(COW_IMG(0x106218b8u));
    g->esp = sp0 - 0xcu;
    t12 = cow_call_regs(g, COW_IMG(0x10193850u), t10, g->ecx, g->edx, 1, 1, 0x8au);
    t13 = (uint32_t)(int16_t)(t11 - t10);
    d14 = fr(g, fr(g, (double)(int32_t)t12 * fr(g, (double)(int32_t)t13 * (double)rdf32(COW_IMG(0x1032ac88u)))) * (double)rdf32(COW_IMG(0x1032a22cu)));
    wrf32(self + 0x68u, (float)d14);
    wrf32(self + 0x58u, (float)d14);
    g->esp = sp0;
    g->edx = t13;
    cow_tailcall(g, COW_IMG(0x101ee040u), t12, self, t13);
    return;
L_101fb2b0: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fb1b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101fb1b0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
