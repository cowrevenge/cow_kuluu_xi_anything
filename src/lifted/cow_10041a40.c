/* f_0x10041a40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=0 */
uint32_t cow_fn_10041a40(Guest* g)
{
    double d3;
    double d7;
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0x14u, in_esi);
    if (rd32(self + 0x104u) == 0u)
    {
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    else
    {
        eax = rd32(self + 0x104u);
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
        if (rd8(self + 0x179u) == 0u)
        {
            if (rd32(self + 0x104u) == 0u)
            {
                eax = 0u;
            }
            else
            {
                eax = rd32(self + 0x104u);
                eax = rd32(eax);
            }
            g->esp = sp0 - 0x14u;
            t1 = cow_call_regs(g, COW_IMG(0x1003fcd0u), eax, eax, g->edx, 1, 0);
            wr32(sp0 - 0x10u, (uint16_t)t1);
            x0 = (double)(int32_t)(uint16_t)t1;
        }
        else
        {
            x0 = (double)rdf32(eax + 0xd4u);
        }
    }
    wrf32(sp0 - 0xcu, (float)(double)(float)x0);
    wr32(sp0 - 0x18u, sp0 - 0xcu);
    wr32(sp0 - 0x1cu, self + 0x60u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 0x20u, sp0 - 0xcu);
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x50u), rd32(COW_IMG(0x1047cf7cu)), 3, sp0 - 0xcu, self + 0x60u, sp0 - 0xcu);
    wr32(sp0 - 0x18u, sp0 - 0xcu);
    g->edx = sp0 - 0xcu;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x94u), rd32(COW_IMG(0x1047cf7cu)), 1, sp0 - 0xcu);
    t2 = g->edx;
    d3 = cow_take_float(g);
    wrf32(sp0 - 0x10u, (float)(double)(float)d3);
    wr32(sp0 - 0x18u, self + 0x188u);
    g->eax = rd32(rd32(COW_IMG(0x1047cf7cu)));
    g->edx = t2;
    t4 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t5 = cow_thiscall(g, rd32(t4 + 0x94u), rd32(COW_IMG(0x1047cf7cu)), 1, self + 0x188u);
    t6 = g->edx;
    d7 = cow_take_float(g);
    g->edx = t6;
    fpush(g, fr(g, d7 + (double)rdf32(sp0 - 0x10u)));
    return t5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10041a40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10041a40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
