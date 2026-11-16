/* f_0x101ce6a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101ce6a0(Guest* g)
{
    double d11;
    double d14;
    double d15;
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t13;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0x24u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0x24u;
    t1 = cow_call_regs(g, COW_IMG(0x101cd9a0u), in_eax, self, g->edx, 1, 0);
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        edx = t2;
        goto L_101ce6b6;
    }
    eax = t1;
    return eax & 0xffffff00u;
L_101ce6b6: ;
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0x3f800000u);
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t3 = cow_call_regs(g, COW_IMG(0x101cd9a0u), eax, self, g->edx, 1, 0);
    t4 = g->ecx;
    t5 = g->edx;
    t6 = rd32(t3 + 0x34u);
    wr32(sp0 - 0x20u, t6);
    g->edx = t5;
    t7 = cow_call_regs(g, COW_IMG(0x101cd9a0u), t6, t4, g->edx, 1, 0);
    t8 = g->edx;
    t9 = rd32(t7 + 0x38u);
    wr32(sp0 - 0x1cu, t9);
    t10 = cow_call_regs(g, COW_IMG(0x101cd9a0u), t7, self, g->edx, 1, 0);
    d11 = (double)rdf32(sp0 - 0x1cu);
    t12 = rd32(t10 + 0x3cu);
    wr32(sp0 - 0x18u, t12);
    if ((cow_fsw(g, d11, (double)rdf32(COW_IMG(0x1032dfa4u)), 0u) & 0x4100u) != 0u)
    {
        edx = t12;
    }
    else
    {
        edx = t12;
        wr32(sp0 - 0x1cu, 0xbe99999au);
    }
    t13 = rd32(self + 0x34u);
    wr32(sp0 - 0xcu, t13);
    d14 = fr(g, (double)rdf32(self + 0x34u) + (double)rdf32(COW_IMG(0x10337e2cu)));
    d15 = (double)rdf32(COW_IMG(0x1032a3b8u));
    wrf32(self + 0x34u, (float)d14);
    if ((cow_fsw(g, d14, d15, 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d14, d15, 1u) & 0x4100u;
        x0 = d14;
        if (!(x0 < (double)rdf32(COW_IMG(0x1032a3b4u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3b4u)), 1u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3b4u)), 1u);
            x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x1032a3b0u)));
        }
    }
    else
    {
        eax = cow_fsw(g, d14, d15, 1u) & 0x4100u;
        x0 = d14;
        x0 = fr(g, x0 - (double)rdf32(COW_IMG(0x1032a3b0u)));
    }
    wrf32(self + 0x34u, (float)x0);
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t16 = cow_call_regs(g, COW_IMG(0x101cda30u), eax, self, g->edx, 1, 0);
    t17 = g->edx;
    if (t16 == 0u)
    {
        eax = t16;
    }
    else
    {
        eax = t16;
        edx = t17;
        wr32(sp0 - 0x28u, sp0 - 0x20u);
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t18 = cow_call_regs(g, COW_IMG(0x101cda30u), eax, self, g->edx, 1, 0);
        t19 = g->edx;
        g->esp = sp0 - 0x24u;
        t20 = cow_thiscall(g, COW_IMG(0x100ab830u), t18, 1, sp0 - 0x20u);
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        g->edx = sp0 - 0x10u;
        g->esp = sp0 - 0x28u;
        t21 = cow_call_regs(g, COW_IMG(0x101cda30u), t20, self, g->edx, 1, 0);
        t22 = g->edx;
        g->esp = sp0 - 0x24u;
        t23 = cow_thiscall(g, COW_IMG(0x100ab880u), t21, 1, sp0 - 0x10u);
        eax = t23;
    }
    g->esi = rd32(sp0 - 0x24u);
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ce6a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ce6a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
