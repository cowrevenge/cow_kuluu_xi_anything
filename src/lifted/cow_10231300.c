/* f_0x10231300 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10231300(Guest* g)
{
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    if (t1 != 0u)
    {
        esi = t1;
        t2 = rd32(rd32(esi) + 0x184u);
        g->ebx = arg1;
        g->edi = arg2;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x10117150u), arg4, 5, arg1 + 4u, arg2, arg3, 0x3f800000u, t2);
        t3 = rd32(rd32(esi) + 0x98u);
        g->ebx = arg1;
        g->edi = arg2;
        cow_thiscall(g, COW_IMG(0x101170f0u), arg4, 3, arg1, arg2, t3);
    }
    g->ebx = in_ebx;
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10231300(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10231300(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
