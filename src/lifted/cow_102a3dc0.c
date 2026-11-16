/* f_0x102a3dc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102a3dc0(Guest* g)
{
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;

    if (rd32(rd32(COW_IMG(0x109a2858u)) + 0x38u) != 0u)
    {
        ecx = rd32(COW_IMG(0x109a2858u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x109a2858u));
        t1 = rd32(ecx + 0x30u);
        g->esp = sp0;
        t2 = cow_cdecl(g, COW_IMG(0x10275d60u), 4, t1, 0x30u, COW_IMG(0x103bd8d4u), 0x81u);
        wr32(rd32(COW_IMG(0x109a2858u)) + 0x38u, t2);
        ecx = rd32(COW_IMG(0x109a2858u));
    }
    t3 = rd32(ecx + 0x34u) * 0x30u + rd32(ecx + 0x38u);
    t4 = rd32(ecx + 0x34u) + 1u;
    t5 = rd32(ecx + 0x38u);
    wr32(ecx + 0x34u, t4);
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x102a3e20u), 1, t3);
    return t3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a3dc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102a3dc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
