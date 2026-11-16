/* f_0x1022b850 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1022b850(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if ((int32_t)rd32(sp0 + 4u) < 0)
    {
        eax = in_eax;
        edx = in_edx;
        ebx = in_ebx & 0xffffff00u;
        esi = 0u;
        edi = rd32(sp0 + 4u);
        loc_4 = self & 0xffffffu;
    }
    else
    {
        edi = rd32(sp0 + 4u);
        wr32(sp0 - 0x14u, edi);
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        t1 = cow_thiscall(g, COW_IMG(0x1022c770u), rd32(COW_IMG(0x10667a70u)), 1, edi);
        t2 = g->edx;
        if (t1 == 0u)
        {
            eax = t1;
            edx = t2;
            ebx = in_ebx & 0xffffff00u;
            loc_4 = self & 0xffffffu;
        }
        else
        {
            eax = t1;
            edx = t2;
            edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x103644a8u) + rd8(eax + 0x45u) * 2u);
            ebx = (in_ebx & 0xffffff00u) | (rd8(eax + 0x44u) >> 5u & 1u);
            loc_4 = (rd32(sp0 - 4u) & 0xffffffu) | rd8(COW_IMG(0x103644a8u) + rd8(eax + 0x45u) * 2u) << 0x18u;
        }
        esi = COW_IMG(0x1022b8e0u);
    }
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, sp0 + 4u);
    t3 = rd32(COW_IMG(0x1057876cu));
    wr8(sp0 + 4u, 1u);
    wr8(sp0 + 5u, loc_4 >> 0x18u);
    wr8(sp0 + 6u, 0u);
    wr8(sp0 + 7u, 1u);
    g->eax = (eax & 0xffffff00u) | loc_4 >> 0x18u;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_thiscall(g, COW_IMG(0x10157780u), t3, 2, sp0 + 4u, 1u);
    t5 = g->edx;
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, esi);
    cow_thiscall(g, COW_IMG(0x10157860u), rd32(COW_IMG(0x1057876cu)), 2, esi, edi);
    wr8(rd32(COW_IMG(0x1057876cu)) + 0x58u, (uint8_t)ebx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022b850(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1022b850(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
