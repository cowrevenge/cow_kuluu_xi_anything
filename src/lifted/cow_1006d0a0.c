/* f_0x1006d0a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1006d0a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(COW_IMG(0x1047cdd8u)) & 1u)
    {
        eax = (in_eax & 0xffffff00u) | 1u;
        edx = in_edx;
    }
    else
    {
        ecx = (self & 0xffffff00u) | rd8(COW_IMG(0x1047cdd8u));
        wr32(COW_IMG(0x1047caf0u), 0x3f800000u);
        wr8(COW_IMG(0x1047cdd8u), (uint8_t)(ecx | 1u));
        wr32(COW_IMG(0x1047caf4u), 0u);
        wr32(COW_IMG(0x1047caf8u), 0u);
        wr32(COW_IMG(0x1047cafcu), 0u);
        wr32(COW_IMG(0x1047cb00u), 0u);
        wr32(COW_IMG(0x1047cb04u), 0x3f800000u);
        wr32(COW_IMG(0x1047cb08u), 0u);
        wr32(COW_IMG(0x1047cb0cu), 0u);
        wr32(COW_IMG(0x1047cb10u), 0u);
        wr32(COW_IMG(0x1047cb14u), 0u);
        wr32(COW_IMG(0x1047cb18u), 0x3f800000u);
        wr32(COW_IMG(0x1047cb1cu), 0u);
        wr32(COW_IMG(0x1047cb20u), 0u);
        wr32(COW_IMG(0x1047cb24u), 0u);
        wr32(COW_IMG(0x1047cb28u), 0u);
        wr32(COW_IMG(0x1047cb2cu), 0x3f800000u);
        g->edx = (in_edx & 0xffffff00u) | (uint8_t)(ecx | 1u);
        g->esp = sp0;
        t1 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x1006d180u));
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    esi = COW_IMG(0x1047caf0u);
    edi = arg1;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006d0a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006d0a0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
