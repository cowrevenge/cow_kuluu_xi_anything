/* f_0x101248a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101248a0(Guest* g)
{
    double d6;
    double d8;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr32(self + 0x5cu, 0u);
    wr32(self + 0x60u, 0u);
    wr32(self + 0x64u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_call_regs(g, COW_IMG(0x101606f0u), in_eax, COW_IMG(0x10621838u), g->edx, 1, 0);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        loc_4 = self;
        goto L_10124924;
    }
    edx = t2;
    if ((rd32(self + 0x68u) & rd32(self + 0x58u)) == 0u) goto L_1012491a;
    eax = rd32(self + 0x58u);
    ecx = rd32(self + 0x68u);
    if (rd32(self + 0x70u) != 0xc479c000u) goto L_101248dc;
    wr32(self + 0x70u, 0x41c00000u);
    return;
L_101248dc: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t4 = g->ecx;
    t5 = g->edx;
    d6 = cow_take_float(g);
    fpush(g, d6);
    t7 = cow_call_regs(g, COW_IMG(0x10311c6cu), t3, g->ecx, g->edx, 1, 0);
    d8 = fr(g, (double)rdf32(self + 0x70u) - (double)(int32_t)(uint32_t)(int16_t)t7);
    wrf32(self + 0x70u, (float)d8);
    if (!(d8 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        loc_4 = (uint32_t)(int16_t)t7;
        goto L_10124924;
    }
    loc_4 = (uint32_t)(int16_t)t7;
    t9 = rd32(self + 0x5cu);
    t10 = rd32(self + 0x68u);
    wr32(self + 0x70u, 0x41400000u);
    wr32(self + 0x5cu, t9 | t10);
    return;
L_1012491a: ;
    wr32(self + 0x68u, 0u);
    wr32(self + 0x70u, 0xc479c000u);
    loc_4 = self;
L_10124924: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101248a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101248a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
