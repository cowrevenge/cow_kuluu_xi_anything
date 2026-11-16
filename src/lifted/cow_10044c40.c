/* f_0x10044c40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10044c40(Guest* g)
{
    double d11;
    double d13;
    double d8;
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0x10u, in_esi);
    t1 = rd32(self + 0x54u);
    wr32(sp0 - 0xcu, t1);
    t2 = rd32(self + 0x58u);
    wr32(sp0 - 8u, t2);
    t3 = rd32(self + 0x5cu);
    wr32(sp0 - 4u, t3);
    g->eax = t3;
    g->edx = t2;
    g->esp = sp0 - 0x10u;
    t4 = cow_thiscall(g, COW_IMG(0x100473f0u), self, 0);
    t5 = g->edx;
    if (t4 != 0u)
    {
        edx = t5;
        if (rd32(self + 0xfcu) != 0u)
        {
            eax = rd32(self + 0xfcu);
            wr32(sp0 - 0x14u, in_edi);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t6 = cow_thiscall(g, COW_IMG(0x10047450u), self, 0);
            t7 = g->edx;
            d8 = (double)(float)fr(g, (double)rdf32(sp0 - 0xcu) * (double)rdf32(t6));
            wrf32(sp0 - 0xcu, (float)d8);
            g->edx = t7;
            t9 = cow_thiscall(g, COW_IMG(0x10047450u), self, 0);
            t10 = g->edx;
            d11 = (double)(float)fr(g, (double)rdf32(sp0 - 8u) * (double)rdf32(t9 + 4u));
            wrf32(sp0 - 8u, (float)d11);
            t12 = cow_thiscall(g, COW_IMG(0x10047450u), self, 0);
            wr32(sp0 - 0x18u, sp0 - 0xcu);
            d13 = (double)(float)fr(g, (double)rdf32(sp0 - 4u) * (double)rdf32(t12 + 8u));
            wrf32(sp0 - 4u, (float)d13);
            g->edx = sp0 - 0xcu;
            t14 = rd32(rd32(COW_IMG(0x1047cf7cu)));
            t15 = cow_thiscall_cdecl(g, COW_IMG(0x100473f0u), self, 1, sp0 - 0xcu);
            t16 = g->edx;
            wr32(sp0 - 0x1cu, t15);
            wr32(sp0 - 0x20u, sp0 - 0xcu);
            cow_thiscall(g, rd32(t14 + 0x50u), rd32(COW_IMG(0x1047cf7cu)), 3, sp0 - 0xcu, t15, sp0 - 0xcu);
        }
    }
    t17 = rd32(sp0 - 0xcu);
    wr32(arg1, t17);
    t18 = rd32(sp0 - 8u);
    wr32(arg1 + 4u, t18);
    t19 = rd32(sp0 - 4u);
    wr32(arg1 + 8u, t19);
    g->edx = t19;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10044c40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10044c40(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
