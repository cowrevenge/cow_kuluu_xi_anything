/* f_0x102d92ad - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_102d92ad(Guest* g)
{
    double d1;
    double d12;
    double d2;
    double d6;
    double d9;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t10;
    uint32_t t11;
    uint32_t t13;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, self);
    wr32(sp0 - 0x30u, self);
    d1 = fr(g, (double)rdf32(sp0 + 0x14u) + (double)rdf32(sp0 + 0x18u));
    wrf32(sp0 + 0x14u, (float)d1);
    wrf32(sp0 - 0x2cu, (float)(double)(float)0.0);
    d2 = (double)(float)(double)rdf32(sp0 + 0x14u);
    wrf32(sp0 - 0x30u, (float)d2);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    t3 = cow_call_regs(g, COW_IMG(0x102d6203u), in_eax, g->ecx, g->edx, 1, 2, cow_f2bits(d2), cow_f2bits((double)(float)0.0));
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 == 0u)
    {
        ecx = t4;
        edx = t5;
        wr32(sp0 - 0x2cu, ecx);
        d6 = (double)(float)(double)rdf32(sp0 + 0x14u);
        wrf32(sp0 - 0x2cu, (float)d6);
        wr32(sp0 - 0x30u, arg3);
        wr32(sp0 - 0x34u, arg2);
        wr32(sp0 - 0x38u, sp0 - 0x24u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        cow_stdcall(g, COW_IMG(0x102d90f1u), 4, sp0 - 0x24u, arg2, arg3, cow_f2bits(d6));
        t7 = g->ecx;
        t8 = g->edx;
        wr32(sp0 - 0x2cu, t7);
        d9 = (double)(float)(double)rdf32(sp0 + 0x14u);
        wrf32(sp0 - 0x2cu, (float)d9);
        wr32(sp0 - 0x30u, arg4);
        wr32(sp0 - 0x34u, arg2);
        wr32(sp0 - 0x38u, sp0 - 0x14u);
        g->ecx = t7;
        g->edx = t8;
        cow_stdcall(g, COW_IMG(0x102d90f1u), 4, sp0 - 0x14u, arg2, arg4, cow_f2bits(d9));
        t10 = g->ecx;
        t11 = g->edx;
        wr32(sp0 - 0x2cu, t10);
        d12 = (double)(float)fr(g, (double)rdf32(sp0 + 0x18u) / (double)rdf32(sp0 + 0x14u));
        wrf32(sp0 - 0x2cu, (float)d12);
        wr32(sp0 - 0x30u, sp0 - 0x14u);
        wr32(sp0 - 0x34u, sp0 - 0x24u);
        wr32(sp0 - 0x38u, arg1);
        g->edx = t11;
        cow_stdcall(g, COW_IMG(0x102d90f1u), 4, arg1, sp0 - 0x24u, sp0 - 0x14u, cow_f2bits(d12));
        t13 = g->edx;
        edx = t13;
    }
    else
    {
        edx = t5;
        if (arg1 != arg2)
        {
            wr32(sp0 - 0x2cu, in_edi);
            esi = arg2;
            edi = arg1;
            wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
            wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
            wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
            wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        }
    }
    g->edx = edx;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d92ad(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d92ad(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
