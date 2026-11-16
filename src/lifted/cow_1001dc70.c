/* f_0x1001dc70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1001dc70(Guest* g)
{
    double d12;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 0x20u, self + 0x31u);
    g->esp = sp0 - 0x1cu;
    cow_fastcall(g, COW_IMG(0x10039810u), sp0 - 0x14u, in_edx, 1, self + 0x31u);
    t1 = g->edx;
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, self);
    wr32(sp0 - 0x28u, sp0 - 0x14u);
    g->edx = t1;
    t2 = rd32(COW_IMG(0x1047b970u));
    t3 = cow_thiscall(g, COW_IMG(0x1003aea0u), t2, 3, sp0 - 0x14u, self, 0u);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 == 0u)
    {
        eax = t3;
        edx = t5;
        ebx = in_ebx;
    }
    else
    {
        ecx = t4;
        esi = t3;
        wr32(sp0 - 0x20u, in_ebx);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, arg2);
        wr32(sp0 - 0x2cu, arg1);
        wr32(sp0 - 0x30u, sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        cow_call_regs(g, COW_IMG(0x100384b0u), sp0 - 0x14u, g->ecx, g->edx, 1, 4, sp0 - 0x14u, arg1, arg2, 0u);
        if (rd32(esi + 0x40u) == 0u)
        {
            esi = rd32(esi + 0x44u);
        }
        else
        {
            eax = rd32(esi + 0x40u);
            esi = eax;
        }
        wr32(sp0 - 0x24u, esi);
        wr32(sp0 - 0x28u, 0u);
        t6 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x2cu, t6);
        g->eax = t6;
        g->edx = rd32(t6);
        t7 = rd32(COW_IMG(0x1045666cu));
        t8 = rd32(t6);
        g->esp = sp0 - 0x20u;
        t9 = cow_thiscall(g, rd32(t8 + 0xf4u), t7, 3, t6, 0u, esi);
        t10 = g->ecx;
        t11 = g->edx;
        wr32(sp0 - 0x24u, t10);
        d12 = (double)(float)fr(g, (double)rdf32(sp0 + 8u) + (double)rdf32(COW_IMG(0x1032a1acu)));
        wrf32(sp0 - 0x24u, (float)d12);
        wr32(sp0 - 0x28u, arg1);
        g->ebx = arg1;
        g->edx = t11;
        t13 = cow_stdcall(g, COW_IMG(0x1001dd00u), 2, arg1, cow_f2bits(d12));
        t14 = g->edx;
        eax = t13;
        edx = t14;
        ebx = rd32(sp0 - 0x20u);
    }
    g->ebx = ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001dc70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1001dc70(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
