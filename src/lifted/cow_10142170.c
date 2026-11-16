/* f_0x10142170 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10142170(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0xcu, in_esi);
    t1 = rd32(COW_IMG(0x105783e8u));
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    if (t1 == 0u)
    {
        eax = t1;
        edx = in_edx;
    }
    else
    {
        eax = t1;
        if (rd32(eax + 8u) == 0u)
        {
            edx = in_edx;
        }
        else
        {
            ecx = rd32(eax + 8u);
            wr32(sp0 - 0x10u, sp0 - 8u);
            g->edx = in_edx;
            g->esp = sp0 - 0xcu;
            t2 = cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 8u, ecx, g->edx, 0, 1, sp0 - 8u);
            t3 = g->edx;
            eax = t2;
            edx = t3;
        }
    }
    wr32(sp0 - 0x10u, COW_IMG(0x10371518u));
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10371518u));
    t4 = (uint32_t)(int16_t)rd16(sp0 - 2u) - (uint32_t)(int16_t)rd16(sp0 - 6u);
    wr32(sp0 - 0x10u, t4);
    t5 = (uint32_t)(int16_t)rd16(sp0 - 4u) - (uint32_t)(int16_t)rd16(sp0 - 8u);
    wr32(sp0 - 0x14u, t5);
    t6 = (uint32_t)(int16_t)rd16(sp0 - 6u);
    wr32(sp0 - 0x18u, t6);
    t7 = (uint32_t)(int16_t)rd16(sp0 - 8u);
    wr32(sp0 - 0x1cu, t7);
    cow_thiscall(g, COW_IMG(0x101ec270u), rd32(COW_IMG(0x106636a0u)), 4, t7, t6, t5, t4);
    t8 = rd32(COW_IMG(0x106636a0u));
    wr32(t8 + 0x30u, COW_IMG(0x10144530u));
    wr32(t8 + 0x38u, 0u);
    if (rd32(COW_IMG(0x106636a0u)) != 0u)
    {
        eax = rd32(COW_IMG(0x106636a0u));
        if (rd32(eax + 8u) != 0u)
        {
            eax = rd32(eax + 8u);
            wr8(eax + 0x38u, rd8(eax + 0x38u) | 4u);
        }
    }
    g->esi = rd32(sp0 - 0xcu);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10142170(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10142170(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
