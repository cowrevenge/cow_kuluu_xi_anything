/* f_0x101fc320 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101fc320(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, 2u);
    g->esp = sp0 - 0x18u;
    t1 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
    t2 = rd32(rd32(t1) + 0x74u);
    wr32(self + 0x18u, t2);
    t3 = rd32(rd32(t1) + 0x8cu);
    wr32(self + 0x1cu, t3);
    if (rd32(COW_IMG(0x1066388cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x1066388cu));
        edx = t2;
    }
    else
    {
        eax = rd32(COW_IMG(0x1066388cu));
        wr32(sp0 - 0x1cu, sp0 - 0x10u);
        t4 = rd32(self + 8u);
        wr16(sp0 - 0x10u, 0u);
        wr16(sp0 - 0xeu, 0u);
        wr16(sp0 - 0xcu, 0u);
        wr16(sp0 - 0xau, 0u);
        g->edx = sp0 - 0x10u;
        g->esp = sp0 - 0x18u;
        cow_call_regs(g, COW_IMG(0x10118f70u), eax, t4, g->edx, 0, 1, sp0 - 0x10u);
        t5 = g->edx;
        wr32(sp0 - 0x1cu, sp0 - 4u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        g->ebx = 0u;
        cow_thiscall(g, COW_IMG(0x101fbd30u), rd32(COW_IMG(0x1066388cu)), 2, sp0 - 8u, sp0 - 4u);
        t6 = rd32(sp0 - 4u);
        wr32(sp0 - 0x1cu, t6);
        t7 = rd32(sp0 - 8u) + (uint32_t)(int16_t)rd16(sp0 - 0x10u) - (uint32_t)(int16_t)rd16(sp0 - 0xcu);
        wr32(sp0 - 0x20u, t7);
        cow_call_regs(g, COW_IMG(0x10119110u), t7, rd32(self + 8u), g->edx, 0, 2, t7, t6);
        if (rd8(rd32(COW_IMG(0x10663888u)) + rd32(rd32(COW_IMG(0x1066388cu)) + 0x14u) * 0x16u + 0x6e8u) != 0u)
        {
            eax = rd32(COW_IMG(0x10663888u));
            edx = rd32(rd32(COW_IMG(0x1066388cu)) + 0x14u) * 0xbu;
        }
        else
        {
            eax = rd32(COW_IMG(0x10663888u));
            edx = rd32(rd32(COW_IMG(0x1066388cu)) + 0x14u) * 0xbu;
            wr32(sp0 - 0x1cu, 1u);
            wr32(sp0 - 0x20u, 5u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t8 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 1u);
            t9 = g->edx;
            eax = t8;
            edx = t9;
        }
    }
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 2u);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x101192b0u), rd32(self + 8u), 2, 2u, 0u);
    t10 = g->edx;
    if (rd32(COW_IMG(0x10663888u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10663888u));
        edx = t10;
    }
    else
    {
        eax = rd32(COW_IMG(0x10663888u));
        edx = t10;
        if (rd8(eax + 0x10au) == 0u)
        {
            wr8(rd32(self + 8u) + 0x30u, rd8(rd32(self + 8u) + 0x30u) & 0xfbu);
        }
    }
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fc320(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fc320(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
