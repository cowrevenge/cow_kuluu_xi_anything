/* f_0x100464d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100464d0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;

    t1 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    cow_thiscall(g, rd32(rd32(t1) + 0xc8u), rd32(t1), 3, t1, 0x22u, rd32(COW_IMG(0x1047bbe0u)));
    t2 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    cow_thiscall(g, rd32(rd32(t2) + 0xc8u), rd32(t2), 3, t2, 0x24u, rd32(COW_IMG(0x1047bbf8u)));
    t3 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    cow_thiscall(g, rd32(rd32(t3) + 0xc8u), rd32(t3), 3, t3, 0x25u, rd32(COW_IMG(0x1047bbdcu)));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100464d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100464d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
