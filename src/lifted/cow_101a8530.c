/* f_0x101a8530 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_101a8530(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 364u);

    wr32(sp0 - 0x144u, in_ebx);
    wr32(sp0 - 0x148u, in_esi);
    wr32(sp0 - 0x14cu, in_edi);
    wr8(sp0 - 0x140u, rd8(COW_IMG(0x103d3c84u)));
    edi = sp0 - 0x13fu;
    eax = 0u;
    ecx = 7u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
    wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
    wr32(sp0 - 0x150u, arg1);
    wr32(sp0 - 0x154u, sp0 - 0x140u);
    g->esp = sp0 - 0x14cu;
    cow_cdecl(g, COW_IMG(0x101a84e0u), 2, sp0 - 0x140u, arg1);
    wr32(sp0 - 0x150u, 1u);
    wr32(sp0 - 0x154u, self);
    wr32(sp0 - 0x158u, 0u);
    wr32(sp0 - 0x15cu, 0x50u);
    wr32(sp0 - 0x160u, arg2);
    wr32(sp0 - 0x164u, sp0 - 0x140u);
    wr32(sp0 - 0x168u, 1u);
    cow_thiscall(g, COW_IMG(0x101b9880u), sp0 - 0x120u, 7, 1u, sp0 - 0x140u, arg2, 0x50u, 0u, self, 1u);
    wr32(sp0 - 0x150u, 0u);
    t1 = cow_divs(g, (uint8_t)arg1, 0x14u);
    t2 = cow_mods(g, (uint8_t)arg1, 0x14u);
    wr32(sp0 - 0x154u, t2 * 0x50u);
    g->eax = t1;
    g->edx = t2 * 0x50u;
    t3 = cow_thiscall(g, COW_IMG(0x101b9b00u), sp0 - 0x120u, 2, t2 * 0x50u, 0u);
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x101b9a00u), sp0 - 0x120u, 0);
    t6 = g->edx;
    g->edx = t6;
    return (t5 & 0xffffff00u) | (uint8_t)t3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a8530(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a8530(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
