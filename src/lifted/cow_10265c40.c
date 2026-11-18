/* f_0x10265c40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10265c40(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    COW_AT(10265c40)
    g->esp = sp0 - 8u;
    t1 = cow_fastcall(g, COW_IMG(0x10265b90u), self + 4u, in_edx, 1, 1u);
    t2 = g->edx;
    cow_fastcall(g, COW_IMG(0x10265b90u), self + 8u, t2, 1, 0u);
    t3 = g->ecx;
    t4 = g->edx;
    g->eax = self + 0x18u;
    g->edx = t4;
    t5 = rd32(COW_IMG(0x10329184u));
    t6 = cow_stdcall(g, t5, 1, self + 0x18u);   /* kernel32.dll!InitializeCriticalSection */
    t7 = g->edx;
    g->edx = t7;
    cow_thiscall(g, t5, self + 0x30u, 1, self + 0x30u);
    t8 = g->edx;
    wr32(self + 0x14u, 0u);
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t8;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10265c40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10265c40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
