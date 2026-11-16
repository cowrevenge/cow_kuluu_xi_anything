/* f_0x10161d60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10161d60(Guest* g)
{
    double d10;
    double d14;
    uint32_t eax;
    uint32_t ebp;
    uint32_t edx;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_edi);
    g->esp = sp0 - 0x18u;
    t1 = cow_call_regs(g, COW_IMG(0x10162510u), in_eax, self, in_edx, 1, 0);
    t2 = g->edx;
    if ((int8_t)rd8(self + 0x31u) <= 0)
    {
        eax = (t1 & 0xffffff00u) | rd8(self + 0x31u);
        edx = t2;
    }
    else
    {
        edx = t2;
        wr32(sp0 - 0x1cu, in_esi);
        wr32(sp0 - 0x20u, sp0 - 8u);
        t3 = rd32(COW_IMG(0x10578474u));
        t4 = rd32(self + 8u);
        wr16(sp0 - 8u, 0u);
        wr16(sp0 - 6u, 0u);
        wr16(sp0 - 4u, 0u);
        wr16(sp0 - 2u, 0u);
        t5 = rd32(t3 + 0xa4u);
        g->esp = sp0 - 0x1cu;
        t6 = cow_call_regs(g, COW_IMG(0x10118f70u), t3, t4, g->edx, 0, 1, sp0 - 8u);
        wr32(sp0 - 0x20u, 0u);
        t7 = rd32(COW_IMG(0x106218b8u));
        t8 = rd32(COW_IMG(0x106218b4u));
        t9 = rd16(self + 0x32u);
        cow_thiscall(g, COW_IMG(0x10160290u), COW_IMG(0x10621838u), 1, 0u);
        d10 = cow_take_float(g);
        t11 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
        wr32(sp0 - 0xcu, t11);
        t12 = (uint32_t)(int16_t)(t7 - t8) - (uint32_t)(int16_t)t9 - 0xa0u;
        wr32(sp0 - 0xcu, t12);
        t13 = (uint32_t)(int16_t)rd16(sp0 - 8u);
        wr32(sp0 - 0xcu, t13);
        g->edx = t12;
        d14 = fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - d10) * (double)(int32_t)t11) - (double)rdf32(COW_IMG(0x1032a698u))) - (double)(int32_t)t12) + (double)(int32_t)t13);
        fpush(g, d14);
        t15 = cow_call_regs(g, COW_IMG(0x10311c6cu), t13, g->ecx, g->edx, 1, 0);
        t16 = g->edx;
        wr16(sp0 - 8u, (uint16_t)t15);
        if (t5 == 0u)
        {
            eax = t15;
            edx = t16;
        }
        else
        {
            eax = t15;
            ebp = t5;
            wr32(sp0 - 0x1cu, 0u);
            wr32(sp0 - 0x20u, 0u);
            wr32(sp0 - 0x24u, 0x80808080u);
            t17 = (uint32_t)(int16_t)rd16(sp0 - 6u);
            wr32(sp0 - 0x28u, t17);
            wr32(sp0 - 0x2cu, (uint32_t)(int16_t)eax);
            g->eax = eax;
            g->edx = (uint32_t)(int16_t)eax;
            g->esp = sp0 - 0x18u;
            t18 = cow_thiscall(g, COW_IMG(0x1011fb60u), ebp, 5, (uint32_t)(int16_t)eax, t17, 0x80808080u, 0u, 0u);
            t19 = g->edx;
            eax = t18;
            edx = t19;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10161d60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10161d60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
