/* f_0x102f6f8f - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102f6f8f(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->eax = rd32(arg1 + 4u);
    g->edx = in_edx;
    t1 = rd32(arg1 + 4u);
    g->esp = sp0 - 4u;
    t2 = cow_thiscall_cdecl(g, rd32(t1), self, 3, arg1, 1u, 0x1cu);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(arg1 + 0x17cu, t2);
    wr8(t2 + 8u, 0u);
    wr32(t2, COW_IMG(0x102f6ddeu));
    wr32(t2 + 4u, COW_IMG(0x102f6f0bu));
    g->esi = arg1;
    cow_fastcall(g, COW_IMG(0x102f6c31u), t3, t4, 0);
    t5 = g->edx;
    g->esi = in_esi;
    g->edx = t5;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f6f8f(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102f6f8f(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
