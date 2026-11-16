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
    double d7;
    uint32_t eax;
    uint32_t ebp;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
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
        t3 = rd32(rd32(COW_IMG(0x10578474u)) + 0xa4u);
        g->esp = sp0 - 0x1cu;
        cow_call_regs(g, COW_IMG(0x10118f70u), rd32(COW_IMG(0x10578474u)), rd32(self + 8u), g->edx, 0, 1, sp0 - 8u);
        wr32(sp0 - 0x20u, 0u);
        t4 = rd32(COW_IMG(0x106218b8u));
        t5 = rd32(COW_IMG(0x106218b4u));
        t6 = rd16(self + 0x32u);
        cow_thiscall(g, COW_IMG(0x10160290u), COW_IMG(0x10621838u), 1, 0u);
        d7 = cow_take_float(g);
        t8 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
        wr32(sp0 - 0xcu, t8);
        t9 = (uint32_t)(int16_t)(t4 - t5) - (uint32_t)(int16_t)t6 - 0xa0u;
        wr32(sp0 - 0xcu, t9);
        wr32(sp0 - 0xcu, 0u);
        g->edx = t9;
        d10 = fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - d7) * (double)(int32_t)t8) - (double)rdf32(COW_IMG(0x1032a698u))) - (double)(int32_t)t9) + (double)(int32_t)0u);
        fpush(g, d10);
        t11 = cow_call_regs(g, COW_IMG(0x10311c6cu), 0u, g->ecx, g->edx, 1, 0);
        t12 = g->edx;
        if (t3 == 0u)
        {
            eax = t11;
            edx = t12;
        }
        else
        {
            eax = t11;
            ebp = t3;
            loc_8 = (uint16_t)t11;
            wr32(sp0 - 0x1cu, 0u);
            wr32(sp0 - 0x20u, 0u);
            wr32(sp0 - 0x24u, 0x80808080u);
            t13 = (uint32_t)(int16_t)(loc_8 >> 0x10u);
            wr32(sp0 - 0x28u, t13);
            wr32(sp0 - 0x2cu, (uint32_t)(int16_t)eax);
            g->eax = eax;
            g->edx = (uint32_t)(int16_t)eax;
            g->esp = sp0 - 0x18u;
            t14 = cow_thiscall(g, COW_IMG(0x1011fb60u), ebp, 5, (uint32_t)(int16_t)eax, t13, 0x80808080u, 0u, 0u);
            t15 = g->edx;
            eax = t14;
            edx = t15;
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
