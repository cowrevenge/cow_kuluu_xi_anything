/* f_0x100cce60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100cce60(Guest* g)
{
    double d19;
    double d20;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 132u);

    wr32(sp0 - 0x6cu, in_esi);
    g->eax = rd32(self);
    t1 = rd32(self);
    g->esp = sp0 - 0x6cu;
    t2 = cow_thiscall(g, rd32(t1 + 0x154u), self, 0);
    if (t2 != 0u)
    {
        wr32(sp0 - 0x70u, sp0 - 0x60u);
        wr32(sp0 - 0x74u, 0x17u);
        g->esp = sp0 - 0x6cu;
        cow_thiscall(g, rd32(rd32(self) + 0x1c4u), self, 2, 0x17u, sp0 - 0x60u);
        wr32(sp0 - 0x70u, sp0 - 0x50u);
        wr32(sp0 - 0x74u, 0x18u);
        g->eax = sp0 - 0x50u;
        g->edx = rd32(self);
        t3 = rd32(self);
        t4 = cow_thiscall(g, rd32(t3 + 0x1c4u), self, 2, 0x18u, sp0 - 0x50u);
        t5 = g->edx;
        cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
        wr32(sp0 - 0x70u, sp0 - 0x40u);
        wr32(sp0 - 0x74u, 0x1cu);
        g->eax = sp0 - 0x40u;
        g->edx = rd32(self);
        t6 = rd32(self);
        t7 = cow_thiscall(g, rd32(t6 + 0x1d0u), self, 2, 0x1cu, sp0 - 0x40u);
        t8 = g->ecx;
        t9 = g->edx;
        t10 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
        wr32(sp0 - 0x70u, sp0 - 0x60u);
        wr32(sp0 - 0x74u, t10 + 0x8cu);
        g->ecx = sp0 - 0x60u;
        g->edx = t10 + 0x8cu;
        t11 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, t10 + 0x8cu, sp0 - 0x60u);
        t12 = g->ecx;
        t13 = g->edx;
        wr8(t10 + 0x88u, 1u);
        g->edx = t13;
        g->esp = sp0 - 0x74u;
        t14 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
        t15 = g->edx;
        wr32(sp0 - 0x78u, sp0 - 0x50u);
        wr32(sp0 - 0x7cu, t14 + 0x98u);
        g->eax = sp0 - 0x50u;
        g->ecx = t14 + 0x98u;
        g->edx = t15;
        t16 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, t14 + 0x98u, sp0 - 0x50u);
        t17 = g->ecx;
        t18 = g->edx;
        wr8(t14 + 0x89u, 1u);
        d19 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 - 0x38u) * (double)rdf32(COW_IMG(0x10329ce8u))) * (double)rdf32(COW_IMG(0x1032a840u)));
        wrf32(sp0 - 0x68u, (float)d19);
        d20 = (double)(float)fr(g, (double)rdf32(sp0 - 0x2cu) * (double)rdf32(COW_IMG(0x10331390u)));
        wrf32(sp0 - 0x64u, (float)d20);
        g->ecx = t17;
        g->esp = sp0 - 0x7cu;
        t21 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
        t22 = g->ecx;
        t23 = rd32(sp0 - 0x68u);
        wr8(t21 + 0x8au, 1u);
        wr32(t21 + 0xa4u, t23);
        t24 = rd32(sp0 - 0x64u);
        wr32(sp0 - 0x80u, t24);
        g->eax = t24;
        g->edx = t23;
        t25 = cow_cdecl(g, COW_IMG(0x10015290u), 1, t24);
        t26 = g->edx;
        g->esp = sp0 - 0x6cu;
        cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100cce60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100cce60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
