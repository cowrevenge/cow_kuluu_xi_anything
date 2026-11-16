/* f_0x101a6a20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101a6a20(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_edi);
    if (rd8(rd32(self + 0x14u) + 0x235eu) != 0u)
    {
        eax = rd32(self + 0x14u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x14u);
        wr32(sp0 - 0x1cu, 4u);
        wr32(sp0 - 0x20u, 5u);
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x18u;
        t1 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 4u);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    if (rd32(COW_IMG(0x106627c4u)) != 0u)
    {
        wr32(sp0 - 0x1cu, in_esi);
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        t3 = rd32(self + 8u);
        wr16(sp0 - 0x10u, 0u);
        wr16(sp0 - 0xeu, 0u);
        wr16(sp0 - 0xcu, 0u);
        wr16(sp0 - 0xau, 0u);
        g->esp = sp0 - 0x1cu;
        t4 = cow_call_regs(g, COW_IMG(0x10118f70u), eax, t3, g->edx, 0, 1, sp0 - 0x10u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        g->ebx = 0u;
        g->edi = self;
        cow_thiscall(g, COW_IMG(0x101a6610u), rd32(COW_IMG(0x106627c4u)), 1, sp0 - 8u);
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        g->edx = (uint32_t)(int16_t)rd16(sp0 - 0xeu);
        t5 = rd16(sp0 - 0xeu);
        t6 = rd32(sp0 - 8u);
        t7 = rd16(sp0 - 0x10u);
        t8 = rd16(sp0 - 0xcu);
        t9 = rd16(sp0 - 0xau);
        cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0x10u, rd32(rd32(COW_IMG(0x106627c4u)) + 8u), g->edx, 0, 1, sp0 - 0x10u);
        t10 = g->edx;
        if ((int32_t)rd32(sp0 - 4u) <= (int32_t)((uint32_t)(int16_t)rd16(sp0 - 0xau) - ((uint32_t)(int16_t)t9 - (uint32_t)(int16_t)t5)))
        {
            eax = (uint32_t)(int16_t)rd16(sp0 - 0xau) - ((uint32_t)(int16_t)t9 - (uint32_t)(int16_t)t5);
            ecx = rd32(sp0 - 4u);
            edx = t10;
            ebx = t6 + (uint32_t)(int16_t)t7 - (uint32_t)(int16_t)t8;
        }
        else
        {
            eax = (uint32_t)(int16_t)rd16(sp0 - 0xau) - ((uint32_t)(int16_t)t9 - (uint32_t)(int16_t)t5);
            edx = t10;
            ebx = t6 + (uint32_t)(int16_t)t7 - (uint32_t)(int16_t)t8;
            ecx = eax;
        }
        wr32(sp0 - 0x1cu, ecx);
        wr32(sp0 - 0x20u, ebx);
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t11 = cow_call_regs(g, COW_IMG(0x10119110u), eax, rd32(self + 8u), g->edx, 0, 2, ebx, ecx);
        t12 = g->edx;
        eax = t11;
        edx = t12;
    }
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a6a20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a6a20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
