/* f_0x10317f16 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10317f16(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->edx = in_edx;
    cow_cdecl(g, COW_IMG(0x10317500u), 3, arg1, arg2, in_esi);
    t1 = g->edx;
    if (rd8(arg2 + 0x40u) == 0u)
    {
        ecx = arg2;
        edx = t1;
    }
    else
    {
        edx = t1;
        g->ecx = arg2;
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x10317e25u), arg2 + 0x40u, g->ecx, edx, 1, 4, arg1, 2u, COW_IMG(0x1034a2c0u), arg2 + 0x40u);
        t2 = g->ecx;
        t3 = g->edx;
        ecx = t2;
        edx = t3;
    }
    if (rd8(arg2 + 0x80u) != 0u)
    {
        g->esp = sp0;
        cow_call_regs(g, COW_IMG(0x10317e25u), arg2 + 0x80u, g->ecx, edx, 1, 4, arg1, 2u, COW_IMG(0x10354054u), arg2 + 0x80u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10317f16(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10317f16(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
