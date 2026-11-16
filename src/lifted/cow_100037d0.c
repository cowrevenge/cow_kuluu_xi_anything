/* f_0x100037d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=7 */
void cow_fn_100037d0(Guest* g)
{
    double d1;
    double d3;
    double d4;
    double d7;
    uint32_t eax;
    uint32_t ecx;
    uint32_t t2;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0xcu) == 0u) goto L_10003889;
    ecx = rd32(self + 0xcu);
    if (rd32(arg1) <= 0x900u)
    {
        eax = rd32(arg1);
        goto L_10003809;
    }
    eax = rd32(arg1);
    g->esp = sp0 - 0x18u;
    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    return;
L_10003809: ;
    d1 = (double)rdf32(sp0 + 8u);
    wr32(eax * 8u + ecx, eax);
    t2 = rd32(arg1 + 4u);
    wr32(rd32(arg1) * 8u + rd32(self + 0xcu) + 4u, t2);
    wrf32(rd32(arg1) * 0x10u + rd32(self + 0x10u), (float)d1);
    d3 = (double)rdf32(sp0 + 0xcu);
    wrf32(rd32(arg1) * 0x10u + rd32(self + 0x10u) + 4u, (float)d3);
    d4 = (double)rdf32(sp0 + 0x10u);
    wrf32(rd32(arg1) * 0x10u + rd32(self + 0x10u) + 8u, (float)d4);
    t5 = rd32(arg1);
    t6 = rd32(self + 0x10u);
    d7 = (double)rdf32(sp0 + 0x14u);
    wrf32(t5 * 0x10u + t6 + 0xcu, (float)d7);
    t8 = (rd32(arg1) << 0xau) + rd32(self + 0x14u);
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10312090u), t5 << 4u, g->ecx, g->edx, 1, 3, t8, arg6, 0x400u);
    wr8(t8 + 0x3ffu, 0u);
    wr32(rd32(arg1) * 4u + rd32(self + 0x18u), arg7);
L_10003889: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100037d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100037d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 28u);
}
/* COW_ADAPTER END */
