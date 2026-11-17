/* f_0x101414b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101414b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_44;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 80u);

    wr32(sp0 - 0x44u, in_edi);
    wr8(sp0 - 0x40u, rd8(COW_IMG(0x103d3c84u)));
    edi = sp0 - 0x3fu;
    eax = 0u;
    ecx = 0xfu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t1 = rd32(COW_IMG(0x1057876cu));
    wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
    wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x44u;
    t2 = cow_thiscall(g, COW_IMG(0x101598b0u), t1, 0);
    t3 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        wr32(sp0 - 0x44u, COW_IMG(0x103d3c84u));
        loc_44 = COW_IMG(0x103d3c84u);
    }
    else
    {
        eax = t2;
        edx = t3;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x40u;
        t4 = cow_thiscall(g, COW_IMG(0x101598b0u), rd32(COW_IMG(0x1057876cu)), 0);
        t5 = g->edx;
        if (rd16(t4 + 0x210u) == 0u)
        {
            eax = t4;
            edx = t5;
            eax = eax + 0x7cu;
        }
        else
        {
            eax = t4;
            edx = t5;
            eax = eax + 0x214u;
        }
        wr32(sp0 - 0x44u, eax);
        wr32(sp0 - 0x48u, COW_IMG(0x1036f5c8u));
        wr32(sp0 - 0x4cu, sp0 - 0x40u);
        g->esp = sp0 - 0x38u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x1036f5c8u), eax, rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu));
        wr32(sp0 - 0x44u, sp0 - 0x40u);
        eax = sp0 - 0x40u;
        loc_44 = sp0 - 0x40u;
    }
    g->eax = eax;
    g->edx = rd32(rd32(COW_IMG(0x10662d40u)));
    t6 = rd32(rd32(COW_IMG(0x10662d40u)));
    g->esp = sp0 - 0x40u;
    t7 = cow_thiscall(g, rd32(t6 + 0x24u), rd32(COW_IMG(0x10662d40u)), 1, loc_44);
    t8 = g->edx;
    wr32(sp0 - 0x44u, COW_IMG(0x1036f840u));
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1036f840u));
    t10 = g->edx;
    g->edx = t10;
    return t9;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101414b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101414b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
