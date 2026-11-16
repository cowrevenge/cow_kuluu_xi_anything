/* f_0x100d8020 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100d8020(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x1048b6b4u)) != 0u)
    {
        esi = rd32(COW_IMG(0x1048b6b4u));
        goto L_100d802f;
    }
    return in_eax & 0xffffff00u;
L_100d802f: ;
    t1 = cow_divs(g, rd32(esi + 0x12c4u) + 1u, 0x1eu);
    t2 = cow_mods(g, rd32(esi + 0x12c4u) + 1u, 0x1eu);
    t3 = rd32(esi + 0x12c4u);
    wr32(esi + 0x12c4u, t2);
    if (rd32(rd32(COW_IMG(0x1048b6b4u)) + 0x12c4u) != rd32(rd32(COW_IMG(0x1048b6b4u)) + 0x12c0u))
    {
        ecx = esi + t3 * 0x50u;
        edx = rd32(rd32(COW_IMG(0x1048b6b4u)) + 0x12c4u);
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x1048b6b4u)) + 0x12c0u);
        ecx = esi + t3 * 0x50u;
        esi = rd32(COW_IMG(0x1048b6b4u));
        t4 = cow_divs(g, eax + 1u, 0x1eu);
        t5 = cow_mods(g, eax + 1u, 0x1eu);
        wr32(esi + 0x12c0u, t5);
        edx = t5;
    }
    if (arg2 == 0u)
    {
        wr8(ecx + 2u, (uint8_t)(arg2 | 0xffu));
        wr8(ecx + 1u, (uint8_t)(arg2 | 0xffu));
        wr8(ecx, (uint8_t)(arg2 | 0xffu));
        eax = (arg2 & 0xffffff00u) | (uint8_t)(arg2 | 0xffu);
    }
    else
    {
        t6 = rd8(arg2);
        wr8(ecx, (uint8_t)t6);
        t7 = rd8(arg2);
        wr8(ecx + 1u, (uint8_t)t7);
        wr8(ecx + 2u, rd8(arg2));
        eax = (arg2 & 0xffffff00u) | rd8(arg2);
    }
    wr8(ecx + 3u, (uint8_t)eax);
    g->esp = sp0 - 4u;
    t8 = cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, ecx + 4u, arg1, 0x40u);
    return (t8 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d8020(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d8020(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
