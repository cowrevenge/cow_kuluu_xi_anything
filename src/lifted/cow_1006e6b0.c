/* f_0x1006e6b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_1006e6b0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);

    COW_AT(1006e6b0)
    t1 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
    t2 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
    wr32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u, t1);
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(rd32(self) + 0x5cu), self, 2, t2, arg3);
    g->eax = arg2;
    t3 = cow_thiscall(g, rd32(rd32(self) + 0x24u), self, 3, arg1, arg2, t2);
    t4 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
    t5 = rd32(COW_IMG(0x1047cf7cu));
    wr32(t5 + 0xa90u, t4);
    wr32(t4 * 4u + t5 + 0xa10u, t2);
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t4;
    return t3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006e6b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1006e6b0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
