/* f_0x10077e90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_10077e90(Guest* g)
{
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(COW_IMG(0x103579eau)) == 0x11u) goto L_10077e9c;
    return in_eax & 0xffffff00u;
L_10077e9c: ;
    wr8(COW_IMG(0x103579eau), 0u);
    esi = arg1;
    edi = COW_IMG(0x1047d3a8u);
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr8(COW_IMG(0x1047d3e7u), 0u);
    wr8(COW_IMG(0x1047d4a5u), 0u);
    wr8(COW_IMG(0x1047d4a4u), 1u);
    return (in_eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10077e90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10077e90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
