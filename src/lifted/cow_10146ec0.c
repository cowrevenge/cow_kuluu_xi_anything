/* f_0x10146ec0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10146ec0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0xcu, in_esi);
    if (rd8(self + 0x1cu) == 1u)
    {
        wr32(sp0 - 0x10u, 0u);
        wr32(sp0 - 0x14u, 0u);
        wr32(sp0 - 0x18u, sp0 - 8u);
        wr32(sp0 - 8u, 0x10u);
        wr32(sp0 - 4u, 0x10u);
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x101602f0u), COW_IMG(0x10621838u), 3, sp0 - 8u, 0u, 0u);
        wr32(sp0 - 0x10u, 0x10u);
        wr32(sp0 - 0x14u, 0x10u);
        g->edx = 0x10u;
        cow_call_regs(g, COW_IMG(0x10119110u), 0x10u, rd32(self + 8u), g->edx, 0, 2, 0x10u, 0x10u);
        t5 = g->edx;
        wr8(rd32(self + 8u) + 0x38u, rd8(rd32(self + 8u) + 0x38u) | 0x20u);
        if (rd32(COW_IMG(0x105783e8u)) == 0u)
        {
            eax = rd32(COW_IMG(0x105783e8u));
            edx = t5;
        }
        else
        {
            eax = rd32(COW_IMG(0x105783e8u));
            edx = t5;
            wr8(eax + 0x1cu, 0u);
        }
        wr32(sp0 - 0x10u, 0u);
        wr32(sp0 - 0x14u, 1u);
        wr32(sp0 - 0x18u, COW_IMG(0x10371518u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t6 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10371518u), 1u, 0u);
        t7 = g->edx;
        wr32(sp0 - 0x10u, 0u);
        wr32(sp0 - 0x14u, 1u);
        wr32(sp0 - 0x18u, COW_IMG(0x103715acu));
        g->edx = t7;
        t8 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103715acu), 1u, 0u);
        t9 = g->edx;
        eax = t8;
        edx = t9;
    }
    else
    {
        eax = rd8(self + 0x1cu) - 1u;
        if (eax != 1u)
        {
            eax = eax - 1u;
            edx = in_edx;
        }
        else
        {
            wr32(sp0 - 0x10u, 0u);
            wr32(sp0 - 0x14u, 0u);
            wr32(sp0 - 0x18u, sp0 - 8u);
            wr32(sp0 - 8u, 0x10u);
            wr32(sp0 - 4u, 0x30u);
            g->eax = sp0 - 8u;
            g->esp = sp0 - 0xcu;
            t1 = cow_thiscall(g, COW_IMG(0x101602f0u), COW_IMG(0x10621838u), 3, sp0 - 8u, 0u, 0u);
            wr32(sp0 - 0x10u, 0x30u);
            wr32(sp0 - 0x14u, 0x10u);
            g->edx = 0x10u;
            cow_call_regs(g, COW_IMG(0x10119110u), t1, rd32(self + 8u), g->edx, 0, 2, 0x10u, 0x30u);
            t2 = g->edx;
            wr32(sp0 - 0x10u, self + 0x14u);
            g->edx = t2;
            t3 = cow_call_regs(g, COW_IMG(0x10118f70u), self + 0x14u, rd32(self + 8u), g->edx, 0, 1, self + 0x14u);
            t4 = g->edx;
            eax = t3;
            edx = t4;
        }
    }
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t10 = cow_call_regs(g, COW_IMG(0x10147000u), eax, self, g->edx, 1, 0);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x10u, 2u);
    t13 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
    t14 = rd32(rd32(t13) + 0x6b8u);
    wr32(self + 0x24u, t14);
    g->edx = t14;
    return t13;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10146ec0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10146ec0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
