/* f_0x10181930 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_10181930(Guest* g)
{
    double d4;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0x14u, in_esi);
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    if (t1 != 0u)
    {
        eax = t1;
        goto L_1018194b;
    }
    eax = t1;
    return eax & 0xffffff00u;
L_1018194b: ;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t2 = cow_thiscall(g, rd32(rd32(eax) + 0x1bcu), eax, 0);
    wr32(sp0 - 0xcu, rd32(t2));
    wr32(sp0 - 0x18u, sp0 - 0x10u);
    t3 = rd32(t2 + 8u);
    wr32(sp0 - 0x1cu, 0x41200000u);
    wr32(sp0 - 0x20u, t3);
    wr32(sp0 - 0x24u, t3);
    wr32(sp0 - 4u, t3);
    d4 = (double)(float)fr(g, (double)rdf32(t2 + 4u) - (double)rdf32(COW_IMG(0x1032961cu)));
    wrf32(sp0 - 0x24u, (float)d4);
    wr32(sp0 - 0x28u, rd32(t2));
    g->edx = rd32(t2);
    t5 = rd32(t2);
    t6 = cow_thiscall(g, COW_IMG(0x10181210u), self, 5, t5, cow_f2bits(d4), t3, 0x41200000u, sp0 - 0x10u);
    t7 = g->edx;
    d8 = cow_take_float(g);
    d9 = cow_take_float(g);
    if ((uint8_t)t6 != 0u)
    {
        edx = t7;
        x1 = d9;
        x0 = d8;
        goto L_10181991;
    }
    eax = t6;
    x1 = d9;
    x0 = d8;
    g->esi = rd32(sp0 - 0x14u);
    fpush(g, x0);
    fpush(g, x1);
    return eax;
L_10181991: ;
    g->esp = sp0 - 0x14u;
    t10 = cow_thiscall(g, COW_IMG(0x10168fc0u), self + 0x178u, 0);
    g->esi = rd32(sp0 - 0x14u);
    fpush(g, x0);
    fpush(g, x1);
    return (t10 & 0xffffff00u) | rd8(COW_IMG(0x10377328u) + t10);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10181930(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10181930(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
