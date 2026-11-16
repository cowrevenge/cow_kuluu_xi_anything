/* f_0x102051d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102051d0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x106643a8u)) != 0u)
    {
        eax = rd32(COW_IMG(0x106643a8u));
        g->edx = in_edx;
        g->esp = sp0;
        cow_cdecl(g, COW_IMG(0x10202d30u), 7, COW_IMG(0x10205160u), arg1, 1u, 0u, 0u, 1u, in_esi);
        t1 = g->edx;
        t2 = rd32(arg1 + 8u);
        g->eax = t2;
        g->esp = sp0 - 4u;
        t3 = cow_thiscall(g, COW_IMG(0x1015e6e0u), COW_IMG(0x10621838u), 5, t2, 1u, 1u, 0u, 0u);
        t4 = rd32(rd32(COW_IMG(0x1057823cu)) + 8u);
        cow_thiscall(g, COW_IMG(0x1015e6e0u), COW_IMG(0x10621838u), 5, t4, 1u, 1u, 0u, 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102051d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102051d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
