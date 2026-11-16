/* f_0x10230e30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_10230e30(Guest* g)
{
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;

    if (rd32(sp0 + 4u) != 0u)
    {
        esi = rd32(sp0 + 4u);
        goto L_10230e3d;
    }
    return in_eax & 0xffffff00u;
L_10230e3d: ;
    t1 = (in_eax & 0xffffff00u) | rd8(esi + 1u);
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x100f0fb0u), 1, t1);
    t3 = rd32(esi);
    wr8(sp0 + 4u, (uint8_t)t2);
    return (t2 & 0xffffff00u) | (uint8_t)rd32(sp0 + 4u) >= (uint8_t)t3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10230e30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10230e30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
